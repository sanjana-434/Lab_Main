//Pascal's Traingle 
#include <stdio.h>
int fact (int num);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int a ,b ,c;
    for (int i=0;i<=n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            a = fact(i);
            b = fact(j);
            c = fact(i-j);
            printf("%-4d",a/(b*c));
        }
        printf("\n");
    }
}
int fact (int num)
{
    int n=1;
    if (num==0 || num==1)
        n=1;
    else
    {
        for (int i=1;i<=num;i++)
            n*=i; 
    }
    return n;
}