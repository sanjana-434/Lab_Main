#include <stdio.h>
int main()
{
        int a1,a2,a3;//array elements 
        int i=0,j=0,k=0;
        int l=0,m=0; //for looping

        printf("\nEnter the elements of array 1 : ");
        scanf("%d",&a1);
        printf("\nEnter the elements of array 2 : ");
        scanf("%d",&a2);

        int arr1[a1],arr2[a2],arr3[a1+a2];
        printf("\nEnter array 1 elements   : ");
        for (l=0;l<a1;l++)
        {
            scanf("%d",&arr1[l]);
        }
        printf("\nEnter array 2 elements   : ");
        for (l=0;l<a2;l++)
        {
            scanf("%d",&arr2[l]);
        }

        while (i<a1 && j<a2)
        {
            if (arr1[i]>arr2[j])
            {
                arr3[k++]=arr2[j++];
            }
            else
            {
                arr3[k++]=arr1[i++];
            }
        }
        while (i<a1)
        {
            arr3[k++]=arr1[i++];
        }
        while(j<a2)
        {
            arr3[k++]=arr2[j++];
        }  
        
    printf("\nArray after merging  : ");
    for (l=0;l<k;l++)
    {
        printf("%d  ",arr3[l]);
    }
}