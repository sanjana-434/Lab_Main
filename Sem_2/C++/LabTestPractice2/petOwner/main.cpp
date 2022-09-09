#include <iostream>
#include <cstring>
//#include "Fish.h"

using namespace std;
class Pet;
class Fish;
class Dog;
class Date;

class Owner{
private:
    string name;
    Pet* pet;
public:
    Owner(string name);
    void setPet(Pet* pet_);
    friend ostream& operator<<(const ostream& out,const Owner& o);
};

class Pet{
private:
    string name;
    Owner* owner;
public:
    Pet(string name);
    void setOwner(Owner* owner_);
    string getPetName();
    string getOwnerName();
    friend ostream& operator<<(const ostream& out,const Pet& o);
};

class Dog:public Pet{
    int akcNum;
    Date fixed;
    Date* shots;
    
public:
    Dog(string name,int ackNum,int year,int month,int day);
    void setShots(int year,int month,int day);
    friend ostream& operator<<(const ostream& out,const Dog& d);

};

class Fish:public Fish{
    int color;
public:
    Fish(string name,int color);
    friend ostream& operator<<(const ostream& out,const Fish& f);
};

class Date{
    int year;
    int month;
    int day;
public:
    Date(int year,int month,int day);
    friend ostream& operator<<(const ostream& out,const Date& d);

};

//owner
Owner::Owner(string name){
    this->name=name;
}
void Owner::setPet(Pet* pet_){
    pet=pet_;
}
ostream& operator<<(const ostream& out,const Owner& o){
    out<<endl<<"Owner Name : "<<o.name;
    out<<endl<<"Pet Name   : "<<o.pet->getPetName();
    return out;
}
//pet

Pet::Pet(string name){
    this->name=name;
}
void Pet::setOwner(Owner* owner_){
    owner=owner_;
}
ostream& operator<<(const ostream& out,const Pet& p){
    out<<endl<<"Pet Name     : "<<p.name;
    out<<endl<<"owner Name   : "<<p.owner->name;
    return out;
}
string Pet::getPetName(){
    return name;
}
string Pet::getOwnerName(){
    return owner->name;
}
//dog
Dog::Dog(string name,int ackNum,int year,int month,int day){
    this->name=name;
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
    out<<endl<<"Shots Date : "<<d.fixed.day<<" / "<<d.fixed.month<<" / "<<d.fixed.year;
    out<<endl<<"Fixed Date : "<<d.shots->day<<" / "<<d.shots->month<<" / "<<d.shots->year;
}
//fish
Fish::Fish(string name,int color){
    this->name=name;
    this->color=color;
}
ostream& operator<<(const ostream& out,const Fish& f){
    out<<endl<<"Fish name : "<<name;
    out<<endl<<"Color     : "<<color;
}
//date
Date::Date(int year,int month,int day){
    this->year=year;
    this->day=day;
    this->month=month;
}
ostream& operator<<(const ostream& out,const Date& d){
    out<<endl<<"Date : "<<d.day<<" / "<<d.month<<" / "<<d.year;
}

int main(){
    cout<<"Hello";
}
