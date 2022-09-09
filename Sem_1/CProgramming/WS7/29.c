
#include <stdio.h>
int main()
{
    int n , sum=0 ;
    printf("The number of times the c programming should be printed : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("\n%d I love C Programming!!",i);
        sum+=i;
    }
    printf("\nPrinted this message %d times.",n);
    printf("\nThe sum of the numbers from 1 to %d is %d.\n",n,sum);

}