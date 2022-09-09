#include<stdio.h>
int main()
{
    float buyingPrice ,sellingPrice , taxPercent ,k ;
    printf("Enter the buying price of the items : ");
    scanf("%f",&buyingPrice);
    printf("\nEnter the tax percent onthe goods bought : ");
    scanf("%f",&taxPercent);
    printf("\nEnter the selling price of the items : ");
    scanf("%f",&sellingPrice);
    k=sellingPrice-(buyingPrice*(taxPercent/100.0));
    if (k>0)
    {
        printf("\nProfit !!    by %0.2f\n",k);
    }
    else if (k<0)
    {
        printf("\nLose ....  by %0.2f\n",k);
    }
    else
    {
        printf("\nNeither lose nor profit\n");
    }

}