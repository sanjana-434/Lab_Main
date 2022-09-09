#include <stdio.h>
int main()
{
    int n,i,k;
    printf("\nEnter the number of elements of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for (i=1;i<n-1;i++)
    {
        if (arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            k=i;
        }
    }
    printf("\nValue of k : %d",k);

}