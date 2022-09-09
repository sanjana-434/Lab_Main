#include <iostream>
#include "definitions.cpp"
using namespace std;

int main(){
    ll ll1;
    int n,i,d;
    cout<<endl<<"Enter the number of elements in the linked list : ";
    cin>>n;
    for (i=0;i<n;i++){
        cout<<endl<<"Enter data "<<i+1<<" : ";
        cin>>d;
        ll1.insertEnd(d);
    }
    cout<<endl<<"Middle element : "<<ll1.findMiddle();
}