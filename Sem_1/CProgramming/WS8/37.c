#include <stdio.h>
int main()
{
    int r,c,i,j,x=0,f,k;
    printf("Enter the number of rows and columns of array : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("\nEnter the elements of the array : ");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for (i=0;i<r;i++)
    {
        f=0;
        for (j=0;j<r && i!=j;j++)
        {
            for(k=0;k<c && k!=x;k++)
            {
                if (a[i][k]==a[j][k])
                {
                    f++;
                }
            }
        }
        if (f==c-1)
        {
            printf("\nNO\n");
            return 0;
        }
        x++;
    }
    printf("\nYES\n");
}
