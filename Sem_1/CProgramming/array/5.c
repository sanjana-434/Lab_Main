//Reading one array into the other array in reverse order
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of the array  : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array a : ");
    int a[n] , b[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for (int j=0,k=(n-1);j<n,k>=0;j++,k--)
        b[j]=a[k];

    printf("\nThe elements of array b : ");
    for (int h=0;h<n;h++)
        printf("%d  ",b[h]);
}