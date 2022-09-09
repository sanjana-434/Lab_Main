#include <stdio.h>
int main()
{
    int n , j , i ;
    printf("\nEnter the total number of lily pads (n) : ");
    scanf("%d",&n);
    printf("\nEnter the jumping value (j) : ");
    scanf("%d",&j);
    printf("%d ",0);
    if (j<=n)
    {
        i=j;
        printf("%d ",i);
    }
    else
    {
        i=j-n;
        printf("%d ",i);
    }
    while (i!=0)
    {
        if (i+j>=n)
        {
            i=i+j-n;
        }
        else
        {
            i+=j;
        }
        printf("%d ",i);
    }
}