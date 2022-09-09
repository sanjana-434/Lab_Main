#include <iostream>
using namespace std;
int main()
{
    int c=0,i,j;
    int cpy,reverse;         //copy the num   //reverse of cpy
    for (i=2;i<10000;i=i+2)
    {
        if (c==50)
            break;
        cpy=i;
        reverse=0;
        while(cpy!=0)
        {
            reverse=(reverse+(cpy%10))*10;
            cpy/=10;
        }
        reverse/=10;
        if (i==reverse)
        {
            c++;
            cout<<i;
            if (c%5==0)
                cout<<endl;
            else
                cout<<" ";
        }
    }
}