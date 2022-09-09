#include <iostream>
//#include "pet.h"
using namespace std;

class Owner{
private:
    char name[30];
    Pet* pet;
public:
    Owner(char* name);
    void setPet(Pet* pet);
    friend ostream& operator<<(const ostream& out,const Owner& o);
};
