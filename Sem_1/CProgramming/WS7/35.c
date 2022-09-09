#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the number in ascending order : ");
    scanf("%d",&num1);
    printf("Enter the number in ascending order : ");
    scanf("%d",&num2);
    while (1)
    {
        if (num2>num1)
        {
            num1=num2;
            printf("\nEnter the number in ascending order : ");
            scanf("%d",&num2);
        }
        else
        {
            printf("\nInvalid input");
            return 0;
        }
    }
}