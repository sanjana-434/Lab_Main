//2D array ---Storing and reading array content and its index
#include <stdio.h>
int main()
{
    int r,c;
    printf("\nEnter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for ( int i=0;i<r;i++)
    {
        printf("\nEnter row %d : ",i+1);
        for (int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int h=0;h<r;h++)
    {
        for (int y=0;y<c;y++)
        {
            printf("\na[%d][%d] = %d",h,y,a[h][y]);
        }
    }
}