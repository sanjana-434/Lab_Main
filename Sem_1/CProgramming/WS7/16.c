#include <stdio.h>
#include <math.h>

int main()
{
    int num,sum=0 , n;
    printf("Enter the num : ");
    scanf("%d",&num);
    n=num;
    /* 153 =1^3 +5^3 +3^3  */
    while (num!=0)
    {
        sum+=pow(num%10,3);
        num/=10;
    }
    if (sum==n)
    {
        printf("\nThe number %d is an armstrong number\n",n);
    }
    else 
    {
        printf("\nThe number %d is not an armstrong number\n",n);
    }
    
}