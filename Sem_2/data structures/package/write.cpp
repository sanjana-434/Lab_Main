#include <iostream>
#include <fstream>
using namespace std;

class data_Vertex{
    char id[20];
    char name[20];
    char pass[20];
    char dob[20];
    char institution[20];
    char native[20];
public:
    void setData(){
        cout<<"*";
        cin>>id>>name>>pass>>dob>>institution>>native;
    }
    void display(){
        cout<<endl<<id<<" "<<name<<" "<<pass<<" "<<dob<<" "<<institution<<" "<<native;
    }
    char* return_id(){
        return id;
    }
    char* return_name(){
        return name;
    }
    char* return_pass(){
        return pass;
    }
    char* return_dob(){
        return dob;
    }
    char* return_institution(){
        return institution;
    }
    char* return_native(){
        return native;
    }
};

fstream f;
data_Vertex dv;

int main(){
    /*
    f.open("vertex.bin",ios::binary|ios::out|ios::app);
    for (int i=0;i<8;i++){
        dv.setData();
        f.write((char*)&dv,sizeof(dv));
    }
    f.close();*/
    f.open("vertex.bin",ios::binary|ios::in);
    if (!f){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        while(f.read((char*)&dv,sizeof(dv))){
            dv.display();
        }
    }
    f.close();
}
