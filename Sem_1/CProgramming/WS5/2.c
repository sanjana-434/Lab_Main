/*2.	Kathryn bought 600 shares of stock at a price of Rs. 21.77 per share.
 She must pay her stock broker a 2 percent commission for the transaction.
  Write a program that calculates and displays the following:
• The amount paid for the stock alone (without the commission)
• The amount of the commission
• The total amount paid (for the stock plus the commission)
*/
#include <stdio.h>
int main()
{
    float amount_stock,amount_comm,amount_total;
    amount_stock =600*21.77;
    amount_comm=amount_stock*0.02;
    amount_total=amount_stock+amount_comm;
    printf("The amount paid for the stock alone (without the commission) : %0.3f",amount_stock);
    printf("\nThe amount of the commission : %0.3f",amount_comm);
    printf("\nThe total amount paid (for the stock plus the commission) : %0.3f",amount_total);
    
}
