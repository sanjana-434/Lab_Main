#include <stdio.h>

int main()
{
    int n,i,j,k,l;
    printf("\nEnter the numbr of elements of array  : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements   : ");
    for (i=0;i<n;i++)
        scanf("%d",arr+i);
    
    int num;
    printf("\nEnter the number  : ");
    scanf("%d",&num);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            for (k=0;k<n;k++)
            {
                for (l=0;l<n;l++)
                {
                    if (((arr[i]+arr[j]+arr[k]+arr[l])==num) && i!=j && i!=l && i!=k && j!=k && l!=k && j!=l)
                    {
                        printf("\n%d %d %d %d\n",arr[i],arr[j],arr[k],arr[l]); 
                        goto l1;       
                    }
                }
            }
        }
    }
    l1:return 0;
}