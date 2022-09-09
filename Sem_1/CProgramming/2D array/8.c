//C program to arrange column elements in ascending order
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
    for (i=0;i<c;i++)
    {
        for (j=0;j<r-1;j++)
        {
            if (a[j][i]>a[j+1][i])
            {
                l=a[j][i];
                a[j][i]=a[j+1][i];
                a[j+1][i]=l;
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