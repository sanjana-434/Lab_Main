/*Richter Scale Number (n) 		Characterization 
n< 5.0				Little or no damage 
5.0 ≤n < 5.5 			Some damage 
5.5 ≤ n < 6.5 			Serious damage: walls may crack or fall 
6.5 ≤ n < 7.5 			Disaster: houses and buildings may collapse 
higher				Catastrophe: most buildings destroyed 
*/
#include <stdio.h>
int main()
{
    float n;
    printf("Richter scale number for the earthquake : ");
    scanf("%f",&n);
    if (n<5.0)
        printf("\nLittle or no damage\n");
    else if(n<5.5)
        printf("\nSome damage\n");
    else if(n<6.5)
        printf("\nSerious damage: walls may crack or fall\n");
    else if(n<7.5)
        printf("\nDisaster: houses and buildings may collapse\n");
    else
        printf("\nCatastrophe: most buildings destroyed\n");
}












