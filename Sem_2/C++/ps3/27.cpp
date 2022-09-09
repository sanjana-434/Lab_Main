//CODE WRITTEN BY SANJANA R ON 25/03/2022
//function to receive any number of arguments of any data type 

#include <iostream>
#include <cstdarg>
using namespace std;


double funNumSum(int c,...)  //c=number of arguments passed
{                            //...=ellipses
    va_list args;
    va_start(args,c);      //initialise agrs for c num of arguments
    double sum=0;
    for (int i=0;i<c;i++){   //access all the arguments assigned to args
        sum=sum+va_arg(args,int);
    }
    va_end(args);  //cleans memory reserved for va_list=args //not used usually //portable when we use this
    return sum;
}
int main(){
    //cout<<endl<<funNumSum (3 ,5, 2.6, 7.2);
    //cout<<endl<<funNumSum (3 ,5, 2, 7.2);
    //cout<<endl<<funNumSum (3 ,2.5, 2, 7);
    cout<<endl<<funNumSum (3 ,5, 2, 7);
    cout<<endl<<funNumSum (3 ,5, 2, 7);
    cout<<endl<<funNumSum (3 ,2, 2, 7);
    cout<<endl<<funNumSum (5 ,10, 20, 5, 15, 20);

}
//limitation ===works only for integer args
