//Smallest value in the array
#include <stdio.h>
int main()
{
    int n ;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int min=a[0];
    for(int j=0;j<n;j++)
    {
        if (a[j]<min)
            min=a[j];
    }
    printf("\nMinimum value of the array : %d",min);
}