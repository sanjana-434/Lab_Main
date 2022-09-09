#include <iostream>
using namespace std;
#include "Pet.h"

Pet::Pet(char* name){
    strcpy(this->name,name);
}
void Pet::setOwner(char* Owner){
    owner->name=Owner->name;
}
ostream& operator<<(const ostream& out,const Pet& p){
    out<<endl<<"Pet Name     : "<<p.name;
    out<<endl<<"owner Name   : "<<p.owner->name;
    return out;
}
char* Pet::getPetName(){
    return name;
}
char* Pet::getOwnerName(){
    return owner->name;
}


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