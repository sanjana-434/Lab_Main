
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Room{
    char roomNo[4];
    int occupied[365];
    char type[10];
    float cost;
public:
    void setData(const char* rn,const char* t,float c){
        strcpy(roomNo,rn);
        strcpy(type,t);
        cost=c;
    }
    void display(){
        cout<<endl<<roomNo<<"    "<<type<<"    "<<cost<<"    "<<occupied[85]<<occupied[86]<<occupied[87]<<occupied[88];
    }

};
fstream f;
Room r;
int main(){ 
    f.open("rooms.bin",ios::binary|ios::out|ios::app);
    char rn[4];
    int o[365];
    char t[10];
    float c;
    int n=30;
        r.setData("S01","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("S02","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("S03","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("S04","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("S05","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("S06","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("S07","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("S08","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("S09","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("S10","suit",15000);
        f.write((char*)&r,sizeof(r));
        r.setData("P01","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("P02","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("P03","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("P04","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("P05","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("P06","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("P07","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("P08","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("P09","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("P10","premium",10000);
        f.write((char*)&r,sizeof(r));
        r.setData("D01","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D01","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D02","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D03","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D04","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D05","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D06","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D07","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D08","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D09","delux",7000);
        f.write((char*)&r,sizeof(r));
        r.setData("D10","delux",7000);
        f.write((char*)&r,sizeof(r));

    f.close();
    
    cout<<endl<<"-------------------------------------------------------------------------------------------------------------------------";
    f.open("rooms.bin",ios::binary|ios::in);
    if (!f){
        cerr<<endl<<"Error opening file!";
        exit(1);
    }
    while(f.read((char*)&r,sizeof(r))){
        r.display();
    }
}