//hollow rectangle using *
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a (row) :");
    scanf("%d",&a);
    printf("Enter the value of b (column) :");
    scanf("%d",&b);
    for (int i=1;i<=a;i++)
    {
        for (int j=1;j<=b;j++)
        {
            printf("%c ", (i==1 || j==1 || i==a || j==b) ? '*':' ');
        }
        printf("\n");
    }
}