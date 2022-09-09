//3.	Write a C program to find sum of all array elements

#include <stdio.h>
int main()
{
    int n ,sum;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements : ");
    for (int i=0;i<n;i++)
        scanf("%d",a+i);
    for (int j=0;j<n;j++)
        sum+=a[j];
    printf("\nSum : %d\n",sum);
}