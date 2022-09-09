#include <stdio.h>
int range(int* array, int length);
int main()
{
    int n,i;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array : ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nRange of the array : %d",range(a,n));
}
int range(int* array, int length)
{
    int i=0;
    int max=array[0],min=array[0];
    for (i=0;i<length;i++)
    {
        if (array[i]>max)
            max=array[i];
        if (array[i]<min)
            min=array[i];
    }
    return max-min;
}