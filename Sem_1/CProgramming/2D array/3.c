//finding min and max column wise
#include <stdio.h>
int main()
{
    int r,c,i,j;
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
        int max=a[0][i],min=a[0][i];
        for (j=0;j<r;j++)
        {
            if (max<a[j][i])
                max=a[j][i];
            if (min>a[j][i])
                min=a[j][i];
        }
        printf("\nMax and Min of column %d are %d and %d respectively \n",i+1,max,min);
    }
}