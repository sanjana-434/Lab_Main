#include <iostream>
using namespace std;

class point{
    int x;
    int y;
    public:
        point(){
            x=0;
            y=0;
        }
        point(int a,int b){
            x=a;
            y=b;
        }
        point& operator++(){
            x++;
            y++;
            return *this;
        }
        point operator++(int){
            point temp=*this;
            ++*this;
            return temp;
        }
        void display(){
            cout<<endl<<"x = "<<x;
            cout<<endl<<"y = "<<y;
        }
        friend void operator-(point& p);
        friend point operator--(point& p);
        friend point operator--(point& p,int);
};
void operator-(point& p){
    p.x=-p.x;
    p.y=-p.y;
}
point operator--(point& p){
    p.x--;
    p.y--;
    return p;
}
point operator--(point& p,int){
    point temp=p;
    p.x--;
    p.y--;
    return temp;
}

int main(){
    point p1(5,5),p2,p3(8,8);
   /* p2=++p1;
    p3=p1++;
    cout<<endl<<"p1 : ";
    p1.display();
    cout<<endl<<"p2 : ";
    p2.display();
    cout<<endl<<"p3 : ";
    p3.display();
    operator-(p1);
    p1.display();*/
    p2=--p1;
    p3=p1--;
    p1.display();
    p2.display();
    p3.display();

}


























