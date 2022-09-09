#include <iostream>
//#include "ll.h"
#include "definitions.cpp"
using namespace std;


int main(){
    ll ll1,ll2;
    int n1,n2;
    int i,d;
    cout<<endl<<"Enter number of elements of linked list 1 : ";
    cin>>n1;
    for (int i=0;i<n1;i++){
        cout<<endl<<"Enter data "<<i+1<<" : ";
        cin>>d;
        ll1.insertEnd(d);
    }
    cout<<endl<<"Enter number of elements of linked list 2 : ";
    cin>>n2;
    for (int i=0;i<n2;i++){
        cout<<endl<<"Enter data "<<i+1<<" : ";
        cin>>d;
        ll2.insertEnd(d);
    }
    cout<<endl<<"Displaying linked list 1 : ";
    ll1.display();
    cout<<endl<<"Displaying linked list 2 : ";
    ll2.display();
    if (n1!=n2){
        cout<<endl<<"Not Equal";
    }
    else{
        ll1.equalOrNot(ll2);
    }
}
