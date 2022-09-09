#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;


fstream file;
fstream f3;

class Book{
    int bookID;
    string bookName;
    string authorName;
    string publisherName;
    string bookType;
    float price;
    int yearOfPublication;
public:
    int get_bookID(){
        return bookID;
    }
    void update_bookName(string n){
        bookName=n;
    }
    void update_authorName(string a){
        authorName=a;
    }
    void update_publisherName(string p){
        publisherName=p;
    }
    void update_bookType(string t){
        bookType=t;
    }
    void update_price(float p){
        price =p;
    }
    void update_year(int y){
        yearOfPublication=y;
    }
    void display(){
        cout<<endl<<setw(10)<<bookID<<setw(20)<<bookName<<setw(20)<<authorName<<setw(20)<<publisherName<<setw(20)<<bookType<<setw(20)<<price<<setw(30)<<yearOfPublication;
    }
    void setData(){
        cout<<endl<<"Book ID            : ";
        cin>>bookID;
        cout<<endl<<"Book Name          : ";
        cin>>bookName;
        cout<<endl<<"Author Name        : ";
        cin>>authorName;
        cout<<endl<<"Publisher Name     : ";
        cin>>publisherName;
        cout<<endl<<"Book Type          : ";
        cin>>bookType;
        cout<<endl<<"Price              : ";
        cin>>price;
        cout<<endl<<"Year of Publisher  : ";
        cin>>yearOfPublication;
    }
};

Book b;
void delete_record();
void sort();
int count();

int main(){
    
    int ch;
    string name,author,pub,type;
    float price;
    int id,year;
    int size;
    int ch2;
    do{
        cout<<endl<<"What do you want to choose? Enter 0 to exit";
        cout<<endl<<"1) Add a new record";
        cout<<endl<<"2) Show all records";
        cout<<endl<<"3) Update/Modify a record";
        cout<<endl<<"4) Search a record";
        cout<<endl<<"5) Delete a record";
        cout<<endl<<"6) Sort records"<<endl;
        cin>>ch;

        switch(ch){
            case 1: file.open("book.bin",ios::binary|ios::app|ios::out);
                    if (!file){
                        cout<<endl<<"Error opening file";
                    }
                    cout<<endl<<"Enter details of new record";
                    cout<<endl<<"---------------------------";
                    b.setData();
                    file.write((char*)&b,sizeof(b));
                    file.close();
                    break;
            case 2: file.open("book.bin",ios::binary|ios::in);
                    cout<<endl<<"displaying details of all Books";
                    cout<<endl<<"-------------------------------";
                    cout<<endl<<"----------------------------------------------------------------------------------------------------------------------------------------------";
                    cout<<endl<<setw(10)<<"book ID"<<setw(20)<<"book Name"<<setw(20)<<"author Name"<<setw(20)<<"publisher Name"<<setw(20)<<"book Type"<<setw(20)<<"price"<<setw(30)<<"year Of Publication";
                    cout<<endl<<"----------------------------------------------------------------------------------------------------------------------------------------------";
                    while( file.read((char*)&b,sizeof(b))){
                       
                        b.display();
                    }
                    cout<<endl<<"----------------------------------------------------------------------------------------------------------------------------------------------";
                    file.close();
                    break;
            case 3: 
                    cout<<endl<<"Enter book Id to be updated : ";
                    cin>>id;
                    file.open("book.bin",ios::binary|ios::in|ios::out);
                    while(!file.eof()){
                        //b.display();
                        size=file.tellg();
                        file.read((char*)&b,sizeof(b));
                        
                        if (file){
                            if (b.get_bookID()==id){
                                cout<<endl<<"reached";
                                b.update_bookName("tarun");  
                                file.seekp(size);
                                file.write((char*)&b,sizeof(b));
                            }
                        }
                    }
                    file.close();
                    break;

            case 4: file.open("book.bin",ios::in|ios::binary);
                    cout<<endl<<"Enter book ID to be searched : ";
                    cin>>id;
                    while(!file.eof()){
                        file.read((char*)&b,sizeof(b));
                        if (id==b.get_bookID()){
                            cout<<endl<<"----------------------------------------------------------------------------------------------------------------------------------------------";
                            cout<<endl<<setw(10)<<"book ID"<<setw(20)<<"book Name"<<setw(20)<<"author Name"<<setw(20)<<"publisher Name"<<setw(20)<<"book Type"<<setw(20)<<"price"<<setw(30)<<"year Of Publication";
                            cout<<endl<<"----------------------------------------------------------------------------------------------------------------------------------------------";
                            b.display();
                            cout<<endl<<"----------------------------------------------------------------------------------------------------------------------------------------------";
                            break;
                        }
                    }
                    file.close();
                    break;
            case 5: delete_record();
                    break;
            case 6: sort();break;
        }
    }while(ch!=0);
}
void delete_record(){
    int id;
    cout<<endl<<"Enter book ID to be deleted : ";
    cin>>id;
    file.open("book.bin",ios::binary|ios::in);
    ofstream f;
    f.open("rough.bin",ios::binary|ios::out);
    while(!file.eof()){
        file.read((char*)&b,sizeof(b));
        if (b.get_bookID()!=id){
            f.write((char*)&b,sizeof(b));
        }
    }
    file.close();
    f.close();
    remove("book.bin");
    rename("rough.bin","book.bin");
    
}
void sort(){
    Book temp;
    int c=count();
    Book* b2=new Book[c];
    file.open("book.bin",ios::binary|ios::in);
    file.read((char*)b2,sizeof(b)*c);
    for (int i=0;i<c-1;i++){
        if (b2[i].get_bookID()>b2[i+1].get_bookID()){
            temp=b2[i];
            b2[i]=b2[i+1];
            b2[i+1]=temp;
            i=-1;
        }
    }
    file.close();
    file.open("book.bin",ios::binary|ios::out);
    file.write((char*)b2,sizeof(b)*c);
    file.close();
}
int count(){
    int c=0;
    file.open("book.bin",ios::binary|ios::out);
    while(!file.eof()){
        c++;
    }
    file.close();
    return c;
}


