#include <stdio.h>
int main()
{
    int num1,num2;
    int or, and, not1,not2, xor, l_shift ,r_shift;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("\nEnter num2 : ");
    scanf("%d",&num2);
    or=num1|num2;
    and=num1&num2;
    not1=~num1;
    not2=~num2;
    xor=num1^num2;
    l_shift=num1<<num2;
    r_shift=num1>>num2;
    printf("\nBitwise or : %d",or);
    printf("\nBitwise and : %d",and);
    printf("\nBitwise not1 : %d",not1);
    printf("\nBitwise not2 : %d",not2);
    printf("\nBitwise xor : %d",xor);
    printf("\nBitwise left shift : %d",l_shift);
    printf("\nBitwise right shift : %d",r_shift);
}