#include <stdio.h>
int main()
{
    int fahrenheit;
    float celsius;
    printf("Enter the temperature in fahrenheit : ");
    scanf("%d",&fahrenheit);
    celsius = (5.0 / 9.0) * fahrenheit - 32;
    printf("\nTemperature in celsius : %0.2f\n",celsius);
}