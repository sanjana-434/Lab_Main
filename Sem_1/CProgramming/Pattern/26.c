/*
   1 2 3 4 5
   2     5
   3   5
   4 5
   5  */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i==1)
                printf("%d ",j);
            else if (j==1)
                printf("%d ",i);
            else if ((i+j)==(n+1))
                printf("%d ",n);
            else
                printf("  ");
        }
        printf("\n");
    }
}