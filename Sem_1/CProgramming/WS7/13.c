#include <stdio.h>
int main()
{
    int m;
    int fact (int i);
    printf("Enter the value of m : ");
    scanf("%d",&m);
    printf("  m/x");
    for(int k=0;k<=m;k++)
    {
        printf("%5d",k);
    }
    for (int i=0;i<=m;i++)
    {
        printf("\n");
        printf("%5d",i);
        int a,b,c;
        for (int j=0;j<=i;j++)
        {
            a=fact(i);
            b=fact(j);
            c=fact(i-j);
            printf("%5d",a/(b*c));
        }   
    }
}
int fact (int i)
{
    int f=1;
    if (i==0)
    {
        f=1;
    }
    else
    {
        for (int j=1;j<=i;j++)
        {
            f*=j;
        }
    }
    return f;
}