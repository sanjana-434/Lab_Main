//deleting an element at the given index
#include <stdio.h>
int main()
{
    int n , i ;//i=index of the element to be deleted
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array : ");
    for (int k=0;k<n;k++)
        scanf("%d",a+k);

    printf("\nEnter the index of the element to be deleted : ");
    scanf("%d",&i);
    //deleting an element
    for (int h=i;h<n;h++)
        a[h]=a[h+1];
    n--;

    printf("\nThe elements of the array are : ");
    for (int j=0;j<n;j++)
        printf("%d  ",*(a+j));
}