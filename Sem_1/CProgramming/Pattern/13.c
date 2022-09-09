//Left Half Diamond Pattern using *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=(2*n-1);i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i<=(n))
                printf("%c ",(i+j)>=(n+1)?'*':' ');
            else 
                printf("%c ",(i-j)>(n-1)?' ':'*');
        }
        printf("\n");
    }
}