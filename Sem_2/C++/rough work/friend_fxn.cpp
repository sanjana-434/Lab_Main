#include <iostream>
using namespace std;

class time2;
class time1{
    int h1,m1,s1;
    public:
        time1(int a,int b,int c){
                h1=a,m1=b,s1=c;
        }
        friend int compare(const time1& t1,const time2& t2);
};

class time2{
    int h2,m2,s2;
    public:
        time2(int a,int b,int c){
                h2=a,m2=b,s2=c;
        }
        friend int compare(const time1& t1,const time2& t2);

};
int compare(const time1& t1,const time2& t2){
    if (t1.h1==t2.h2 && t1.m1==t2.m2 && t1.s1==t2.s2){
        return 1;
    }
    return 0;
}
int main(){
    time1 t11(3,4,5);
    time2 t22(3,4,5);
    if (compare (t11,t22)==1){
        cout<<"Equal";
    }
    else{
        cout<<"Not equal";
    }
}