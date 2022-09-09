//finding max ,min,and avg of temp of each cites
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of cities : ");
    scanf("%d",&n);
    int temp[n][20];
    for (i=0;i<n;i++)
    {
        printf("\nEnter the temperatures of city %d",i+1);
        for (j=0;j<20;j++)
            scanf("%d",&temp[i][j]);
    }
    //displaying
    for (i=0;i<n;i++)
    {
        int max=temp[i][0],min=temp[i][0];
        float avg=0;
        printf("city :  %d  ",i+1);
        for (j=0;j<20;j++)
        {
            if (max<temp[i][j])
                max=temp[i][j];
            if (min>temp[i][j])
                min=temp[i][j];
            avg+=temp[i][j];
        }
        printf("\nMax : %d",max);
        printf("\nMin : %d",min);
        printf("\nAverage : %0.3f\n",avg/20.0);
    }
}