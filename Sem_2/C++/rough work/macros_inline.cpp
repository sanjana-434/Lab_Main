#include <iostream>
using namespace std;
#define sqrt_(x) x*x

inline int sqrt_(int x){
    return x*x;
}
int main(){
    int r,s,a=3,b=3;
    r=sqrt(++a);
    s=sqrt(++b);
    cout<<endl<<a<<"   "<<b;
    cout<<endl<<"Inline function  :  "<<r;
    cout<<endl<<"Macro function  :  "<<s;

}