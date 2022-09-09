#include <stdio.h>
int main()
{
    float product_sales,total_income;
    char month[10];
    printf("\nEnter the month : ");
    scanf("%s",&month);
    printf("Enter the total income collected (sales+sales tax) : ");
    scanf("%f",&total_income);
    product_sales=total_income/1.06;
    printf("\nMonth : %s",month);
    printf("\n---------------------------");
    printf("\nTotal Collected :     $ %0.2f",total_income);
    printf("\nSales :               $ %0.2f",product_sales);
    printf("\nCounty sales tax :    $ %0.2f",0.02*product_sales);
    printf("\nState sales tax :     $ %0.2f",0.04*product_sales);
    printf("\nTotal sales tax :     $ %0.2f",0.06*product_sales);
}