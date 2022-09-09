#include <stdio.h>
int main()
{
    int l,i,j,n;
    printf("\nEnter the length of the array  : ");
    scanf("%d",&l);
    printf("\nEnter the value of n : ");
    scanf("%d",&n);
    int arr[l];
    l1:printf("\nEnter the elements within the range (0,n-2) : ");
    for(i=0;i<l;i++)
    {
        scanf("%d",arr+i);
        if (arr[i]>n-2 || arr[i]<0)
        {
            printf("\nINVALID INPUT !! ENTER AGAIN\n");
            goto l1;
        }
    }
    for (i=0;i<l-1;i++)
    {
        for (j=i+1;j<l;j++)
        {
            if (arr[i]==arr[j])
                printf("\nThe element repeated is  %d",arr[i]);
        }
    }
}