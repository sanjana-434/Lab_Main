//Enter total elements in the array: 9
//Enter the elements:  10 20 30 40 50 60 70 80 90
//Enter the number of times to rotate:  2
#include<stdio.h>
int main()
{
    int n,i,j,r,l;
    printf("Enter total elements in the array:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements:");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the number of times to rotate:");
    scanf("%d",&r);

    for (j=0;j<r;j++)
    {
        l=a[0];
        for (i=0;i<n;i++)
            a[i]=a[i+1];
        a[n-1]=l;
    }
    printf("\nAfter rotating elements in the array are\n");
    for (i=0;i<n;i++)
        printf(" %d ",a[i]);
}
