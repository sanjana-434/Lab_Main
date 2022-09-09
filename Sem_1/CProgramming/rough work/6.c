#include <stdio.h>
int main()
{
    int r,c,i,j,f=1;;
    printf("Enter the number of rows and columns of the array : ");
    scanf("%d%d",&r,&c);
    printf("\nEnter the elements of array A : ");
    int a[r][c],b[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter the elements of array B : ");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }
    for (i=0;i<r;i++)
    {
        for (j=0;i<c;j++)
        {
            if (a[i][j]!=b[i][j])
            {
                f=0;
                break;
            }
        }
    }
    if (f==0)
        printf("\nThe array is not id");
    if (f==1)
        printf("\nId");
}