#include <stdio.h>
int main()
{
    int r,i,j;
    printf("Enter the number of elements : ");
    scanf("%d",&r);
    int a[r];
    printf("\nEnter the elements : ");
    for (i=0;i<r;i++)
        scanf("%d",&a[i]);

    int f;
    for (int x=1;;x++)
    {
        f=0;
        for (i=0;i<r;i++)
        {
            if (a[i]==x)
                f=1;
        }
        if (f==0)
        {
            printf("\n%d",x);
            break;
        }
    }
}
