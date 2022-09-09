#include <stdio.h>
#include <windows.h>
int main()
{
    int num1,num2;
    printf("\nEnter the number 1 : ");
    scanf("%d",&num1);
    printf("\nEnter the number 2 : ");
    scanf("%d",&num2);
    printf("\n%d",num1);
    printf("\n+%d",num2);
    printf("\n--------");
    system("pause");
    printf("\n%d",num1);
    printf("\n+%d",num2);
    printf("\n--------");
    printf("\n%d",num1+num2);
}