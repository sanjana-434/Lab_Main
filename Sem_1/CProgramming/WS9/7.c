#include <stdio.h>

int getIndexBestArea(int grid[][10]);
int main()
{
    int i,j,max;
    int grid[10][10];
    printf("Enter the values of 10x10 grid : ");
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
            scanf("%d",&grid[i][j]);
    }
    max=getIndexBestArea(grid);
    printf("\nThe index of the 3 x 3 mining area with the largest total value : %d \n",max);
}
int getIndexBestArea(int grid[][10])
{
    int i,j;
    int max=10*grid[1][1];
    for(i=1;i<=8;i++)
    {
        for (j=1;j<=8;j++)
        {
            if (max<10* grid[i][j])
                max=10 * grid[i][j];
        }
    }
    return max;
}