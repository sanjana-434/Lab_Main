#include <stdio.h>

int main()
{
    int n,i,j,key,f=0;
    printf("\nEnter the number of elements of the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array : ");
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the value of key : ");
    scanf("%d",&key);

    printf("\ni and j based on the algorithm A[i]^2 + A[j]^2 = key  : ");


    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if( (arr[i]*arr[i]+arr[j]*arr[j]) == key)
            {
                f=1;
                printf("\n%d %d",i,j);
            }
        }
    }
    if (f==0)
    {
        printf("\nNo such pair");
    }
}
