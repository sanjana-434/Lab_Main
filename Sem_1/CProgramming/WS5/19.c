/*The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of profit that Joe made after selling his stock and paying thetwo commissions to his broker. 
(If the amount of profit that your program displays is a negative number, then Joe lost money on the transaction).*/
#include <stdio.h>
int main()
{
    float shares=1000 , RsperShare1 = 32.87,comm1 ,amount1 ,profit;
    float  RsperShare2 = 33.92,comm2,amount2;
    comm1=RsperShare1*1000*0.02;
    comm2=RsperShare2*1000*0.02;
    amount1=1000*RsperShare1;
    amount2=1000*RsperShare2;
    printf("\nThe amount of money Joe paid for the stock : %0.2f",amount1);
    printf("\nThe amount of commission Joe paid his broker when he bought the stock : %0.2f",comm1);
    printf("\nThe amount that Joe sold the stock for :%0.2f",amount2);
    printf("\nThe amount of commission Joe paid his broker when he sold the stock : %0.2f",comm2);
    profit = amount2-amount1-comm2-comm1;
    if (profit>0)
    {
        printf("\nJoe has made money, ""profit"" \n");
    }
    else 
    {
        printf("\nJoe lost money on the transaction\n");
    }
}