//Right Half Diamond Pattern using *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<2*n;i++)
    {
        if (i<=n)
        {
            for (int j=1;j<=i;j++)
                printf("* ");
            printf("\n");    
        }
        else 
        {
            for (int j=2*n;j>i;j--)
                printf("* ");
            printf("\n");
        }
    }
}