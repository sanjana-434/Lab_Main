#include <stdio.h>
int main()
{
    int n,k,i,j,l;
    printf("Enter the number of elements of n : ");
    scanf("%d",&n);
    printf("\nEnter the value of k : ");
    scanf("%d",&k);
    int arr[n];
    printf("\nEnter the elements : ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    //sorting 
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                l=arr[i];
                arr[i]=arr[j];
                arr[j]=l;
                i--;
            }
        }
    }
    int c=1;
    printf("\nThe elements that occurs %d times or more than that are : ",k);

    for (i=0;i<n;i++)
    {
        c=0;
        for (j=i;j<n;j++)
        {
            if (arr[i]!=arr[i-1])
            {
                if (arr[i]==arr[j])
                {
                    c++;
                }
            }
        }
        if (c>=(n/k))
            printf(" %d ,",arr[i]);
    }
}