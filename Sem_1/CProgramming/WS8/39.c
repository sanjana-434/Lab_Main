#include <stdio.h>
int main()
{
    int n,i,j,m;
    printf("Enter the number of elements of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array : ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    //finding the peak 
    for (i=1;i<n-1;i++)
    {
        if (arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            m=i;
            break;
        }
    }
    printf("\nm : %d , A[m] : %d",m,arr[m]);
}