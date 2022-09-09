//2D array--Swapping 1st row with the last row 
#include <stdio.h>
int main()
{
    int r,c ,s;  //s==non-permanent swaping variable
    int i,j;
    printf("Enter the number rows and columns : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    //Getting the inputs
    for (i=0;i<r;i++)
    {
        printf("Enter row %d",i+1);
        for (j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    //Swaping
    for (j=0;j<c;j++)
    {
        s=a[0][j];
        a[0][j]=a[r-1][j];
        a[r-1][j]=s;
    }
    //printing the 2d array
    for (i=0;i<r;i++)
    {
        printf("\n");
        for (j=0;j<c;j++)
            printf("%-3d",a[i][j]);
    }
}