#include <iostream>
using namespace std;

class point{
    int x;
    int y;
    public:
        point(){x=0;y=0;}
        point(int a,int b){
            x=a;
            y=b;
        }
        friend ostream& operator<<(ostream& os,point& p);
        friend istream& operator>>(istream& is,point& p);
    
};
ostream& operator<<(ostream& os,point& p){
    os<<p.x<<endl;
    os<<p.y<<endl;
    return os;
}
istream& operator>>(istream& is,point& p)
{
    is>>p.x;
    is>>p.y;
    return is;
}   
int main(){
    point p1;
    cin>>p1;
    cout<<p1;

}