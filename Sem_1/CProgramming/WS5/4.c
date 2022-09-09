/*4.	Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
•	The number of millimeters higher than the current level that the ocean’s level willbe in 5 years.
•	The number of millimeters higher than the current level that the ocean’s level willbe in 7 years.
•	The number of millimeters higher than the current level that the ocean’s level willbe in 10 years.
*/
#include <stdio.h>
int main()
{
    float rise_per_year = 1.5;
    printf("\nThe number of millimeters higher than the current level that the ocean’s level willbe in 5 years : %0.2f",rise_per_year*5);
    printf("\nThe number of millimeters higher than the current level that the ocean’s level willbe in 7 years : %0.2f",rise_per_year*7);
    printf("\nThe number of millimeters higher than the current level that the ocean’s level willbe in 10 years : %0.2f",rise_per_year*10);
}