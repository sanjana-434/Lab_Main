#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if (num%3==0 && num%5==0)
    {
        printf("Fizzbuss");
    }
    else if (num%3==0)
    {
        printf("Fizz");
    }
    else if (num%5==0)
    {
        printf("Buss");
    }
    else
    {
        printf("%d",num);
    }
}