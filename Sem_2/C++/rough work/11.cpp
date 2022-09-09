#include <iostream>
using namespace std;

class Distance{
    float m;
    float km;
public:
    Distance();
    Distance(int m,int km);
    bool operator>(const Distance& d2);
    bool operator<(const Distance& d2);
    bool operator=(const Distance& d2);
};
    Distance::Distance(){
        m=0;
        km=0;
    }
    Distance::Distance(int m,int km){
        this->m=m;
        this->km=km;
    }
    bool Distance::operator>(const Distance& d2){
        if (km*1000+m > d2.km*1000+d2.m){
            return 1;
        }
        return 0;
    }
    bool Distance::operator<(const Distance& d2){
        if (km*1000+m < d2.km*1000+d2.m){
            return 1;
        }
        return 0;
    }
    bool Distance::operator=(const Distance& d2){
        if (km*1000+m == d2.km*1000+d2.m){
            return 1;
        }
        return 0;
    } 
int main(){
    Distance d1(2,3),d2(5,3);
    cout<<endl<<"(d1 > d2) = "<<(d1>d2);
    cout<<endl<<"(d1 < d2) = "<<(d1<d2);
    cout<<endl<<"(d1 == d2) = "<<(d1=d2);
}