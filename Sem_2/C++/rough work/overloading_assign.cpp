#include <iostream>
using namespace std;

class data{
    int* d;
    public:
        data(){
            d=new int;
        }
        data(int a){
            d=new int(a);
        }
        void change(int a){
            *d=a;
        }
        void display(){
            cout<<endl<<*d;
        }
        data& operator=(data& x){
            *d=*x.d;
        }
};
int main(){
    data d1(10),d2;
    d2=d1;
    d1.display();
    d2.display();
    d1.change(20);
    d1.display();
    d2.display();

}