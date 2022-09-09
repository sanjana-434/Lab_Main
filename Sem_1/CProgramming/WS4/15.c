#include <stdio.h>
int main()
{
    float ini_odometer,fin_odometer ,ini_fuel ,fin_fuel ;
    printf("\nEnter the initial reading in odometer : ");
    scanf("%f",&ini_odometer);
    printf("\nEnter the final reading in odometer : ");
    scanf("%f",&fin_odometer);
    printf("\nEnter the initial reading of fuel : ");
    scanf("%f",&ini_fuel);
    printf("\nEnter the final reading of fuel : ");
    scanf("%f",&fin_fuel);
    printf("\nConsumption of fuel for a car journey :%0.3f",(fin_odometer-ini_odometer)/(fin_fuel-ini_fuel));
}