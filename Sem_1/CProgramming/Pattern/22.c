//star hyphen combination pattern 2
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
                    printf("%c ",(i>=j)?'-':' ');
                else 
                    printf("%c ",(i>=j)?'*':' ');
            }
            else 
            {
                if (i%2==0)
                    printf("%c ",(i+j)<=2*n?'-':' ');
                else 
                    printf("%c ",(i+j)<=2*n?'*':' ');
            }
        }
        printf("\n");
    }
}