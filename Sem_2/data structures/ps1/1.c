#include <stdio.h>

int del(int* a,int len,int num);

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

    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                c++;
                printf("%d",c);
                n=del(arr,n,arr[i]);
                i=-1;
                break;
            }
        }
    }
    printf("count: %d",c);
}
int del(int* a,int len,int num)
{
    for (int i=0;i<len;i++)
    {
        if (num==a[i])
        {
            for(int j=i;j<len-1;j++)
            {
                a[j]==a[j+1];
                len--;
            }
            i=-1;
        }
    }
    return len;
}