//CODE WRITTEN BY SANJANA R ON 23/03/2022
//functions that finds all the traid numbers below 1000
#include <iostream>
using namespace std;

int fun1(int n1,int n2,int n3);
int fun2(int n1,int n2,int n3);
int fun3(int n1,int n2,int n3);
int main(){
    int n1,n2,n3; //num1,num2,num3
    int f1,f2,f3; //flags
    cout<<endl<<"All triad numbers below 1000";
    cout<<endl<<"----------------------------";
    for (n1=1;n1<1000;n1++){
        for (n2=1;n2<1000;n2++){
            for (n3=1;n3<1000;n3++){
                f1=fun1(n1,n2,n3);
                f2=fun2(n1,n2,n3);
                f3=fun3(n1,n2,n3);
                if ((f1+f2+f3)==3){
                    cout<<endl<<"num1: "<<n1<<" num2: "<<n2<<" num3: "<<n3;
                }
            }
        }

    }
}
int fun1(int n1,int n2,int n3){
    if (100<=n1 && n1<=999 && 100<=n2 && n2<=999 &&  100<=n3 && n3<=999){
        return 1;            
    }
    return 0;
}
int fun2(int n1,int n2,int n3){
    int c[10]={0};
    while (n1){
        c[n1%10]++;
        n1/=10;
    }
    while (n2){
        c[n2%10]++;
        n2/=10;
    }
    while (n3){
        c[n3%10]++;
        n3/=10;
    }
    for (int i=0;i<10;i++){
        if (c[i]>=2){
            return 0;
        }
    }
    return 1;

}
int fun3(int n1,int n2,int n3){
    if (((n1*2)==n2) && ((n1*3)==n3)){
        return 1;
    }
    return 0;
}