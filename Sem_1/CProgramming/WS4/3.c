#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float x,y;
    float r,theta;
    printf("\nEnter the value of x : ");
    scanf("%f",&x);
    printf("\nEnter the value of y : ");
    scanf("%f",&y);
    r=sqrt(x*x+y*y);
    theta=atan(y/x) *180.0/pi;
    printf("\nr : %0.4f",r);
    printf("\ntheta : %0.4f",theta);
}