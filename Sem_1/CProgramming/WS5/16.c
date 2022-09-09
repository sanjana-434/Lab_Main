#include <stdio.h>
int main()
{
    const float PI=3.14;
    float area, slices , diameter ;
    printf("\nEnter the diameter of the pizza : ");
    scanf("%f",&diameter);
    float r=diameter/2;
    area=PI*r*r;
    slices=area/14.125;
    printf("\nThe number of slices : %0.1f",slices);
}