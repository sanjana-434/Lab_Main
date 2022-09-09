//2D ARRAY==find the min and max column wise
#include <stdio.h>
int main()
{
    int r,c , i,j;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for (i=0;i<r;i++)
    {
        printf("\nEnter row %d : ",i+1);
        for (j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    int min,max;
    for (j=0;j<c;j++)
    {
        max=a[0][j];
        min=a[0][j];
        for (i=0;i<r;i++)
        {
            if (max<a[i][j])
                max=a[i][j];
            if (min>a[i][j])
                min=a[i][j];
        }
        printf("\nColumn %d -- Max : %d , Min : %d ",j+1,max,min);
    } 
}