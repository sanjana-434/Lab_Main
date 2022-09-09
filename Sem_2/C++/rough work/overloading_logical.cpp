#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A(int x){
            a=x;
        }
        bool operator&&(const A&);
        bool operator||(const A&);
        bool operator==(const A&);
};
bool A::operator&&(const A& x){
    return a&&x.a;
}
bool A::operator||(const A& x){
    return a||x.a;
}
bool A::operator==(const A& x){
    return a==x.a;
}
int main(){
    A c1(10);
    A c2(0);
    cout<<endl<<"c1 && c2 = "<<(c1 && c2);
    cout<<endl<<"c1 || c2 = "<<(c1 || c2);
    cout<<endl<<"c1 == c2 = "<<(c1 == c2);



}