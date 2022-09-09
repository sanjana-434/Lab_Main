#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   
        for(int k=0;k<(n-i);k++)
        {
            printf(" ");
        }
        for(int a=0;a<(2*i-1);a++)
        {
            printf("%d",i);
        }
        
        printf("\n");
    }
}