#include <stdio.h>
int allNeg(int array[], int length);
int main()
{
    int n,i,f;
    printf("\nEnter the length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array : ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    f=allNeg(arr,n);
    if (f==1)
        printf("\nAll are negative numbers \n");
    else
        printf("\nAtleast one number is non negative \n");
}
int allNeg(int array[],int length)
{
    int f=1,i;
    for (i=0;i<length;i++)
    {
        if (array[i]>=0)
            return 0;
    }
    return 1;
}