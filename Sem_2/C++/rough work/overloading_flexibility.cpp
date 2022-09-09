#include <iostream>
using namespace std;

class point{
    int x,y;
    public:
        point(){x=0;y=0;}
        point(int a,int b){x=a;y=b;}
        friend point& operator+(int,point&);
        friend point& operator+(point&,int);
        void display(){
            cout<<endl<<"x = "<<x;
            cout<<endl<<"y = "<<y;
        }
};
point& operator+(int num,point& p){
    p.x+=num;
    p.y+=num;
    return p;
}
point& operator+(point& p,int num){
    p.x+=num;
    p.y+=num;
    return p;
}
int main(){
    point p1;
    p1=p1+100;
    p1.display();
    p1=100+p1;
    p1.display();

}