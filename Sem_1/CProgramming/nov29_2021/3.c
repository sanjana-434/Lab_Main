#include <stdio.h>
int main()
{
    int i,j,n,d;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("\nEnter the elements of the matrix : ");
    int a[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nMatrix : \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            printf(" %d ",a[i][j]);
        printf("\n");
    }
    if (n==3)
        d=a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    if (n==2)
        d=(a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
    printf("\nDeterminant of the matrix : %d",d);
}
/*int res=0,m1,m2,x; 
    for (i=0;i<n;i++)
    {
        m1=1;
        m2=1;
        x=1;
        for (j=0;j<n;j++)
        {
            if (i!=j)
            {
                m1*=a[x][j];
                x++;
            }
        }
        x=1;
        for (j=n-1;j>=0;j++)
        {
            if (i!=j)
            {
                m2*=a[x][j];
                x++;
            }
        }
        res+=(a[0][i])*(m1-m2);
    }
    printf("\nDeterminant of the matrix is : %d",res);*/