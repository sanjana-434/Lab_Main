#include <stdio.h>
int main()
{
    unsigned int n, num , a;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("\nEnter the number of bits to be rotated : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        a=(num&1==1)?(a=0x80000000):(a=0x0);
        num=num>>1;
        num=num|a;
    }    
    printf("The number after rotating it by %d bits : %d",n,num);
}