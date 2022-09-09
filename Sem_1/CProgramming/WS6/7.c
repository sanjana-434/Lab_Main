#include <stdio.h>
#include <math.h>
int main()
{
    printf("The quaratic equation is of the form : a(x)^2 + b(x) + c = 0");
    float a,b,c,x1,x2;
    printf("\nEnter the value of a : ");
    scanf("%f",&a);
    printf("\nEnter the value of b : ");
    scanf("%f",&b);
    printf("\nEnter the value of c : ");
    scanf("%f",&c);
    x1= (-b + (sqrt((b*b) -(4*a*c))))/2*a;
    x2= (-b - (sqrt((b*b) -(4*a*c))))/2*a;
    printf("The roots of the quadratic equation are : %0.2f and %0.2f",x1,x2);

}