//swaping the first row and last row
#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("\nEnter the elements :");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nArray before swaping : \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
    int f;
    for (i=0;i<c;i++)
    {
        f=a[0][i];
        a[0][i]=a[r-1][i];
        a[r-1][i]=f;
    }
    printf("\nArray after swaping : \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }

}