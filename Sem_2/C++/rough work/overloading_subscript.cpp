#include <iostream>
using namespace std;
#define size 10

class arr{
    int a[size];
    public:
        arr(){
            for (int i=0;i<size;i++){
                a[i]=0;
            }
        }
        int operator[](int x){
            if(x>=size){
                cout<<endl<<"Out of bound";
                return a[0];
            }
            return a[x];
        }
            
};

int main(){
    arr a1;
    cout<<endl<<a1[4];
    cout<<endl<<a1[10];
}