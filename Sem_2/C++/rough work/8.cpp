#include <iostream>
#include <iomanip>
using namespace std;

ostream &s(ostream& o){
    o<<"\t";
    return o;
}

int main(){
    cout<<s<<"sanjana";
    cout<<s<<"Tarun";
    cout<<s<<setprecision(3)<<32.24534;
    cout<<s<<"sanjana";
    cout<<s<<"Tarun";
}