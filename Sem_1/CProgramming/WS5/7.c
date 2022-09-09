/*7.	There are three seating categories at a stadium. For a softball game, Class A seats cost Rs. 15, Class B seats cost Rs. 12, 
and Class C seats cost Rs. 9. Write a program that asks how many tickets for each class of seats were sold, then displays the amount 
of income generated from ticket sales. Format your amount in fixed-point notation, with two decimal places of precision, and be sure 
the decimal point is always displayed.*/
#include <stdio.h>
int main()
{
    int classA,classB,classC;
    float total;
    printf("Enter the tickets for class A : ");
    scanf("%d",&classA);
    printf("\nEnter the tickets for class B : ");
    scanf("%d",&classB);
    printf("\nEnter the tickets for class C :");
    scanf("%d",&classC);
    total=(15*classA)+(12*classB)+(9*classC);
    printf("\nThe amount of income generated from the ticket sales : %0.2f\n",total);
}