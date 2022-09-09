#include <iostream>
#include <cstring>
#include "Dog.h"
using namespace std;

Dog::Dog(char* name,int ackNum,int year,int month,int day){
    strcpy(name,name);
    this->ackNum=ackNum;
    this->fixed.year=year;
    this->fixed.month=month;
    this->fixed.day=day;
}
void Dog::setShots(int year,int month,int day){
    this->shots->year=year;
    this->shots->month=month;
    this->shots->day=day;
}
ostream& operator<<(const ostream& out,const Dog& d){
    out<<endl<<"ackNum     : "<<d.ackNum;
    out<<endl<<"Shots Date : "<<fixed.day<<" / "<<fixed.month<<" / "<<fixed.year;
    out<<endl<<"Fixed Date : "<<shots->day<<" / "<<shots->month<<" / "<<shots->year;
}