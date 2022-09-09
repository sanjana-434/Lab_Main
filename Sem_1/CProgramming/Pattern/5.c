//Right Half Pyramid Pattern using *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%c ",((i+j)>=(n-1))?'*':' ');
        }
        printf("\n");
    }
}