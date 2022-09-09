//print all the array elements one by one
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",a+i);
    printf("\nThe elements of the array are : ");
    for (int j=0;j<n;j++)
        printf("%d  ",*(a+j));
    
}