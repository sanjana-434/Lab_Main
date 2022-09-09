#include <stdio.h>
int main()
{
    int n , f=0;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n/2];
    if (n%2==0)
    {
        //getting inputs for arr1
        printf("Enter the elements of the array : ");
        for(int i=0;i<n;i++)
            scanf("%d",arr1+i);
        
        //values into arr2
        for (int j=0;j<n/2;j++)
        {
            arr2[j]=arr1[f]*arr1[f+1];
            f+=2;
        }       
        //printing ouput array 
        printf("\nThe elements of output array : ");
        for(int k=0;k<n/2;k++)
            printf("%d ",*(arr2+k));    
    }
    else 
        printf("\nInvalid input");
}