#include <iostream>
using namespace std;
#include "Fish.h"

Fish::Fish(char* name,int color){
    strcpy(this->name,name);
    this->color=color;
}
ostream& operator<<(const ostream& out,const Fish& f){
    out<<endl<<"Fish name : "<<name;
    out<<endl<<"Color     : "<<color;
}