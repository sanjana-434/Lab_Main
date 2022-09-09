#include <stdio.h>
int main()
{
    int square[5][5]={0};
    int product[5][6];
    int table[5][6]={{1,2,3,4,5},
                     {2,4,6,8,10},
                     {20,10,5,3,1},
                     {3,6,9,12,15}};

    //1 ) square as identity matrix
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (i==j)
                square[i][j]=1;
        }
    }
    printf("\n1) Identity matrix : \n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("%4d",square[i][j]);
        }
        printf("\n");
    }
    // 2 )
    int n=1;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (i==j)
                square[i][j]=n*n;
        }
        n++;
    }
    printf("\n2)\n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("%4d",square[i][j]);
        }
        printf("\n");
    }
    // 3)
    n=5;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (i+j==4)
                square[i][j]=n;
        }
        n=n*2;
    }
    printf("\n3)\n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("%4d",square[i][j]);
        }
        printf("\n");
    }
    // 4)
    n=1;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            square[i][j]=n;
            n++;
        }
    }
    printf("\n4)\n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("%4d",square[i][j]);
        }
        printf("\n");
    }
    // 5)
    int s=0;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<4;j++)
        {
            table[4][i]+=table[j][i];
            s+=table[j][i];
        }
    }
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<5;j++)
        {
            table[i][5]+=table[i][j];
            s+=table[i][j];
        }
    }
    table[4][5]=s;
    printf("\n5)\n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<6;j++)
        {
            printf("%4d",table[i][j]);
        }
        printf("\n");
    }
    // 6)
    int r;
    for (int i=0;i<5;i++)
        {
            for (int j=0;j<6;j++)
            {
                for (int k=0;k<5;k++)
                {
                    r+=square[i][k]*table[k][j];
                }
                product[i][j]=r;
                r=0;
            }
        }
    printf("\n6)\n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<6;j++)
        {
            printf("%6d",product[i][j]);
        }
        printf("\n");
    }

}