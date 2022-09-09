#include <stdio.h>
int main()
{
    int r,c,i,j;
    int r1,c1,r2,c2;
    printf("\nEnter the rows and columns of the array : ");
    scanf("%d%d",&r,&c);
    printf("\nEnter array elements : ");
    int arr[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    printf("\nEnter the two positions (r1,c1) and (r2,c2) : ");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    for (i=r1;i<r2+1;i++)
    {
        for (j=c1;j<c2+1;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("\nSum : %d",sum);

}