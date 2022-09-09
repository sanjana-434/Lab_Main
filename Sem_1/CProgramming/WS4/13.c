#include <stdio.h>
int main()
{
    float a = 5, b = 1, x = 10, y = 5,f;
    f = (a-b) *(x-y);
    printf("\nThe value of f : %0.0f\nEnter the values of a,b,x,y : ",f);
    scanf("%f%f%f%f",&a,&b,&x,&y);
    f= (a-b) *(x-y);
    printf("\nThe value of f : %0.2f",f);
}