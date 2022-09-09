#include <iostream>
using namespace std;

class Date{
    int year;
    int month;
    int day;
public:
    Date(int year,int month,int day);
    friend ostream& operator<<(const ostream& out,const Date& d);

};
