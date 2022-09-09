#include <stdio.h>
#include <math.h>
int main()
{
    float interest , principle,time,interest_rate,amount_savings;
    printf("\nEnter the principle amount : ");
    scanf("%f",&principle);
    printf("\nEnter the times compounded : ");
    scanf("%f",&time);
    printf("\nEnter the interest rate : ");
    scanf("%f",&interest_rate); 
    amount_savings=principle*(pow((1+(interest_rate/(100*time))),time));
    interest=amount_savings-principle;
    printf("\nInterest Rate :               %6.2f%%",interest_rate);
    printf("\nTimes compounded :            %7.0f",time);
    printf("\nPrinciple :                $  %7.2f",principle);
    printf("\nInterest :                 $  %7.2f",interest);
    printf("\nAmount in Savings :        $  %7.2f",amount_savings);
}