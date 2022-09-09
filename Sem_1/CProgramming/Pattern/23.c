//Daimond Using Star Hyphen using *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=(2*n-1);i++)
    {
        for (int j=1;j<=(2*n-1);j++)
        {
            if (i<=n && j<=n)
            {
                if (i%2==0)
                    printf("%c ",(i+j)>=(n+1)?'-':' ');
                else 
                    printf("%c ",(i+j)>=(n+1)?'*':' ');
            }
            else if(i>n && j<=n)
            {
                if (i%2==0)
                    printf("%c ",((i-j)<=(n-1))?'-':' ');
                else 
                    printf("%c ",((i-j)<=(n-1))?'*':' ');
            }
            else if (i<=n && j>n)
            {
                if (i%2==0)
                    printf("%c ",(j-i)<=(n-1)?'-':' ');
                else 
                    printf("%c ",(j-i)<=(n-1)?'*':' ');
            }
            else 
            {
                if (i%2==0)
                    printf("%c ",(i+j)<=(3*n-1)?'-':' ');
                else 
                    printf("%c ",(i+j)<=(3*n-1)?'*':' ');
            }
        }
        printf("\n");
    }
}