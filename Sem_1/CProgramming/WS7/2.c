#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("\n%d  ",num);
    while (num!=1)
    {
        if (num%2==0)
        {
            num/=2;
            printf("%d  ",num);
        }
        else
        {
            num=num*3+1;
            printf("%d  ",num);
        }
    }
}