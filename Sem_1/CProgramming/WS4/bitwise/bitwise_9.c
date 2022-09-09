#include <stdio.h>
int main()
{
    int num , a;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    for(int i=31;i>=0;i--)
    {
        a+=((num>>i)&1);
    }
    if (a==1 ||a==0)
    {
        printf("\nThe number %d is a power of 2 \n",num);
    }else{
        printf("\nThe number %d is not a power of 2 \n",num);
    }
}