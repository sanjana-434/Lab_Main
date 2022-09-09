#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

class Dog:public Pet{
    int akcNum;
    Date fixed;
    Date* shots;
    
public:
    Dog(char* name,int ackNum,int year,int month,int day);
    void setShots(int year,int month,int day);
    friend ostream& operator<<(const ostream& out,const Dog& d);

};
