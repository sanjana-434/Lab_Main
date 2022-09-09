#include <iostream>
using namespace std;

int main()
{
    cout<<"Program to find Easter Sunday ";
    cout<<endl<<"-------------------------------";
    int y; //y=year
    cout<<endl<<"\n\nEnter the year : ";
    cin>>y;
    int a,b,c,d,e,f,g,h,j,k,m,r,n,p;
    a=y%19;
    c=y%100;
    b=y/100;
    e=b%4;
    d=b/4;
    g=(8*b+13)/25;
    h=(19+a+b-d-g+15)/30;
    k=c%4;
    j=c/4;
    m=(a+11*h)/319;
    r=(2*e+2*j-k-h+m+32)%7;
    n=(h-m+r+90)/25;
    p=(h-m+r+n+19)%32;
    char month[12][10]={"Jan","Feb","Mar","April","May","June","July","August","Sept","Oct","Nov","Dec"};
    cout<<endl<<"Month  : "<<month[n-1];
    cout<<endl<<"Day    : "<< p;
    
}