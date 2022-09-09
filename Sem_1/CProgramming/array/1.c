//Sum of array's elements

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of array : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int sum=0;
    for (int j=0;j<n;j++)
    {
        sum+=a[j];
    }
    printf("\nSum of all the elements : %d",sum);
}