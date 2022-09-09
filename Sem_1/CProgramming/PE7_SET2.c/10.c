/*Write a program that inverts the bits of an unsigned char X and stores answer in Y. Your
answer should print out the result in binary form (although input can be in decimal form).*/
#include <stdio.h>
int main()
{
    char x;
    printf("Enter a character : ");
    scanf("%c",&x);
    int y[31];
    for (int i=31;i>=0;i--)
    {
        y[i]=x%2;
        x=x/2;
    }
    printf("\n");
    for (int j=31;j>=0;j--)
    {
        printf("%d ",y[j]);
    }
    pritnf("\n");
}