#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int year,int month,int day){
    this->year=year;
    this->day=day;
    this->month=month;
}
ostream& operator<<(const ostream& out,const Fish* f){
    out<<endl<<"Date : "<<day<<" / "<<month<<" / "<<year;
}