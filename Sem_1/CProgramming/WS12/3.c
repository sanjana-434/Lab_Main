#include <stdio.h>
int main()
{
    double* a2;
    double a1;
    int b1;
    int* b2;
    char* c2;
    char c1;
    a2=&a1;
    b2=&b1;
    c2=&c1;
    printf("Enter the values of a1(double),b1(int),c1(char) : ");
    scanf("%lf%*c%d%*c%c",&a1,&b1,&c1);
    printf("\nAddress of the variables : ");
    printf("\na1 : %p",a2);
    printf("\nb1 : %p",b2);
    printf("\nc1 : %p",c2);
    printf("\nValues of the variables : ");
    printf("\na1 : %lf",*a2);
    printf("\nb1 : %d",*b2);
    printf("\nc1 : %c",*c2);
    printf("\nmemory sizes of variables : ");
    printf("\na1 : %d",sizeof(a1));
    printf("\nb1 : %d",sizeof(b1));
    printf("\nc1 : %d",sizeof(c1));
    printf("\na1 : %d",sizeof(a2));
    printf("\nb1 : %d",sizeof(b2));
    printf("\nc1 : %d",sizeof(c2));
}