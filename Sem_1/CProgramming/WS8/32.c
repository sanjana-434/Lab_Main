#include <stdio.h>
int main()
{
    int x=0,i,j,s;
    int sum[16]={0},arr[6][6];
    printf("Enter the elements of the array : ");
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
            scanf("%d",&arr[i][j]);
    }

    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
            sum[x++]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
    }

    //finding max
    int max=sum[0];
    for (i=1;i<16;i++)
    {
        if (sum[i]>max)
            max=sum[i];
    }
    printf("\nLargest (maximum) hourglass found in Arr : %d\n",max);
}