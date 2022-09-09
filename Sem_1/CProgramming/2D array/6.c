//C program to interchange the rows in the matrix
#include <stdio.h>
int main()
{
    int r,c,i,j,r1,r2;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("\nEnter the elements : ");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter the rows that has to be interchanged : ");
    scanf("%d%d",&r1,&r2);
    int l;
    for (i=0;i<c;i++)
    {
        l=a[r1][i];
        a[r1][i]=a[r2][i];
        a[r2][i]=l;
    }
    //printing
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}