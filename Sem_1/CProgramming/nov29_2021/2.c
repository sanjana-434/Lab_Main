/*Enter total elements in the array: 9
Enter the elements:  10 20 30 40 50 60 70 80 90
Enter the number of times to rotate:  1
Sample output
After rotating elements in the array are
	90 10 20 30 40 50 60 70 80 
*/
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
        l=a[n-1];
        for (i=n-1;i>=1;i--)
            a[i]=a[i-1];
        a[0]=l;
    }
    printf("\nAfter rotating elements in the array are\n");
    for (i=0;i<n;i++)
        printf(" %d ",a[i]);
}
