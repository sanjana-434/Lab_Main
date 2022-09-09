#include <stdio.h>
int main()
{
    float a,b,c;
    printf("\nEnter the side a : ");
    scanf("%f",&a);
    printf("\nEnter the side b : ");
    scanf("%f",&b);
    printf("\nEnter the side c : ");
    scanf("%f",&c);
    if (a==b && b==c && a==c)
    {
        printf("it is an equilateral triangle");
    }
    else if ((a!=b && b!=c && a==c) || (a==b && b!=c && a!=c) || (a!=b && b==c && a!=c))
    {
        printf("It is an isosceles triangle");
    }
    else{
        printf("it is a Scalene triangle");
    }
}