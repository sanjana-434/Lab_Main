#include <iostream>
//#include "Owner.h"
using namespace std;

class Pet{
private:
    char name[30];
    Owner* owner;
public:
    Pet(char* name);
    void setOwner(char* Owner);
    char* getPetName();
    char* getOwnerName();
    friend ostream& operator<<(const ostream& out,const Pet& o);
};

class Owner{
private:
    char name[30];
    Pet* pet;
public:
    Owner(char* name);
    void setPet(Pet* pet);
    friend ostream& operator<<(const ostream& out,const Owner& o);
};





