//operator overloading using member functions
#include <iostream>
using namespace std;

class complex{
    float real;
    float img;
public:
    complex();
    complex(float,float);
    complex operator+(const complex& b);
    complex operator-(const complex& b);
    complex operator*(const complex& b);
    complex operator/(const complex& b);
    complex operator+=(const complex& b);
    complex operator-=(const complex& b);
    complex operator*=(const complex& b);
    complex operator/=(const complex& b);
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
complex complex::operator+(const complex& b){
    complex c;
    c.real=real+b.real;
    c.img=img+b.img;
    return c;
}
complex complex::operator-(const complex& b){
    complex c;
    c.real=real-b.real;
    c.img=img-b.img;
    return c;
}
complex complex::operator*(const complex& b){
    complex c;
    c.real=(real*b.real)-(img*b.img);
    c.img=(real*b.img)+(img*b.real);
    return c;
}
complex complex::operator/(const complex& b){
    complex c;
    c.real=(real*b.real)+(img*b.img)/(b.real*b.real-b.img*b.img);
    c.img=(b.real*img)+(b.img*real)/(b.real*b.real-b.img*b.img);
    return c;
}
complex complex ::operator+=(const complex& b){
    real=real+b.real;
    img=img+b.img;
}
complex complex::operator-=(const complex& b){
    real=real-b.real;
    img=img-b.img;
}
complex complex::operator*=(const complex& b){
    real=(real*b.real)-(img*b.img);
    img=(real*b.img)+(img*b.real);
}
complex complex::operator/=(const complex& b){
    real=((real*b.real)+(img*b.img))/(b.real*b.real-b.img*b.img);
    img=((b.real*img)+(b.img*real))/(b.real*b.real-b.img*b.img);
}

void complex::display(){
    cout<<endl;
    if (img<0){
        cout<<real<<" - "<<-img<<"i";
    }
    else{
        cout<<real<<" + "<<img<<"i";
    }
}
int main(){
    /*
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
    c6.display();*/
    complex c1(4,5),c2(8,2);
    c1+=c2;
    c1.display();
    c1-=c2;
    c1.display();
    c1*=c2;
    c1.display();
    c1*=c2;
    c1.display();
    
}