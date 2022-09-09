/* 4 4 4 4 4 4 4
   4 3 3 3 3 3 4
   4 3 2 2 2 3 4
   4 3 2 1 2 3 4
   4 3 2 2 2 3 4
   4 3 3 3 3 3 4
   4 4 4 4 4 4 4  */
#include <stdio.h>
int main()
{
    int n , a ,p;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    a=n;
    p=n;
    for(int i=0;i<(n-1);i++)
    {
        for (int j=0;j<(2*n-1);j++)
        {
            if( (i==0)||(j==0)||(i==2*n-2 )||(j==2*n-2))
            {
                printf("%d ",n);
            }
            else{
                if(i==j)
                {
                    a=a-1; 
                }
                if ((i+j)>=((2*n)-1))
                {
                    a=a+1;
                }
                printf("%d ",a);
            }
        }
        printf("\n");
    }
    for (int k=n;k>0;k--)
    {
        printf("%d ",k);
    }
    for(int k=2;k<=n;k++)
    {
        printf("%d ",k);
    }
    printf("\n");
    for(int i=4;i<(2*n-1);i++)
    {
        for (int j=0;j<(2*n-1);j++)
        {
            if( (i==0)||(j==0)||(i==2*n-2 )||(j==2*n-2))
            {
                printf("%d ",n);
            }
            else{
                if(i==j)
                {
                    p=p+1; 
                }
                if ((i+j)<=(n+2))
                {
                    p=p-1;
                }
                printf("%d ",p);
            }
        }
        printf("\n");
    }
}
