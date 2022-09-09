/*payAmount - This variable will hold the amount of pay the employee earns each payperiod. Initialize the variable with 1700.0.
payPeriods - This variable will hold the number of pay periods in a year. Initialize thevariable with 26.
annualPay - This variable will hold the employee’s total annual pay, which will be calculated.
*/
#include <stdio.h>
int main()
{
    float pay_amount=1700.0,pay_period=26,annual_pay;
    annual_pay=pay_amount*pay_period;
    printf("The annual pay of the employee : %0.3f",annual_pay);
}