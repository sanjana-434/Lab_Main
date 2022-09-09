#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);

    printf("\nEnter the valiues of the array : ");
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    //printing the original array 
    printf("\nOriginal array : ");
    for (int h=0;h<n;h++)
    {
        printf("%d  ",a[h]);
    }

    //moving every values to left by one bit
    int l=a[0];
    for (int j=0;j<n;j++)
    {
        a[j]=a[j+1];
    }
    a[n-1]=l;

    //printing the resultant array 
    printf("\nResultant array : ");
    for (int k=0;k<n;k++)
    {
        printf("%d  ",a[k]);
    }

}