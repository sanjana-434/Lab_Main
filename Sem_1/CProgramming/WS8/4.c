#include <stdio.h>
int main()
{
    int n;
    printf("Enter the total number of elements in the array  : ");
    scanf("%d",&n);
    int arr[n];
    //inputting the elements
    printf("\nEnter the element of the array : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    int s,f=1;
    printf("\nEnter the value to be searched : ");
    scanf("%d",&s);

    for (int j=0;j<n;j++)
    {
        if (arr[j]==s)
        {
            f=0;
            printf("\nThe search element %d has index %d and position %d",s,j,j+1);
        }
    }
    if (f==1)
        printf("\nThe search element is not in the array ");
}