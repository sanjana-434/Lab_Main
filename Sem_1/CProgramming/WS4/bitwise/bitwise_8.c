#include <stdio.h>
int main()
{
    int num , setBit=0 ;
    printf("Enter the number : ");
    scanf("%d",&num);
    for (int i=0;i<32;i++)
    {
        if ((num>>i)&1)
        {
            setBit=i;
        }        
    }
    printf("The highest set bit of the number %d is %d",num,setBit);
    
}