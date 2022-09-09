#include <stdio.h>
int main()
{
    int i,n,sum,f;
    int pair(int a[],int len ,int s);
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    printf("\nEnter the value of sum : ");
    scanf("%d",&sum);
    int arr[n];
    printf("\nEnter the elements : ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    f=pair(arr,n,sum);
    if (f==1)
        printf("\nThe pair with sum %d is found ",sum);
    else
        printf("\nThe pair with sum %d is not found",sum); 
}
int pair(int a[],int len,int s)
{
    int i,j,k;
    for (i=0;i<len-1;i++)
    {
        for (j=i+1;j<len;j++)
        {
            if (a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
                i=-1;
            }
        }
    }
    int l=0,r=len-1;
    while (l<r)
    {
        if (a[r]+a[l]==s)
            return 1;
        else if (a[r]+a[l]>s)
            r--;
        else
            l++;
    }
    return 0;
}