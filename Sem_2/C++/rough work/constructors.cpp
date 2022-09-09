//constructors are used when we want to set the values initially

#include <iostream>
#include<string>
using namespace std;

class Student
{
    private:
        string name;
        string rollno;
    public:
        Student(string x)    //constructors
        {
            assign_name(x);
        }
        void assign_name(string n)
        {
            name=n;
        }
        void assign_rollno(string n)
        {
            rollno=n;
        }
        string get_name()
        {
            return name;
        }
        string get_rn()
        {
            return rollno;
        }
        
};
int main()
{
    Student o1("abinaya");
    Student o2("sanjana");
    o1.assign_rollno("21pd01");
    o2.assign_rollno("21pd31");
    cout<<"Name : "<<o1.get_name()<<" Roll no : "<<o1.get_rn()<<endl;
    cout<<"Name : "<<o2.get_name()<<" Roll no : "<<o2.get_rn()<<endl;
    return 0;
}