
#include <stdio.h>
int main()
{
    float fixed_charge=30.50,cost_unit=7.13, old_reading , new_reading , bill;
    printf("\nEnter the old metre reading : ");
    scanf("%f",&old_reading);
    printf("\nEnter the new metre reading : ");
    scanf("%f",&new_reading);
    bill= fixed_charge+(cost_unit*(new_reading-old_reading));
    printf("\nElectricity bill : %0.3f\n",bill);
}