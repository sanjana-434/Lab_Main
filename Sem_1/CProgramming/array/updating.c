//updating an element in the given position
#include <stdio.h>
int main()
{
    int n,v1,v2;//value v1 need to be updated by v2
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",a+i);
    printf("\nEnter the value v1 to be updated by value v2 : ");
    scanf("%d%d",&v1,&v2);
    
    //updating an element 
    for (int i=0;i<n;i++)
    {
        if (a[i]==v1)
            a[i]=v2;
    }

    printf("\nThe elements of the array are : ");
    for (int j=0;j<n;j++)
        printf("%d  ",*(a+j));
}