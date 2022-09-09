#include <iostream>
using namespace std;

class student{
protected:
    string name;
    int rollNo;
public:
    void getName();
    void putName();
    void getRollNo();
    void putRollNo();
};

class mark:public student{
protected:
    float mark1,mark2,mark3;
public:
    void getMarks();
    void putMarks();
};

class sport:public student{
protected:
    float point;
public:
    void getPoint();
    void putPoint();
};

class result:public mark,public sport{
public:
    void get();
    void print();
};

void student::getName(){
    cout<<endl<<"Enter Name : ";
    cin>>name;
}
void student::getRollNo(){
    cout<<endl<<"Enter RollNo : ";
    cin>>rollNo;
}
void student::putName(){
    cout<<endl<<"Name : "<<name;
}
void student::putRollNo(){
    cout<<endl<<"Roll No : "<<rollNo;
}
void mark::getMarks(){
    cout<<endl<<"Enter mark1 : ";
    cin>>mark1;
    cout<<endl<<"Enter mark2 : ";
    cin>>mark2;
    cout<<endl<<"Enter mark3 : ";
    cin>>mark3;
}
void mark::putMarks(){
    cout<<endl<<"Mark 1 : "<<mark1;
    cout<<endl<<"Mark 2 : "<<mark2;
    cout<<endl<<"Mark 3 : "<<mark3;
}
void sport::getPoint(){
    cout<<endl<<"Enter points : ";
    cin>>point;
}
void sport::putPoint(){
    cout<<endl<<"Points : "<<point;
}
void result::print(){
    putName();
    putRollNo();
    putMarks();
    putPoint();
}