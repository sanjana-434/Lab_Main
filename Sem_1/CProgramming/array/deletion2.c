//deleting the element inputed from the array 
#include <stdio.h>
int main()
{
    int n,v;//value to be deleted
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",a+i);

    //getting the elment to be deleted
    printf("\nEnter the element to be deleted  : ");
    scanf("%d",&v);
    //deleting v from the array
    for (int i=0;i<n;i++)
    {
        if (a[i]==v)
        {
            for (int h=i;h<n-1;h++)
            {
                a[h]=a[h+1];
            }
            n--;
        }
    }
    printf("\nThe elements of the array are : ");
    for (int j=0;j<n;j++)
        printf("%d  ",*(a+j));
}