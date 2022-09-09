//finding min and max row wise
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
    for (i=0;i<r;i++)
    {
        int max=a[i][0],min=a[i][0];
        for (j=0;j<c;j++)
        {
            if (max<a[i][j])
                max=a[i][j];
            if (min>a[i][j])
                min=a[i][j];
        }
        printf("\nMax and Min of row %d are %d and %d respectively \n",i+1,max,min);
    }
}