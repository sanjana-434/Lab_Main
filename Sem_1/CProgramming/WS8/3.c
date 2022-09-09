#include <stdio.h>
int main()
{
    int arr[20] ,f;
    printf("Enter the values (10 <= value <= 100) : ");
    for (int i=0;i<20;i++)
    {
        f=1;
        printf("\nEnter value %d : ",i+1);
        scanf("%d",&arr[i]);
        for (int j=0;j<i;j++)
        {
            if (arr[i]==arr[j])
                f=0;
        }
        if (f==1) 
                printf("\n%d",arr[i]);
    }
}