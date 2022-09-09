#include <stdio.h>

int main()
{
    int i,j,n,r2,r1;
    printf("\nEnter the range of elements  (r1,r2)  : ");
    scanf("%d%d",&r1,&r2);
    n=r2-r1;
    int a[n];
    printf("\nEnter the array elements   : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe missing element   :   ");
    for (i=0;i<n-1;i++)
    {
        if (a[i]!=(a[i+1]-1))
        {
            printf("%d",a[i+1]-1);
            break;
        }
    }

}