//Print array in the reverse order 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array : ");
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nReverse order of the array :");
    for (int j=(n-1);j>=0;j--)
        printf("%d  ",a[j]);

}