#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class book{
    int bookId;
    string bookName;
    string authorName;
    string publisherName;
    string bookType;
    float price;
    int yearOfPublication;
public:
    void setData(){
        cout<<endl<<"Enter book ID              : ";
        cin>>bookId;
        cout<<endl<<"Enter book Name            : ";
        cin>>bookName;
        cout<<endl<<"Enter Author Name          : ";
        cin>>authorName;
        cout<<endl<<"Enter publisher Name       : ";
        cin>>publisherName;
        cout<<endl<<"Enter Book Type            : ";
        cin>>bookType;
        cout<<endl<<"Enter price                : ";
        cin>>price;
        cout<<endl<<"Enter year of publication  : ";
        cin>>yearOfPublication;
    }
    void display(){
        cout<<endl<<setw(20)<<bookId<<setw(20)<<bookName<<setw(20)<<authorName<<setw(20)<<publisherName<<setw(20)<<bookType<<setw(20)<<price<<setw(20)<<yearOfPublication;
    }
    void modify_yop(int year){
        yearOfPublication=year;
    }
    void modify_publisherName(string pn){
        publisherName=pn;
    }
    void modify_priceBy10(){
        price=price+(price*0.10);
    }
    int getbookId(){
        return bookId;
    }
    string getbookName(){
        return bookName;
    }

};


fstream file;
book b;

void addRecord();
void deleteRecord();
void generateRecord();
void searchRecord();
void searchRecord_id();
void searchRecord_name();
void modifyRecord();
void modifyRecord_publisherName();
void modifyRecord_yop();
void modifyRecord_increaseBy10();
int count();
void sort();

int main(){
    int ch;
    do{
        cout<<endl<<"What do you want to choose ? Enter 0 to exit";
        cout<<endl<<"--------------------------------------------";
        cout<<endl<<"1) Add a record";
        cout<<endl<<"2) Delete a record by book Id";
        cout<<endl<<"3) Modify a record";
        cout<<endl<<"4) Search a record";
        cout<<endl<<"5) Generate report";
        cout<<endl<<"6) Sort records"<<endl;
        cin>>ch;

        switch(ch){
            case 1 : addRecord();break;
            case 2 : deleteRecord();break;
            case 3 : modifyRecord(); break;
            case 4 : searchRecord(); break;
            case 5 : generateRecord(); break;
            case 6 : sort();break;
        }
    }while(ch!=0);

}

void sort(){
    book temp;
    int c=count();
    book* b2=new book[c];
    file.open("book.bin",ios::binary|ios::in);
    file.read((char*)b2,sizeof(b)*c);
    for (int i=0;i<c-1;i++){
        if (b2[i].getbookId()>b2[i+1].getbookId()){
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
void modifyRecord(){
    int ch3;
    cout<<endl<<"Modify : ";
    cout<<endl<<"-------";
    cout<<endl<<"1) Publisher Name";
    cout<<endl<<"2) Year of publisher";
    cout<<endl<<"3) Increase all price by 10%";
    cout<<endl<<"Choose one : ";
    cin>>ch3;
    switch(ch3){
        case 1 : modifyRecord_publisherName();break;
        case 2 : modifyRecord_yop();break;
        case 3 : modifyRecord_increaseBy10();break;
    }
}
void modifyRecord_increaseBy10(){
    int size;
    file.open("book.bin",ios::binary|ios::out|ios::in);
    if (!file){
        cerr<<endl<<"Error opening File!";
        exit(1);
    }
    else{
        while(!file.eof()){
            size=file.tellg();
            file.read((char*)&b,sizeof(b));

            if(file){
                b.modify_priceBy10();
                file.seekp(size);
                file.write((char*)&b,sizeof(b));
            }
        }
    }
    file.close();
}
void modifyRecord_yop(){
    int flag=0;
    file.open("book.bin",ios::binary|ios::in|ios::out);
    if (!file){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        int size;
        int id;
        cout<<endl<<"Enter book Id to be modified : ";
        cin>>id;
        int yop;
        cout<<endl<<"Enter year of publication to be modified : ";
        cin>>yop;
        while(!file.eof()){
            size=file.tellg();
            file.read((char*)&b,sizeof(b));
            if (file){
                if (id==b.getbookId()){
                    flag=1;
                    file.seekp(size);
                    b.modify_yop(yop);
                    file.write((char*)&b,sizeof(b));
                    break;
                }
            }
            
        }
    }
    file.close();
    if (flag==0){
        cout<<endl<<"No such book ID found!";
    }
    else{
        cout<<endl<<"Record Modified successfully !";
    }
}
void modifyRecord_publisherName(){
    int flag=0;
    file.open("book.bin",ios::binary|ios::in|ios::out);
    if (!file){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        int size;
        int id;
        cout<<endl<<"Enter book Id to be modified : ";
        cin>>id;
        string pn;
        cout<<endl<<"Enter publisher Name to be modified : ";
        cin>>pn;
        while(!file.eof()){
            size=file.tellg();
            file.read((char*)&b,sizeof(b));
            if (file){
                if (id==b.getbookId()){
                    flag=1;
                    file.seekp(size);
                    b.modify_publisherName(pn);
                    file.write((char*)&b,sizeof(b));
                    break;
                }
            }
            
        }
    }
    file.close();
    if (flag==0){
        cout<<endl<<"No such book ID found!";
    }
    else{
        cout<<endl<<"Record Modified successfully !";
    }
}


void searchRecord(){
    int ch2;
    cout<<endl<<"Search by : ";
    cout<<endl<<"-----------";
    cout<<endl<<"1) Book ID ";
    cout<<endl<<"2) Book Name";
    cout<<endl<<"Choose one : ";
    cin>>ch2;
    switch(ch2){
        case 1 : searchRecord_id(); break;
        case 2 : searchRecord_name(); break;
    }
}
void searchRecord_name(){
    string n;
    int flag=0;
    cout<<endl<<"Enter Book Id : ";
    cin>>n;
    file.open("book.bin",ios::binary|ios::in);
    if (!file){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        while(file.read((char*)&b,sizeof(b))){
            if (n==b.getbookName()){
                flag=1;
                cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------";
                cout<<endl<<setw(20)<<"bookId"<<setw(20)<<"BookName"<<setw(20)<<"authorName"<<setw(20)<<"publisherName"<<setw(20)<<"bookType"<<setw(20)<<"price"<<setw(20)<<"yearOfPublication";
                cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------";
                b.display();
                cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------";
            }
        }
    }
    file.close();
    if (flag==0){
        cout<<endl<<"No such record found";
    }
    else{
        cout<<endl<<"Search is successful !";
    }    
}
void searchRecord_id(){
    int id;
    int flag=0;
    cout<<endl<<"Enter Book Id : ";
    cin>>id;
    file.open("book.bin",ios::binary|ios::in);
    if (!file){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        while(file.read((char*)&b,sizeof(b))){
            if (id==b.getbookId()){
                flag=1;
                cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------";
                cout<<endl<<setw(20)<<"bookId"<<setw(20)<<"BookName"<<setw(20)<<"authorName"<<setw(20)<<"publisherName"<<setw(20)<<"bookType"<<setw(20)<<"price"<<setw(20)<<"yearOfPublication";
                cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------";
                b.display();
                cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------";
            }
        }
    }
    file.close();
    if (flag==0){
        cout<<endl<<"No such record found";
    }
    else{
        cout<<endl<<"Search is successful !";
    }
}

void deleteRecord(){
    int flag=0;
    int id;
    cout<<endl<<"Enter the book ID of record to be deleted : ";
    cin>>id;
    fstream f("temp.bin",ios::binary|ios::out);
    file.open("book.bin",ios::binary|ios::in);
    while(file.read((char*)&b,sizeof(b))){
        if (id!=b.getbookId()){
            f.write((char*)&b,sizeof(b));
            flag=1;
        }
    }
    file.close();
    f.close();
    remove("book.bin");
    rename("temp.bin","book.bin");
    if (flag==0){
        cout<<endl<<"No such record exist !";
    }
    else{
        cout<<endl<<"Record deleted Successfully !";
    }
}
void addRecord()
{
    file.open("book.bin",ios::binary|ios::out|ios::app);
    if (!file){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        b.setData();
        file.write((char*)&b,sizeof(b));
    }
    file.close();
}
void generateRecord(){
    file.open("book.bin",ios::binary|ios::in);
    if (!file){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------";
        cout<<endl<<setw(20)<<"bookId"<<setw(20)<<"BookName"<<setw(20)<<"authorName"<<setw(20)<<"publisherName"<<setw(20)<<"bookType"<<setw(20)<<"price"<<setw(20)<<"yearOfPublication";
        cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------";
        while(file.read((char*)&b,sizeof(b))){
            b.display();
        }
        cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------";
    }
    file.close();
}
int count(){
    file.open("book.bin",ios::binary|ios::in);
    int c=0;
    while(file.read((char*)&b,sizeof(b))){
        c++;
    }
    file.close();
    return c;

}