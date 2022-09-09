#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of elements of array A and B : ");
    scanf("%d",&n); 
    int A[n],B[n];

    //inputing elements
    printf("\nEnter the elements of array A : ");
    for (int i=0;i<n;i++)
        scanf("%d",A+i);
    printf("\nEnter the elements of array B : ");
    for (int j=0;j<n;j++)
        scanf("%d",B+j);

    //third array C --creating 
    int C[2*n] , a1=0 ,b1=0;
    for (int h=0;h<2*n;h++)
    {
        if (h%2==0)
        {
            C[h]=A[a1];
            a1++;
        }
        else 
        {
            C[h]=B[b1];
            b1++;
        }
    }
    //printint array C
    printf("\nThe elements of array C : ");
    for (int k=0;k<2*n;k++)
        printf("%d   ",*(C+k));
}