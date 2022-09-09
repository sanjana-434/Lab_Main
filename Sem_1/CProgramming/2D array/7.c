//C program to arrange row elements in ascending order
#include <stdio.h>
int main()
{
     int r,c,i,j,l;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("\nEnter the elements : ");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c-1;j++)
        {
            if (a[i][j]>a[i][j+1])
            {
                l=a[i][j];
                a[i][j]=a[i][j+1];
                a[i][j+1]=l;
                j=-1;
            }
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}