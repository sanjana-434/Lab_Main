#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n,i,j;
    cout<<"\nEnter n : ";
    cin>>n;
    cout<<"\t\tn\t\tf(n)"<<endl;
    for (i=2;i<=n;i=i+2)
    {
        double f=0.0;
        for(j=1;j<=i;j++)
        {
            f=f+(1.0/(j*j));
        }
        f=pow((6*f),0.5);
        cout<<"\t\t"<<i<<"\t\t"<<f<<endl;
    }
}