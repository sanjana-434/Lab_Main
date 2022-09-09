//2.	Write a C program to print all negative elements in an array.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements : ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nThe negative elements of the array are : ");
    for (int i=0;i<n;i++)
    {
        if (a[i]<0)
            printf("%d  ",a[i]);
    }
}