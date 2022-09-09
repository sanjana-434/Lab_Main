#include <stdio.h>
int main()
{
    int n ,i,j,k;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    printf("\nEnter the values of the array : ");
    int a[n];
    //inputing values for the array
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //Original array
    printf("\nOriginal array : ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int f=0,l;
    for (i=0;i<10;i++)
    {
        if (a[i]>=0)
        {
            f=0;
            for (j=i-1;j>=0;j--)
            {
                if (a[j]<0)
                    f++;
                else
                    break;
            }
            l=a[i];
            for (k=i;k>(i-f);k--)
                a[k]=a[k-1];
                printf("\n@@%d  @@ %d  ##%d",a[i],i,l);
            a[i-f]=l;
        }
    }
    printf("\nArray after ordering  :\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}