/* n =4
                1     1
                 2   2
                  3 3
                   4
                  3 3
                 2   2
                1     1    */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for (int i=0;i<(2*n-1);i++)
    {
        if (i<n)
        {
            for (int j=0;j<i;j++)
                printf(" ");
            printf("%d",i+1);
            for (int k=0;k<(n+1)-2*i;k++)
                printf(" ");
            if ((i+1)!=(n))
                printf("%d",i+1);
            printf("\n");
        }
        else
        {
            for (int h=0;h<(2*n-2)-i;h++)
                printf(" ");
            printf("%d",(2*n-1)-i);
            int v=2;
            for (int l=0;l<(2*v+1);l++)
            {
                printf(" ");
            }
            printf("%d",(2*n-1)-i);
            printf("\n");
        }
    }
}