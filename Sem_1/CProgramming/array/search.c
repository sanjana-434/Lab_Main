//searches an elment be its value and print whether the element is present or not
#include <stdio.h>
int main()
{
    int n,s ,f=0;//s=element to be searched , f=flag
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",a+i);
    
    printf("\nEnter the element to be searched : ");
    scanf("%d",&s);

    //searching
    for (int i=0;i<n;i++)
    {
        if (a[i]==s)
            f=1;
    }
    if (f==0)
        printf("\nNO");
    else 
        printf("\nYES");
    

}