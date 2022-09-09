#include <stdio.h>

int main()
{
    int a,b;
    int i,j,k;
    printf("Enter the len of array A and B : ");
    scanf("%d%d",&a,&b);
    printf("\nEnter the elements of array A : ");
    int A[a],B[b];
    for (i=0;i<a;i++)
    {
        scanf("%d",A+i);
    }
    printf("\nEnter the elements of array B : ");
    for (i=0;i<b;i++)
    {
        scanf("%d",B+i);
    }

    printf("\nInsertion of A and B : ");
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            if (A[i]==B[j])
            {
                printf("%d ",A[i]);
            }
        }
    }
}