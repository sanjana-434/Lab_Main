#include <stdio.h>
#include <math.h>

//A,B,C are sides 
//a,b,c are angles
int main()
{
    float a,b,c,A,B,C;
    int x,y,z;
    printf("Enter the two angles in radian : ");
    scanf("%f%f",&c,&a);
    printf("\nEnter the length of one side : ");
    scanf("%f",&B);
    b=M_PI-c-a;
    A=(B*sin(a))/sin(b);
    C=(B*sin(c))/sin(b);
    x=A/sin(a);
    y=B/sin(b);
    z=C/sin(c);
    if (x==y && y==z && x==z)
    {
        printf("\nNo error in the entered values\n");
    }
    else
    {
        printf("\nERROR!!!");
        return 0;
    }
    printf("\nThe three sides are %0.2f , %0.2f , %0.2f",A,B,C);
    printf("\nThe three angles in radian are %0.2f , %0.2f , %0.2f",a,b,c);
    printf("\nSum of angles in radian  = %0.2f",(a+b+c));
    printf("\nArea of the triangle : %0.2f",0.5*(a*180/M_PI)*(b*180/M_PI)*sin(c));
    
}