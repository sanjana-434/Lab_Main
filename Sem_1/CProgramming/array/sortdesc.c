//sorting in  descending order
//sorting in ascending order
#include <stdio.h>
int main()
{
    int n , l;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",a+i);

    //sorting in ascending order
    for (int i=0;i<n-1;i++)
    {
        if (a[i]<a[i+1])
        {
            l=a[i];
            a[i]=a[i+1];
            a[i+1]=l;
            i=-1;
        }
    }

    printf("\nThe elements of the array in ascending order : ");
    for (int j=0;j<n;j++)
        printf("%d  ",*(a+j));
}