/*1.	A car holds 12 gallons of gasoline and can travel 350 miles before refueling. Write a program that 
calculates the number of miles per gallon the car gets. Display the result on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven / Gallons of Gas Used
*/
#include <stdio.h>
int main()
{
    float miles_driven,gas_used,MPG;
    printf("Enter the number of miles driven : ");
    scanf("%f",&miles_driven);
    printf("\nEnter the gallons of gas used : ");
    scanf("%f",&gas_used);
    MPG=miles_driven/gas_used;
    printf("\nmiles per gallon for a car before refueling : %0.3f",350.0/12.0);
    printf("\nmiles per gallon for a car which has driven %0.3f miles and used %0.3f gas : %0.3f",miles_driven,gas_used,MPG);
}