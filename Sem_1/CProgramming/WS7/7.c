#include <stdio.h>

int main()
{
    int a=50,k=50,n;//n=total no of stars
    printf("Enter the total number of stars  (<=106): ");
    scanf("%d",&n);
    printf("   k   a\n");
    int f;
    for (int i=1;i<=k;i++)
    {
        for (int j=1;j<=a;j++)
        {
            f=((2*i+1)/2+1)*j + ((2*i+1)/2)*(j-1);
            if (n==f)
            {
                printf("%4d%4d",i,j);
                printf("\n");
            }
        }
    }
}