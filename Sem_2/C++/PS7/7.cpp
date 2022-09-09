#include <iostream>
using namespace std;

class book{
protected:
    string title;
    string author;
public:
    void getTitle(){
        cin.ignore(1000,'\n');
        cout<<endl<<"Enter Title : ";
        getline(cin,title,'\n');
    }
    void getAuthor(){
        cout<<endl<<"Enter Author : ";
        getline(cin,author,'\n');
    }
    void putTitle(){
        cout<<endl<<"Title : "<<title;
    }
    void putAuthor(){
        cout<<endl<<"Author : "<<author;
    }
};
class fiction:public book{
private:
    float readingLevel;
public:
    void getReadingLevel(){
        cout<<endl<<"Enter numeric grade reading level : ";
        cin>>readingLevel;
    }
    void putReadingLevel(){
        cout<<endl<<"Reading level : "<<readingLevel;
    }
    void getdata(){
        getTitle();
        getAuthor();
        getReadingLevel();
    }
    void putdata(){
        putTitle();
        putAuthor();
        putReadingLevel();
    }
};
class nonfiction:public book{
private:
    float numberPg;
public:
    void getnumberPages(){
        cout<<endl<<"Enter number of pages : ";
        cin>>numberPg;
    }
    void putNumberPages(){
        cout<<endl<<"Number of Pages : "<<numberPg;
    }
    void getdata(){
        getTitle();
        getAuthor();
        getnumberPages();
    }
    void putdata(){
        putTitle();
        putAuthor();
        putNumberPages();
    }
};
int main(){
    fiction f1;
    nonfiction nf1;
    cout<<endl<<"Enter details of fiction books";
    cout<<endl<<"------------------------------";
    f1.getdata();
    cout<<endl<<"Enter details of non fiction books";
    cout<<endl<<"----------------------------------";
    nf1.getdata();
    cout<<endl;
    cout<<endl<<"Details of fiction book 1";
    cout<<endl<<"-------------------------";
    f1.putdata();
    cout<<endl;
    cout<<endl<<"Details of non fiction book 1";
    cout<<endl<<"-----------------------------";
    nf1.putdata();
}