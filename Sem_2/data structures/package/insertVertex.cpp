#include <iostream>
#include <fstream>
using namespace std;

class data_Vertex{
    string id;
    string name;
    string pass;
    string dob;
    string institution;
    string native;
public:
    void setData(){
        cout<<"*";
        cin>>id>>name>>pass>>dob>>institution>>native;
    }
    void display(){
        cout<<endl<<id<<" "<<name<<" "<<pass<<" "<<dob<<" "<<institution<<" "<<native;
    }
};

fstream f;
data_Vertex dv;

int main(){
    /*f.open("vertex.dat",ios::binary|ios::app|ios::out);
    if (!f){
        cerr<<endl<<"Error opening file (1) !";
        exit(1);
    }
    int n=8;
    for (int i=0;i<n;i++){
        dv.setData();
        f.write((char*)&dv,sizeof(dv));
    }
    f.close();*/
    f.open("vertex.dat",ios::binary|ios::in);
    if (!f){
        cerr<<endl<<"Error opening file (2) !";
        exit(1);
    }
    while(f.read((char*)&dv,sizeof(dv))){
        dv.display();
    }
    f.close();

}