#include <stdio.h>
int main()
{
    int r,i,j,k;
    printf("\nEnter the number of columns/rows : ");
    scanf("%d",&r);
    int diff=r-1;
    int arr[r][r];
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
            scanf("%d",&arr[i][j]);
    }
    int s[r*r];
    int in=0;
    for(i=0;i<2*r-1;i++)
    {
        for (j=0;j<r;j++)
        {
            for (k=0;k<r;k++)
            {
                if ((j-k)==diff)
                {
                    printf("%d ",arr[j][k]);
                }
            }
        }
        diff--;
    }
}