#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("\nEnter the number of elements of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements   :"    );
    for (i=0;i<n;i++)
        scanf("%d",arr+i);
    
    //copy
    int dup[n];

    
    int d=0;
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                dup[d]=arr[i];
                d++;
                for (k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                i--;
            }
        }
    }

    for (i=0;i<d;i++)
    {
        for (j=i+1;j<d;j++)
        {
            if (dup[i]==dup[j])
            {
                for (k=j;k<d;k++)
                {
                    dup[k]=dup[k+1];
                }
                d--;
                i--;
            }
        }
    }

    printf("\nDuplicate elements :  ");
    for (i=0;i<d;i++)
    {
        printf("%d ",dup[i]);
        if (i!=d-1)
            printf(",");
    }
}