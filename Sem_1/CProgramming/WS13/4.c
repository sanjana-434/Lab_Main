#include <stdio.h>
#include <stdlib.h>
void reverse(int * a,int l);
int main()
{
    int n,i;
    printf("Enter the number of elements of array : ");
    scanf("%d",&n);
    int* arr;
    arr=malloc(n*sizeof(int));
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    reverse(arr,n);
}
void reverse(int* a,int l)
{
    int i;
    printf("\nReversing the array : ");
    for (i=l-1;i>=0;i--)
        printf("%d ",a[i]);
}
