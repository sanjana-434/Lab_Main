#include <iostream>
using namespace std;

class student{
    int rollNo;
    string name;
    float marks;
public:
    student(){rollNo=1,name="sanjana",marks=98.6;};
    student display(){
        cout<<"Name  : "<<name;
        return *this;
    }

};

int main()
{
    student s;
    s.display();
}