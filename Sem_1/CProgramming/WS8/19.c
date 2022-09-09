#include <stdio.h>
#include <math.h>
int main()
{
    int n,x;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nHow many times do u want to perform the operation : ");
    scanf("%d",&x);
    //printing original array 
    printf("\nOriginal array : ");
    for (int h=0;h<n;h++)
        printf("%d ",a[h]);
    
    for(int i=0;i<x;i++)
    {
        //absolute diff of two elements
        int f=a[0];
        for (int j=0;j<n-1;j++)
        {
            a[j]=fabs(a[j]-a[j+1]);
        }
        a[n-1]=fabs(a[n-1]-f);

        //printing the Resultant array
        printf("\nResultant array %d : ",i+1);
        for (int v=0;v<n;v++)
        {
            printf("%d ",a[v]);
        }
    }
}