#include <stdio.h>
int main()
{
    float hoursWorked , payPerDay , totalPay ;
    printf("Enter the number of hours the person worked : ");
    scanf("%f",&hoursWorked);
    printf("\nEnter the pay per day : ");
    scanf("%f",&payPerDay);
    if (hoursWorked<=40)
    {
        totalPay=hoursWorked*payPerDay;
    }
    if(hoursWorked>40)
    {
        totalPay=40*payPerDay;
        totalPay+=(hoursWorked-40)*(payPerDay+(0.5*payPerDay));
    }
    printf("\nThe total pay is %0.3f\n",totalPay);
}