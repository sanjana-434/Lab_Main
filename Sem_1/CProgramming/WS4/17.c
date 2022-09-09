
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,x,side;
    printf("Enter the first side : ");
    scanf("%f",&a);
    printf("Enter the second side : ");
    scanf("%f",&b);
    printf("Enter the angle between a and b : ");
    scanf("%f",&x);
    side = sqrt((a*a)+(b*b)-(2*a*b*cos(x)));
    printf("%0.4f",side);
}