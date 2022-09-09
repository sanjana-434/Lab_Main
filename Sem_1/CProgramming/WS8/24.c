#include <stdio.h>
int main()
{
    int a[5][5],i,j;
    //inputting the values
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    }
    int r,c;
    for (i=0;i<5;i++)
    {
        int max=a[i][0];
        for (j=0;j<5;j++)
        {
            if (max<a[i][j])
            {
                max=a[i][j];
                c=j;
            }
        }
        int min=max;
        for (j=0;j<5;j++)
        {
            if (min>a[j][c])
                min=a[j][c];
        }
        if (min==max)
            printf("\nRow : %d , column : %d ",i+1,c+1);
    }
        
}