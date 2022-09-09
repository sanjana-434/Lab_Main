#include <stdio.h>

int main()
{
    int i,j,n;
    printf("\nEnter the number of elements   : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the array elements   : ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    int f=0;
    printf("\nAnswer  :  ");
    for (i=1;i<n;i++)
    {
        f=0;
        for (j=i-1;j>=0;j--)
        {
            if (a[i]<=a[j])
            {
                f=1;
                printf("%d ",a[j]);
                break;
            }
        }
        if (f==0)
            printf("%d ",-1);
    }
}