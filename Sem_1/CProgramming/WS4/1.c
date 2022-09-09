#include <stdio.h>
#include <math.h>
#define e 2.718281828459045
int main()
{
    float a,b,x,y,r,t;
    printf("(i)");
    printf("\nEnter the value of a,x,b : ");
    scanf("%f%f%f",&a,&x,&b);
    r=(a*x+b)/(a*x-b);
    printf("\nResult for (ax+b)/(ax-b) : %0.4f",r);

    printf("\n(ii)");
    printf("\nEnter the value of x,y : ");
    scanf("%f%f",&x,&y);
    r=(2.5*log(x)) + cos(32) + abs(x*x-y*y)+sqrt(2*x*y);
    printf("\nResult for 2.5logx+cos32+ |x*x-y*y|+sqrt(2*x*y) : %0.4f",r);

    printf("\n(iii)");
    printf("\nEnter the value of a,r,t : ");
    scanf("%f%f%f",&a,&r,&t);
    r=a*pow(e,-(r*t));
    printf("\nResult for a(e^-rt) : %0.4f",r);

    printf("\n(iv)");
    printf("\nEnter the value of x : ");
    scanf("%f",&x);
    r=pow(x,5) + 10*pow(x,4)+8*pow(x,3)+4*x+2 ;
    printf("\nResult for x^5 +10x^4+8x^3+4^x+2 : %0.4f",r);


}