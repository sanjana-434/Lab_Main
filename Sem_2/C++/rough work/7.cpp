#include <iostream>
using namespace std;

int f(int &x){
    cout<<endl<<"x = "<<x;
    cout<<endl<<"&x = "<<&x;
    return x;
}

int main(){
    int a=10;
    cout<<endl<<"a = "<<a;
    cout<<endl<<"&a = "<<&a;

    const int & b=f(a);            //why do we use const??  f(a) will return a r value

    cout<<endl<<"b = "<<b;
    cout<<endl<<"&b = "<<&b;

}