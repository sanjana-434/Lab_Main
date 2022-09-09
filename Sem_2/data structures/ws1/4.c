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

    int u[a+b]; // union
    for (i=0;i<a;i++)
        u[i]=A[i];
    for (i=a;i<a+b;i++)
    {
        u[i]=B[i-a];
    }

    int e=a+b;
    //removing duplicates
    for(i=0;i<e;i++)
    {
        for(j=i+1;j<e;j++)
        {
            if(u[i]==u[j])
            {
                for (k=j;k<e-1;k++)
                {
                    u[k]=u[k+1];
                }
                e--;
            }
        }
    }
    
    printf("\nUnion of A and B : ");
    printf("\n { ");
    for (i=0;i<e;i++)
    {
        printf("%d ",u[i]);
        if(i!=e-1)
            printf(",");
    }
    printf("}");
    
}