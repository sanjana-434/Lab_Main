//Search a value in the array and return its position
#include <stdio.h>
int main()
{
    int n , searchValue , f=0;
    printf("Enter the number of values of the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array : ");
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the value to be searched  : ");
    scanf("%d",&searchValue);   

    for (int j=0;j<n;j++)
    {
        if (a[j]==searchValue)
        {
            printf("\nThe search value is at the position %d and index %d",j+1,j);
            f=1;
        }
    }
    if (f==0)
        printf("\nThe search value is not in the array");

}