
#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,n,t;
    float i,a,s;
    printf("Enter the principal amount : ");
    scanf("%f",&p);
    printf("\nEnter the interest rate : ");
    scanf("%f",&r);
    printf("\nEnter the investment duration in years : ");
    scanf("%f",&t);
    i=p*r*t;
    s=p*(1+r*t);
    a=p*pow((1+r),t);
    printf("\n Simple interest : %0.2f",i);
    printf("\n Compound interest : %0.2f",a);
    printf("\nMaturity rate : %0.2f\n",s);
}
