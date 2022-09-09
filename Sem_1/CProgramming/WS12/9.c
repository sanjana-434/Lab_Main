#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int* arr;
    printf("\nEnter the number of elements to store in the array : ");
    scanf("%d",&n);
    arr=malloc(n*sizeof(int));
    printf("\nEnter %d number of elements in the array :",n); 
    for (i=0;i<n;i++)
    {
        printf("\nelement - %d : "  ,i);
        scanf("%d",&arr[i]);
    }


    printf("\nThe elements you entered are :");
    for (i=0;i<n;i++)
    {
        printf("\nelement - %d : %d",i,arr[i]);
    }
  

}