#include <stdio.h>
int main()
{
    int n;
    int i,j;
    printf("Enter the value of n (no of rows) : ");
    scanf("%d",&n);
    int a[n][n];
    for (i=0;i<n;i++)
        a[i][0]=1;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=1;
    }
    for (i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
            a[i+1][j+1]=a[i][j]+a[i][j+1];
    }
    printf("\nPASCAL'S TRIANGLE \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            if (j<=i)
            {
                printf("%d ",a[i][j]);
            }
        printf("\n");
    }
}