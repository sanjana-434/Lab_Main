//for an ordered array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements : ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    //printing the original array 
    printf("\nOriginal Array : ");
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);

    for (int j=1;j<n;j++)
    {
        if (a[j]==a[j-1])
        {
            for (int h=j-1;h<n;h++)
                a[h]=a[h+1];
            j--;
            n--;
        }
    }
    //printing the resultant array 
    printf("\nResultant Array : ");
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
    
}


