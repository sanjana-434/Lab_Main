#include <stdio.h>
int main()
{
    float sum=0,product=1,average;
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sum=sum+(1.0/i);
        product=product*(1.0/i);
    }
    average=sum/n;
    printf("\nthen its sum from 1 to 1/%d = %0.3f\nthen its product from 1 to 1/%d = %0.3f\nand its average from 1 to 1/%d = %0.3f",n,sum,n,product,n,average);
    if (n>=5)
    {
         printf("\nthen its sum from 1 to 1/%d = %0.16f\nthen its product from 1 to 1/%d = %0.16e\nand its average from 1 to 1/%d = %0.16f",n,sum,n,product,n,average);
    }
}