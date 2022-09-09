//2D ARRAY==find the min and max row wise
#include <stdio.h>
int main()
{
    int r,c , i,j;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for (i=0;i<r;i++)
    {
        printf("Enter the values of row %d",i+1);
        for (j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    int max,min;
    for (i=0;i<r;i++)
    {
        max=a[i][0];
        min=a[i][0];
        for (j=0;j<c;j++)
        {
            if (a[i][j]>max)
                max=a[i][j];
            if (min>a[i][j])
                min=a[i][j];
        }
        printf("\nRow %d -- Max : %d -- Min : %d",i+1,max,min);
    }

}