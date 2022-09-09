#include <iostream>
using namespace std;

class media{
protected:
    string title;
    string publication;
public:
    void getTitle();
    void getPublication();
    void putTitle();
    void putPublication();
};
void media::getPublication(){
    //cin.ignore(1000,'\n');
    cout<<endl<<"Enter Publication : ";
    getline(cin,publication,'\n');
};

void media::getTitle(){
    cin.ignore(1000,'\n');
    cout<<endl<<"Enter Title : ";
    getline(cin,title,'\n');
}
void media::putTitle(){
    cout<<endl<<"Title : "<<title;
}
void media::putPublication(){
    cout<<endl<<"Publication : "<<publication;
}
class books:public media{
private:
    int numberOfPages;
public:
    void getNumberOfPages();
    void putNumberOfPages();
    void read();
    void show();
};
void books::getNumberOfPages(){
    cout<<endl<<"Enter the number of pages : ";
    cin>>numberOfPages;
}
void books::putNumberOfPages(){
    cout<<endl<<"Number of pages : "<<numberOfPages;
}
void books::read(){
    getTitle();
    getPublication();
    getNumberOfPages();
}
void books::show(){
    putTitle();
    putPublication();
    putNumberOfPages();
}
class video:public media{
private:
    int playingTime;
public:
    void getplayingTime();
    void putplayingTime();
    void read();
    void show();
};
void video::getplayingTime(){
    cout<<endl<<"Enter playing time : ";
    cin>>playingTime;
}
void video::putplayingTime(){
    cout<<endl<<"Number of pages : "<<playingTime;
}
void video::read(){
    getTitle();
    getPublication();
    getplayingTime();
}
void video::show(){
    putTitle();
    putPublication();
    putplayingTime();
}
int main(){
    video v1;
    books b1;
    cout<<endl<<"Details of video ";
    cout<<endl<<"----------------";
    v1.read();
    cout<<endl<<"Details of books ";
    cout<<endl<<"----------------";
    b1.read();
    cout<<endl;
    cout<<endl<<"Details of video 1";
    cout<<endl<<"------------------";
    v1.show();
    cout<<endl<<"Details of book 1";
    cout<<endl<<"-----------------";
    b1.show();

}