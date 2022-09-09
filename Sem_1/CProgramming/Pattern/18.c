//Solid Rhombus Left Inclined using *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<2*n;j++)
        {
            if (j<=n)
                printf("%c",(j>=i)?'*':' ');
            else
                printf("%c",(j-i)<(n)?'*':' ');
        }
        printf("\n");
    }

}