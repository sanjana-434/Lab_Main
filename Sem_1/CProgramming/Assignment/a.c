#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,e,f;
    int i;
    float f1,f2,f3,x1=0,x2=0,r1,r2;
    printf("\n\t\t\t\t\t\t\t\tSolving equation using bisection method ");
    printf("\n\t\t\t\t\t\t\t\t=======================================");
    printf("\n\nThe equation is in the form : \n");
    printf("\n --------------------------------------------");
    printf("\n|   ax^5 + bx^4 + cx^3 + dx^2 + ex + f = 0   |");
    printf("\n --------------------------------------------\n");
    printf("\nEnter the values of a ,b ,c ,d ,e ,f  :");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);

    do 
    {
        f1= a*pow(i,5) + b*pow(i,4) + c*pow(i,3) + d*pow(i,2) + e*(i) + f;
        f2= a*pow(i+1,5) + b*pow(i+1,4) + c*pow(i+1,3) + d*pow(i+1,2) + e*(i+1) + f;
        i++;
    }while(!(f1<0 && f2>0));
    r1=f1,r2=f2;
    
    do
    {
        x1=x2;
        x2=(r1+r2)/2.0;
        f3= a*pow(x2,5) + b*pow(x2,4) + c*pow(x2,3) + d*pow(x2,2) + e*(x2) + f;
        if (f3<0)
            r1=x2;
        else
            r2=x2;

    }while(!(x1==x2));
    printf("\nThe root of the equation is  :  %f",x2);
}