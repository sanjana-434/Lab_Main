//Adding the elements in the given index
#include <stdio.h>
int main()
{
    int n ,s,v,p;   //s=subscript , v=value , p=position
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);

    int a[n];
    printf("\nEnter the elements of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",a+i);

    printf("\nEnter the position and the value to be inserted : ");
    scanf("%d%d",&p,&v);
    
    //inserting the value v at the position p
    s=p-1;
    for (int i=n-1;i>=s;i--)
        a[i+1]=a[i];
    a[s]=v;

    printf("\nThe elements of the array are : ");
    for (int j=0;j<n;j++)
        printf("%d  ",*(a+j));
}