#include <stdio.h>

int main()
{
    int n,i,j;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int min=arr[0],max=arr[0];
    for (i=0;i<n;i++)
    {
        if (max<arr[i])
            max=arr[i];
        if (min>arr[i])
            min=arr[i];
    }
    printf("\nMaximum element  :  %d",max);
    printf("\nMinimum element  :  %d",min);
}
