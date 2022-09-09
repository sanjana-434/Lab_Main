#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* arr;
    int n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=malloc(n*sizeof(int));
    for (i=0;i<n;i++)
    {
        printf("\nEnter number : ");
        scanf("%d",&arr[i]);
    }
    printf("\noutput in the correct order : ");
    for (i=0;i<n;i++)
    {
        printf("\n%d,",arr[i]);
    }
}