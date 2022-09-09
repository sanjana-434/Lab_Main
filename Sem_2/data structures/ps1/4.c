#include <stdio.h>

int main()
{
    int n,i,j,c=0;
    printf("\nEnter the number of elements of the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array : ");
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPairs : ");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i>j & arr[i]<arr[j])
            {
                printf("\n( %d , %d )",arr[i],arr[j]);
                c++;
            }
        }
    }
    printf("\nTotal number of inversions : %d",c);
}