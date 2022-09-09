//Triangle Using Star Hyphen 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=(2*n-1);j++)
        {
            if (j<=n)
            {
                if ((i+j)==(n+1))
                    printf("* ");
                else if (i+j>(n+1))
                    printf("- ");
                else
                    printf("  ");
            }
            else 
            {
                if ((j-i)==(n-1))
                    printf("* ");
                else if ((j-i)<(n-1))
                    printf("- ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
}