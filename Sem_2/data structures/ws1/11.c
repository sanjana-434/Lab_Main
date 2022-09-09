#include <stdio.h>
int main()
{
    int n,i,k;
    printf("\nEnter the elements of the array  : ");
    scanf("%d",&n );
    int arr[n];
    printf("\nEnter the elements of the array : ");
    for (i=0;i<n;i++)
        scanf("%d",arr+i);
    printf("\nEnter the value of k : ");
    scanf("%d",&k);
    int max,min;
    for (i=0;i<n-1;i++)
    {
        if (arr[i]>k)
        {
            max=arr[i];
            break;
        }
    }
    for (i=0;i<n-1;i++)
    {
        if (arr[i]<k)
        {
            min=arr[i];
            break;
        }

    }
    printf("\nFirst minimum : %d",min);
    printf("\nFirst maximum : %d",max);
}