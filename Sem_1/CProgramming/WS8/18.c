#include <stdio.h>
int main()
{
    int MAX,i,h;
    printf("Enter the value of n : ");
    scanf("%d",&MAX);
    int sieve[MAX];
    for (i=0;i<MAX;i++)
        sieve[i]=1;
    
    //checking 
    
    for (h=2;h<10;h++)
    {
        for (i=2;i<MAX;i++)
        {
            if (i!=h)
            {
                if (i%h==0)
                    sieve[i]=0;
            }
        }
    }

    printf("\nPrime numbers are :  ");
    for (i=2;i<MAX;i++)
    {
        if (sieve[i]==1)
            printf(" %d ",i);
    }
 
}