#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of elements of the array : ");
    scanf("%d",&n);
    printf("\nEnter the values of the array : ");
    int a[n];
    //inputing values for the array
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //finding max value
    int max=a[0];
    for (int j=0;j<n;j++)
    {
        if (a[j]>max)
            max=a[j];
    }
    //finding the occurrance of max
    int count=0;
    for (int h=0;h<n;h++)
    {
        if (max==a[h])
            count++;
    }
    printf("\nMaximum value : %d",max);
    printf("\nNumber of times the maximum value occured : %d",count);
}