#include <stdio.h>
int main()
{
    int a[5][5];
    int rowSum[5]={0},colSum[5]={0};
    int i,j;
    printf("Enter the element's values of array : ");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //row sum
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            rowSum[i]+=a[i][j];
        }
    }
    //col sum
    for (j=0;j<5;j++)
    {
        for (i=0;i<5;i++)
        {
            colSum[j]+=a[i][j];
        }
    }
    //print row sum
    for (i=0;i<5;i++)
        printf("%d ",rowSum[i]);
    printf("\n");
    //print col sum
    for (i=0;i<5;i++)
        printf("%d ",colSum[i]);
}