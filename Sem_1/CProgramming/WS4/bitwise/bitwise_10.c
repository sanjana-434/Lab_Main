/*Write a C Program to use Bitwise Operations to Round (floor of) an Integer to next Lower Multiple of 2.*/
#include <stdio.h>
int main()
{
    int num ,a=0xfffffffe , b=0xfffffffd;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    if (num&1==1)
        num=num&a;
    else
        num=num&b;
    printf("\nAn integer to next Lower Multiple of 2 : %d",num);
}