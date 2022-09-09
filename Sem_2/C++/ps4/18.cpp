#include <iostream>
using namespace std;

class Circle{
    float radius;
    static float pi;
public:
    Circle(){
        radius=0.0;
    }
    Circle(int r){    //r=radius
        radius=r;
    }
    /*static setpi(float p){
        pi=2;
    }*/
    void setRadius();
    float getRadius();
    float getArea();
    float getDiameter();
    float getCircumference();

};
float Circle::pi=3.14159;

void Circle::setRadius(){
    cout<<endl<<"Enter the radius : ";
    cin>>radius;
}
float Circle::getRadius(){
    return radius;
}
float Circle::getArea(){
    return pi*radius*radius;
}
float Circle::getDiameter(){
    return 2*radius;
}
float Circle::getCircumference(){
    return 2*pi*radius;
}

int main(){
    //Circle::setpi(2);
    int r;      //r=radius
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    Circle c1(r);
    int ch;     //choice
    do{
        cout<<endl<<"Menu";
        cout<<endl<<"===="<<endl;
        cout<<endl<<"1) Set Radius";
        cout<<endl<<"2) Get Radius";
        cout<<endl<<"3) Get Area";
        cout<<endl<<"4) Get diameter ";
        cout<<endl<<"5) Get circumference ";
        cout<<endl<<"6) EXIT";
        cout<<endl<<endl<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 2:cout<<endl<<"Radius : "<<c1.getRadius();break;
            case 1:c1.setRadius();break;
            case 3:cout<<endl<<"Area  : "<<c1.getArea();break;
            case 4:cout<<endl<<"Diameter : "<<c1.getDiameter();
            case 5:cout<<endl<<"Circumference : "<<c1.getCircumference();
        }
    }while(ch!=6);
}