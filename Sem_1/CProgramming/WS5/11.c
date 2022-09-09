/* 11.	Write a program that asks the user to enter the monthly costs for the following expenses incurred from operating 
his or her automobile: loan payment, insurance, gas, oil, tires, and maintenance. The program should then display the total 
monthly cost of these expenses, and the total annual cost of these expenses. */
#include <stdio.h>
int main()
{
    float loan_payment, insurance, gas, oil, tires, maintenance;
    float monthly_expense,annual_expense;
    printf("\nEnter the monthly expenses for the following : ");
    printf("\nloan payment : ");
    scanf("%f",&loan_payment);
    printf("\ninsurance :");
    scanf("%f",&insurance);
    printf("\ngas : ");
    scanf("%f",&oil);
    printf("\noil : ");
    scanf("%f",&oil);
    printf("\ntires : ");
    scanf("%f",&tires);
    printf("\nmaintenance : ");
    scanf("%f",&maintenance);
    monthly_expense=loan_payment+ insurance+ gas+ oil+ tires+ maintenance;
    annual_expense=monthly_expense*12;
    printf("\nThe total monthly cost of these expenses : %0.3f",monthly_expense);
    printf("\nThe total annual cost of these expenses : %0.3f\n",annual_expense);
}