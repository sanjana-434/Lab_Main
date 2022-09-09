/*12.	Write a program that will convert U.S. dollar amounts to Japanese Yen and to Euros. 
To get the most up-to-date exchangerates, search the Internet using the term “currency exchange rate”. 
If you cannot find the most recent exchange rates, use the following:
1 Dollar = 113.22 Yen
1 Dollar = 0.6936 Euros
Format your currency amounts in fixed-point notation, with two decimal places ofprecision, and be sure the decimal point is always displayed.*/
#include <stdio.h>
int main()
{
    float dollar , yen ,euros ;
    printf("Enter the U.S Dollar amount : ");
    scanf("%f",&dollar);
    yen=113.22*dollar;
    euros=0.6936*dollar;
    printf("\nU.S Dollar in Yen : %0.2f",yen);
    printf("\nU.S Dollar in Euros : %0.2f\n",euros);
}