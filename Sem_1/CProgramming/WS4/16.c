
#include <stdio.h>
int main()
{
    float days ,ini_reading ,fin_reading ,standing_charge , charge_gas,  VAT , sub_total , total ;
    printf("\nEnter the number of days : ");
    scanf("%f",&days);
    printf("\nEnter the initial reading : ");
    scanf("%f",&ini_reading);
    printf("\nEnter the final reading : ");
    scanf("%f",&fin_reading);
    standing_charge=days/9.02;
    charge_gas =(fin_reading - ini_reading)*1.433 ;
    sub_total=standing_charge + charge_gas;
    VAT=0.08*sub_total;
    total = VAT + sub_total;
    printf("\nStanding charge 9.02 pence for %0.0f days         %0.2f",days,standing_charge);
    printf("\nGas consumption  %0.1f cu.m @ 1.433 pence         %0.2f", fin_reading - ini_reading ,charge_gas);
    printf("\nSub-total                                         %0.2f",sub_total);
    printf("\nVAT at 8%%                                        %0.2f",VAT);
    printf("\nTotal                                             %0.2f\n",total);
}