#include <stdio.h>
int numMovesToPrize(int grid[][10], int curR, int curC);
int main()
{
    int c=0,i,j ,w=0;
    int grid[10][10];
    printf("Enter the values of the grid : ");
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            scanf("%d",&grid[i][j]);
            if (grid[i][j]==4)
                w++;
            if (grid[i][j]<0 || grid[i][j]>4 || w>1)
            {
                printf("\ninvalid input");
                return 0;
            }            
        }
        if (w==0)
            printf("\ninvalid input");
    }
    int curR ,curC;
    printf("Enter the current row : ");
    scanf("%d",&curR);
    printf("\nEnter the current column : ");
    scanf("%d",&curC);
    c=numMovesToPrize(grid, curR,curC);
    printf("\nNumber of moves you will take to get to the prize : %d",c);
}
int numMovesToPrize(int grid[][10], int curR, int curC)
{
    int c=0;
    if (grid[curR][curC]==4)
        return 0;
    while (grid[curR][curC]!=4)
    {
        if (grid[curR][curC]==0)
            curR=curR-1;
        else if (grid[curR][curC]==1)
            curC=curC+1;
        else if (grid[curR][curC]==2)
            curR=curR+1;
        else if(grid[curR][curC]==3)
            curC--;
        c++;
    }
    return c;
}