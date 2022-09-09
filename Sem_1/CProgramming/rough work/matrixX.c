//matrix multiplication
#include <stdio.h>
int main()
{
    int aRows,aCols,bRows,bCols;
    int r,c;
    printf("Enter the no of rows in matrix a : ");
    scanf("%d",&aRows);
    printf("\nEnter the no of columns in matrix a : ");
    scanf("%d",&aCols);
    int a[aRows][aCols];
    for (r=0;r<aRows;r++)
    {
        printf("\nEnter the row %d : ",r+1);
        for (c=0;c<aCols;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    printf("\nEnter the no of rows in matrix b : ");
    scanf("%d",&bRows);
    printf("\nEnter the no of columns in matrix b : ");
    scanf("%d",&bCols);
    int b[bRows][bCols];
    for (r=0;r<bRows;r++)
    {
        printf("\nEnter the row %d : ",r+1);
        for (c=0;c<bCols;c++)
        {
            scanf("%d",&b[r][c]);
        }
    }

    int mul[aRows][bCols] , sum=0;

    if (bRows != aCols)
        printf("\nCannot perform matrix multiplication");
    else
    {
        for (int i=0;i<aRows;i++)
        {
            for (int j=0;j<bCols;j++)
            {
                for (int k=0;k<bRows;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                mul[i][j]=sum;
                sum=0;
            }
        }
    for(int h=0;h<aRows;h++)
    {
        printf("\n");
        for (int g=0;g<bCols;g++)
        {
            printf("%d  ",mul[h][g]);
        }
    }
    }

}