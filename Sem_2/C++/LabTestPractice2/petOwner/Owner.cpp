#include <iostream>
using namespace std;
//#include "Owner.h"

Owner::Owner(char* name){
    strcpy(this->name,name);
}
void Owner::setPet(Pet* Pet){
    pet->name=Pet->name;
}
ostream& operator<<(const ostream& out,const Owner& o){
    out<<endl<<"Owner Name : "<<o.name;
    out<<endl<<"Pet Name   : "<<o.pet->name;
    return out;
}