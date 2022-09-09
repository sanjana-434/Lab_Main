#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class followers{
    char s1[20];
    char s2[20];
public: 
    void setData(const char* a,const char* b){
        strcpy(s1,a);
        strcpy(s2,b);
    }
    void display(){
        cout<<endl<<s1<<"  "<<s2;
    }
};
fstream f;
followers ff;

int main(){
    /*
    f.open("followers.bin",ios::binary|ios::app|ios::out);
    ff.setData("neha@","kri@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("neha@","yush@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("neha@","sanj@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("neha@","jeevi@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("kri@","jeevi@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("preth@","sanj@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("preth@","kri@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("sanj@","kri@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("sanj@","bhar@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("sanj@","ben@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("bhar@","ben@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("bhar@","sanj@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("bhar@","preth@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("yush@","bhar@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("yush@","preth@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("ben@","yush@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("ben@","bhar@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("ben@","neha@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("jeevi@","yush@");
    f.write((char*)&ff,sizeof(ff));
    ff.setData("jeevi@","neha@");
    f.write((char*)&ff,sizeof(ff));
    f.close();*/
    f.open("followers.bin",ios::binary|ios::in);
    while(f.read((char*)&ff,sizeof(ff))){
        ff.display();
    }
    f.close();

}