#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n,i,m;
    printf("Enter the number of elements in the array  : ");
    scanf("%d",&n);
    int* a;
    a=malloc(n*sizeof(int));
    printf("\nEnter the elements : ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nArray in reverse order ");
    for (i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    printf("\nEnter the number of elements to be printed : ");
    scanf("%d",&m);
    printf("\nFirst %d elements are : ",m);
    for (i=0;i<m;i++)
        printf("%d ",a[i]);
}