#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int denom[n],numcoins[n];
    printf("\nEnter the value of the denominated coins : ");
    for (i=0;i<n;i++)
        scanf("%d",&denom[i]);
    printf("\nEnter the number of coins of denominations : ");
    for (i=0;i<n;i++)
        scanf("%d",&numcoins[i]);
    
    //calculating the total amount 
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=numcoins[i]*denom[i];
    }
    printf("\nTotal amount the person has is %d\n",sum);
}