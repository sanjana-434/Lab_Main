#include <iostream>
using namespace std;
struct hourlyPaid
{
    float hoursWorked;
    float hourlyRate;
};

struct salarised
{
    float salary;
    float bonus;
};

union d
{
    struct hourlyPaid a;
    struct salarised b;
}c;

int main()
{
    float pay;
    int n;
    cout<< "\nTo Calculate pay for  :";
    cout<< "\n 1) Hourly paid worker ";
    cout<< "\n 2) Salarised ";
    cout<< "\n\nEnter your choice  : ";
    cin>>n;
    if (n==1)
    {
        int i=0;
        do{
        i++;
        if (i!=1)
            cout<<"\nINVALID INPUT !! ENTER AGAIN \n";
        cout<<"\nEnter hours worked : ";
        cin>>c.a.hoursWorked;
        cout<<"\nEnter hourly rate  : ";
        cin>>c.a.hourlyRate;
        pay=c.a.hoursWorked*c.a.hourlyRate;
        }while(!(c.a.hoursWorked<=80 && c.a.hourlyRate>0));
    }
    else
    {
        int i=0;
        do{
        i++;
        if (i!=1)
            cout<<"\nINVALID INPUT !! ENTER AGAIN \n";
        cout<<"\nEnter the salary : ";
        cin>>c.b.salary;
        cout<<"\nEnter the bonus   :";
        cin>>c.b.bonus;
        pay=c.b.salary+c.b.bonus;
        }while(!(c.b.salary>0 && c.b.bonus>0));
    }
    cout<<"\n\nPAY    :   "<<pay;

}