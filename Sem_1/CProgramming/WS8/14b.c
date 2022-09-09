//for an unordered array
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
        for (int k=0;k<j;k++)
        {
            if (a[j]==a[k])
            {
                for (int m=j;m<n-1;m++)
                    a[m]=a[m+1];
                j--;
                n--;
            }
        }
    }
    //printing the resultant array 
    printf("\nResultant Array : ");
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
    
}