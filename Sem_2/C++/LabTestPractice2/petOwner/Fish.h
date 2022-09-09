#include <iostream>
#include "Dog.h"
using namespace std;

class Fish:public Fish{
    int color;
public:
    Fish(char* name,int color);
    friend ostream& operator<<(const ostream& out,const Fish& f);
};
