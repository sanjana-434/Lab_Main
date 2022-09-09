#include <iostream>
using namespace std;

class sanjana{
    int a;
    int b;
    public:
    sanjana(int x,int y){a=x;b=y;}
        void get(){
            cout<<endl<<a;
            cout<<endl<<b;
        }

};

int main(){
    sanjana s1(4,5);
    sanjana s2(6,7);
    s1.get();
    s2.get();
    s1=s2;
    s1.get();
    s2.get();
}