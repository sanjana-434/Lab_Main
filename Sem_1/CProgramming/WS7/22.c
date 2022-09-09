#include <stdio.h>
int main()
{
    int accNo;
    char useCode;
    float gallon ,moneyDue;
    L1:printf("\nEnter the usecode (C,H,I): ");
    scanf("%c",&useCode);
    printf("Enter the account number : ");
    scanf("%d",&accNo);
    printf("\nEnter the gallons of water used : ");
    scanf("%f",&gallon);
    if (useCode!='I' && useCode!='C' && useCode!='H')
    {
        goto L1;
    }
    if (useCode=='H')
    {
        moneyDue=5+(0.025*gallon);
    }
    else if(useCode=='C')
    {
        if (gallon<4000000)
            moneyDue=1000+(0.025*(gallon-4000000));
        else    
            moneyDue=1000;
    }
    else
    {
        if (gallon<4000000)
            moneyDue=1000;
        else if (gallon>10000000) 
            moneyDue=3000;
        else 
            moneyDue=2000;
    }
    printf("\nAccount number : %d",accNo);
    printf("\nUse code : %c",useCode);
    printf("\nAmount of money due from the user : %0.3f\n",moneyDue);
}