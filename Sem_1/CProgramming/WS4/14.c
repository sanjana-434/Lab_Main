#include <stdio.h>
int main()
{
    float price,quantity,revenue;
    printf("\nEnter Price : ");
    scanf("%f",&price);
    printf("\nEnter Quantity : ");
    scanf("%f",&quantity);
    revenue = price*quantity;
    printf("\nThe Total Revene is RS.%0.2f/-\n",revenue);
}