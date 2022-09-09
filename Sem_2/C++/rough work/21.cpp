#include <iostream>
using namespace std;

void f(double d1,double d2){
    cout<<"1)";
}
void f(double d1,int d2){
    cout<<"2)";
}

int main(){
    f(1.0,2);
    float x=9.0;
    cout<<"###"<<sizeof(x);
    cout<<sizeof(1.0);
    f(2,2);
    cout<<endl<<sizeof(2);
}