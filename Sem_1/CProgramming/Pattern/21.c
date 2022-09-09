//star hyphen combination using *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<2*n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i<=n)
            {
                if (i%2==0)
                    printf("%c ",(i+j)>=(n+1)?'-':' ');
                else 
                    printf("%c ",(i+j)>=(n+1)?'*':' ');
            }
            else 
            {
                if (i%2==0)
                    printf("%c ",(i-j)<n?'-':' ');
                else 
                    printf("%c ",(i-j)<n?'*':' ');
            }
        }
        printf("\n");
    }
}