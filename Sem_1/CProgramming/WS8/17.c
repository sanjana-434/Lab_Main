#include <stdio.h>
int main()
{
    int n,l;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the values of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    //printing Original array
    printf("\nOriginal array : ");
    for(int h=0;h<n;h++)
        printf("%d ",a[h]);

    //reversing the array 
    for (int i=0,j=n-1; i<n/2 ;i++,j--)
    {
        l=a[i];
        a[i]=a[j];
        a[j]=l;
    }
    
    //printing Reversed array
    printf("\nResultant array : ");
    for(int h=0;h<n;h++)
        printf("%d ",a[h]);
}