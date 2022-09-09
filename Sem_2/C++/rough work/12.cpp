#include <iostream>
using namespace std;

class Distance{
    float m;
    float km;
public:
    Distance();
    Distance(int m,int km);
    friend bool operator>(const Distance& d1,const Distance& d2);
    friend bool operator<(const Distance& d1,const Distance& d2);
    friend bool operator==(const Distance& d1,const Distance& d2);
};
    Distance::Distance(){
        m=0;
        km=0;
    }
    Distance::Distance(int m,int km){
        this->m=m;
        this->km=km;
    }
    bool operator>(const Distance& d1,const Distance& d2){
        if (d1.km*1000+d1.m > d2.km*1000+d2.m){
            return 1;
        }
        return 0;
    }
    bool operator<(const Distance& d1,const Distance& d2){
        if (d1.km*1000+d1.m < d2.km*1000+d2.m){
            return 1;
        }
        return 0;
    }
    bool operator==(const Distance& d1,const Distance& d2){
        if (d1.km*1000+d1.m == d2.km*1000+d2.m){
            return 1;
        }
        return 0;
    } 
int main(){
    Distance d1(2,3);
    Distance d2(5,3);
    cout<<endl<<"(d1 > d2) = "<<(d1>d2);
    cout<<endl<<"(d1 < d2) = "<<(d1<d2);
    cout<<endl<<"(d1 == d2) = "<<(d1==d2);
}