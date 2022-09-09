#include <stdio.h>
int main()
{
    int m,n,i,j,k,f,s;
    printf("Enter the rows and columns of the arrays :");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n];
    int sum[m][n];
    int diff[m][n];
    int mult[m][n];
    printf("\nEnter the values of array A : ");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter the values of array B : ");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }
    //sum
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            sum[i][j]=a[i][j]+b[i][j];
    }
    //diff
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            diff[i][j]=a[i][j]-b[i][j];
    }
    //prod
    s=0;
    if (n==m)
    {
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                for (k=0;k<n;k++)
                    s+=a[i][k]*b[k][j];
                mult[i][j]=s;
                s=0;
            }
        }
    }
    else
    {
        f=0;
        printf("\nProduct of A and B can't be found\n");
    }
    //printing
    printf("\nSum of A and B : \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            printf("%d  ",sum[i][j]);
        printf("\n");
    }
    printf("\nDifference of A and B : \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            printf("%d  ",diff[i][j]);
        printf("\n");
    }
    if (f!=0)
    {
    printf("\nProduct of A and B : \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            printf("%d  ",mult[i][j]);
        printf("\n");
    }
    }
}