#include <stdio.h>

int del(int* a,int num,int len);

int main()
{
    int n,i,c=0,j;
    printf("\nEnter the number of elements of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=1+i;j<n;j++)
        {

            if (arr[i]==arr[j])
            {
                c++;
                n=del(arr,arr[i],n);
                i=-1;
                break;
            }
        }
    }
    printf("%d",c);
}
int del(int* a,int num,int len)
{
    for (int i=0;i<len-1;i++)
    {
        if (a[i]==num)
        {
            a[i]=a[i+1];
            len--;
        }
    }
    if (a[len-1]==num)
    {
        len--;
    }
    return len;
}