#include <stdio.h>
int main()
{
    float wt , ht , bmi;
    const float kg_pounds=2.20462 , cm_in=0.393701;
    printf("Enter your height in cms : ");
    scanf("%f",&ht);
    printf("\nEnter your weight in kgs : ");
    scanf("%f",&wt);
    bmi = (703 *wt* kg_pounds)/(ht * cm_in*ht * cm_in);
    if (bmi<18.5)
        printf("\nUnder weight\n");
    else if(bmi<24.9)
        printf("\nNormal\n");
    else if(bmi<29.9)
        printf("\nOver weight\n");
    else
        printf("\nObese\n");


}