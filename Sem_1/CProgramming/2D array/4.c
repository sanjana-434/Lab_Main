
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of cities : ");
    scanf("%d",&n);
    int temp[n][20];
    for (i=0;i<n;i++)
    {
        for (j=0;j<20;j++)
        {
            printf("\nEnter the temperatures of city %d",i+1);
            scanf("%d",&temp[i][j]);
        }
    }
    //displaying
    printf("\ncity\n");
    for (i=0;i<n;i++)
    {
        printf("  %d  ",i+1);
        for (j=0;j<20;j++)
        {
            printf(" %d ",temp[i][j]);
        }
        printf("\n");
    }
}