/*Write a program in C to calculate and print the Electricity bill of a given customer.
 The customer id., name and unit consumed by the user should be taken from the keyboard and display 
 the total amount to pay to the customer. The charge are as follow:
Unit					Charge/unit
upto 199				@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above				@2.00   */
#include <stdio.h>
int main()
{
    int custId;
    float totalAmount,units;
    char custname[100];
    printf("\nEnter the customer id : ");
    scanf("%d",&custId);
    printf("\nEnter the name of the customer : ");
    scanf("%s",custname);
    printf("\nEnter the units consumed by the user : ");
    scanf("%f",&units);
    if (units<=199)
    {
        totalAmount = 1.2*units;
    }
    else if(units<400)
    {
        totalAmount = 1.5*units;
    }
    else if (units<600)
    {
        totalAmount=1.8*units;
        totalAmount=totalAmount*0.15;
    }
    else
    {
        totalAmount=2.0*units;
        totalAmount=totalAmount*0.15;
    }
    if (totalAmount<100)
    {
        totalAmount=100;
    }
    printf("The Electric bill is :  %0.3f",totalAmount);

}
