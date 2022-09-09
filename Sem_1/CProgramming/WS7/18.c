#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float log=0 , x;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("\nEnter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        log+=pow(((x-1)/x),i);
    }
    log=log*0.5;
    printf("\nThe natural logarithm : %0.3f",log);
}