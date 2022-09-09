//intersection and union of A and B
#include <stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the number of elements of array A : ");
    scanf("%d",&a);
    printf("\nEnter the number of elements of array B : ");
    scanf("%d",&b); 
    int A[a],B[b];
    
    //inputing elements
    printf("\nEnter the elements of array A : ");
    for (int i=0;i<a;i++)
        scanf("%d",&A[i]);
    printf("\nEnter the elements of array B : ");
    for (int i=0;i<b;i++)
        scanf("%d",&B[i]);

    //C (Union)
    //C=A+B
    int C[a+b] , j=0; //j=index of C
    for (int i=0;i<a;i++,j++)
        C[j]=A[i];
    for (int i=0;i<b;i++,j++)
        C[j]=B[i];
    //deleting duplicates (Union)
    int c=a+b;
    for(int i=0;i<c-1;i++)
    {
        for (int j=i+1;j<c;j++)
        {
            if (C[i]==C[j])
            {
                for (int k=j;k<c;k++)
                {
                    C[k]=C[k+1];
                }
                c--;
            }
        }
    }
    printf("Union of A and B : ");
    for (int h=0;h<c;h++)
    {
        printf(" %d",C[h]);
    }

    //D ( Intersection)
    int D[a+b] ,d=0;
    for (int i=0;i<a;i++)
    {
        for (int h=0;h<b;h++)
        {
            if (A[i]==B[h])
                D[d++]=A[i];
        }
    }
    printf("\nIntersection of A and B : ");
    for(int h=0;h<d;h++)
        printf("%d ",D[h]);
}
