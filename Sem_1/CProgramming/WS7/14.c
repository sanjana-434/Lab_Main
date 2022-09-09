#include <stdio.h>

int main()
{
    int n;
    float E=1;
    int fact(int i);
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        if ((1.0/fact(i))-(1.0/fact(i+1)) <= 0.00001)
        {
            break;
        }
        else
        {
            E=E+(1.0/fact(i));
        }
    }
    printf("E = %0.4f",E);
}
int fact(int i)
{
    int a=1;
    for (int j=1;j<=i;j++)
    {
        a*=j;
    }
    return a;
}