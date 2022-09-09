#include <stdio.h>
int main()
{
    const float PI=3.14;
    float area, slices , diameter , r ,pizzas ;
    int people;
    printf("\nEnter the diameter of the pizza : ");
    scanf("%f",&diameter);
    printf("\nEnter the number of people attending the party : ");
    scanf("%d",&people);
    r=diameter/2;
    area=PI*r*r;
    slices=area/14.125;
    pizzas=(4.0*people)/slices;
    printf("\nThe no of pizzas needed for %d people : %0.0f",people,pizzas);

}