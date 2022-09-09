//vector functions
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v{1,2,3,4};

    cout<<endl<<"v.begin()  : " <<*v.begin(); 
    cout<<endl<<"v.end()  : " <<*v.end(); 
    cout<<endl<<"v.rbegin()  : " <<*v.rbegin(); 
    cout<<endl<<"v.rend()  : " <<*v.rend(); 
}