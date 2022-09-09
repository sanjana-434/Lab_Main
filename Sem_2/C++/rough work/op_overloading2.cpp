//operator overloading using friend functions
#include <iostream>
using namespace std;

class complex{
    float real;
    float img;
public:
    complex();
    complex(float,float);
    friend complex operator+(const complex& a,const complex& b);
    friend complex operator-(const complex& a,const complex& b);
    friend complex operator*(const complex& a,const complex& b);
    friend complex operator/(const complex& a,const complex& b);
    void display();
};
complex::complex(){
    real=0;
    img=0;
}
complex::complex(float a,float b){
    real=a;
    img=b;
}
complex operator+(const complex& a,const complex& b){
    complex c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}
complex operator-(const complex& a,const complex& b){
    complex c;
    c.real=a.real-b.real;
    c.img=a.img-b.img;
    return c;
}
complex operator*(const complex& a,const complex& b){
    complex c;
    c.real=(a.real*b.real)-(a.img*b.img);
    c.img=(a.real*b.img)+(a.img*b.real);
    return c;
}
complex operator/(const complex& a,const complex& b){
    complex c;
    c.real=((a.real*b.real)+(a.img*b.img))/(b.real*b.real-b.img*b.img);
    c.img=((b.real*a.img)+(b.img*a.real))/(b.real*b.real-b.img*b.img);
    return c;
}
void complex::display(){
    if (img<0){
        cout<<real<<" - "<<-img<<"i";
    }
    else{
        cout<<real<<" + "<<img<<"i";
    }
}
int main(){
    complex c1(34,12),c2(-3,2),c3,c4,c5,c6;
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c6=c1/c2;
    cout<<endl<<"c3 = ";
    c3.display();
    cout<<endl<<"c4 = ";
    c4.display();
    cout<<endl<<"c5 = ";
    c5.display();
    cout<<endl<<"c6 = ";
    c6.display();
    
}