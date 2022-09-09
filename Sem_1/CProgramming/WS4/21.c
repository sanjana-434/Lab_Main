#include <stdio.h>
int main()
{
    int m,n,side1,side2,hypotenuse;
    printf("Enter the value of m : ");
    scanf("%d",&m);
    printf("\nEnter the value of n : ");
    scanf("%d",&n);
    side1 = m*m - n*n;
    side2 = 2*m*n ;
    hypotenuse = m*m+ n*n,
    printf("\nThe pythagorean triples are : %d  ,%d  ,%d\n",side1,side2,hypotenuse);


}