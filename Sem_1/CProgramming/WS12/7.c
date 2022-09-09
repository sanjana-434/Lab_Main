#include <stdio.h>
int sum(int* c,int*d);
int main()
{
    int a,b;
    printf("\nEnter the first number : ");
    scanf("%d",&a); 
    printf("\nEnter the second number : ");
    scanf("%d",&b);

    printf("\nThe sum of the numbers %d and %d is : %d ",a,b,sum(&a,&b));
}
int sum(int* c,int*d)
{
    return *c+*d;
}