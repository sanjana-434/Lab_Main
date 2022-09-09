#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the value of the number : ");
    scanf("%d",&num);
    int n=num;
    while(num!=0)
    {
        if (num%10!=0 && num%10!=1)
        {
            printf("The number %d is not binary",n);
            exit(0);
        }
        num=num/10;
    }
    printf("The number %d is a binary number",n);

}