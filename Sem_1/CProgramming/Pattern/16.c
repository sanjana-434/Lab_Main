//Print Floyd's Triangle 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n (lines) : ");
    scanf("%d",&n);
    int k=1;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            printf("%-4d",k);
            k++;
        }
        printf("\n");
    }

}
