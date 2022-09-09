#include <stdio.h>

int main()
{
    int len;
    int c1=0,c2=0;
    printf("\nEnter the number of array elements  : ");
    scanf("%d",&len);
    int i,j;
    int arr[len];
    printf("\nEnter the array elements  : ");
    for (i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    int n[len],p[len];
    for (i=0;i<len;i++)
    {
        if (arr[i]<0)
        {
            n[c1++]=arr[i];
        }
        else
        {
            p[c2++]=arr[i];
        }
    }
    i=0,j=0;
    int index=0;
    while(i<c1 && j<c2)
    {
        if (index%2==0)
            arr[index++]=n[i++];
        else
            arr[index++]=p[j++];
    }
    while(i<c1)
    {
        arr[index++]=n[i++];
    }
    while(j<c2)
    {
        arr[index++]=p[j++];
    }
    printf("\nArray after rearranging as alternative elements   : " );
    for (i=0;i<len;i++)
    {
        printf("%d ",arr[i] );
    }
}