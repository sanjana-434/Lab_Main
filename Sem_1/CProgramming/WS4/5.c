#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the value of number 1 : ");
    scanf("%d",&num1);
    printf("Enter the value of number 2 : ");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nAfter swaping : ");
    printf("\nnum1 = %d\nnum2 = %d",num1,num2);

}