#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int a,b,c,d,e,g;
float f(float x);
int main()
{
    system("cls");
    // Inputing the equation
    printf("\n======================================================================================");
    printf("\n\t\t\t\t BISECTION METHOD");
    printf("\n======================================================================================");
    printf("\n\nEquation is of the form  :   a x^5 + b x^4 + c x^3 + d x^2 + e x + g = 0 ");
    printf("\n                             --------------------------------------------");
    printf("\n\nEnter the values of a , b , c , d , e , g  : ");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&g);

    //Finding the interval (xo,x1)
    float xo=0,x1=1;
    do 
    {
        if ( f(xo) < 0 && f(x1) > 0 )
        {
            break;
        }
        else
        {
            xo++;
            x1++;
        }

    }while(1);
    printf("\n\nInitial interval (xo,x1) : (%0.0f,%0.0f)",xo,x1);
    
    //accuracy
    int acc;
    printf("\n\nEnter the accuracy  : ");    //if i/p = 2...then, accuracy=0.01
    scanf("%d",&acc);
    float accuracy=pow(0.1,acc);   

    //finding number of iterations
    int n;
    n = 1 + ((int) (log(abs(x1 - xo)/accuracy))/log(2) );


    //finding x2 and f(x2) and root 
    float x2;
    int i;
    for(i=0;i<n;i++)
    {
        x2= (xo+x1)/2.0;
        if (f(x2)>0)
        {
            x1=x2;
        }
        else
        {
            xo=x2;
        }
    }
    printf("\n\nThe root of the equation is %0.4f",x2);
    printf("\n                           --------\n");
    
}
float f(float x)
{
    return a*pow(x,5) + b*pow(x,4) + c*pow(x,3) + d*pow(x,2) + e*x + g ; 
}