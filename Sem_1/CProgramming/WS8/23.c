#include <stdio.h>
int main()
{
    int a[5][5]={ {34,21,32,41,25},
                  {14,42,43,14,31},
                  {54,45,52,42,23},
                  {33,15,51,31,35},
                  {21,52,33,13,23}};
    int r=1,c=1;
    int p;
    printf("Tracing the hunt : \n");
    for (int i=0;i<24;i++)
    {
        if (p!=a[r-1][c-1])
        {
            p=a[r-1][c-1];
            printf(" %d ",p);
            r=p/10;
            c=p%10;
        }

    }
    printf("\nFound the tresure in the row : %d and column : %d\n",r,c );
}