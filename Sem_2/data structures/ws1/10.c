#include <stdio.h>
int main()
{
    int p,q,r,i,j,k;
    printf("\nEnter the number of elements of array 1   :  ");
    scanf("%d",&p);
    printf("\nEnter the number of elements of array 2   :  ");
    scanf("%d",&q);
    printf("\nEnter the number of elements of array 3  :  ");
    scanf("%d",&r);
    int a[p],b[q],c[r];
    printf("\nEnter array 1 elements  : ");
    for (i=0;i<p;i++)
        scanf("%d",&a[i]);
    printf("\nEnter array 2 elements  : ");
    for (i=0;i<q;i++)
        scanf("%d",&b[i]);
    printf("\nEnter array 3 elements  : ");
    for (i=0;i<r;i++)
        scanf("%d",&c[i]);

    printf("\nCommon elements   : ");

    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            for (k=0;k<r;k++)
            {
                if (a[i]==b[j] && a[i]==c[k] && b[j]==c[k])
                {
                    printf("%d  ",a[i]);
                }
            }
        }
    }
}