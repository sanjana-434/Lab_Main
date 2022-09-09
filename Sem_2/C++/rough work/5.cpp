#include <iostream>
using namespace std;

//factorial
int fact(int n);
int main(){
    cout<<fact(3);
}

int fact(int n){
    if (n!=0){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}