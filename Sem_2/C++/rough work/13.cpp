#include<iostream>
#include<iomanip>
using namespace std;
class Distance
{
    float km,m;
public:
    Distance()
    {
        km=0;
        m=0;
    }
    void read();
    void show();
    friend bool operator>(const Distance& D1,const Distance& D2);
    friend bool operator<(Distance& d1,Distance& d2);
    friend bool operator==(Distance& d1,Distance& d2);
};
void Distance ::read()
{
    cout<<endl<<"Enter kilometer : ";
    cin>>km;
    cout<<endl<<"Enter meter : ";
    cin>>m;
}
void Distance::show()
{
    cout<<endl<<"Kilometer : "<<km<<"\nMeter : "<<m;
}
bool operator>(const Distance& D1,const Distance& D2)
{
    if(D1.km*1000+D1.m>D2.km*1000+D2.m){
        return true;
    }
    else{
        return false;
    }
}

bool operator<(Distance& d1,Distance& d2)
{
    float m1,m2;
    m1=d1.km*1000+d1.m;
    m2=d2.km*1000+d2.m;
    if(m1<m2)
        return true;
    else
        return false;
}

bool operator==(Distance& d1,Distance& d2)
{
    float m1,m2;
    m1=d1.km*1000+d1.m;
    m2=d2.km*1000+d2.m;
    if(m1==m2)
        return true;
    else
        return false;
}

int main()
{
    Distance d1,d2;
    cout<<endl<<"Enter distance 1 :";
    d1.read();
    cout<<endl<<"Enter distance 2 :";
    d2.read();
    cout<<endl<<"(d1>d2) : "<<(d1>d2);
    cout<<endl<<"(d1<d2) : "<<(d1<d2);
    cout<<endl<<"(d1==d2) : "<<(d1==d2);
}