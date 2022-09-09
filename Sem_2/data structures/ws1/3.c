#include <stdio.h>
int main()
{
    int arr[10]={0,1,0,0,1,0,1,1,0,0};
    int i,j;
    for (i=0;i<10-1;i++)
    {
        if (arr[i]>arr[i+1])
        {
            j=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=j;
            i=-1;
        }
    }
    printf("\nThe array after arranging : \n");
    for (i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
        if (i!=9)
            printf(",");
    }
}