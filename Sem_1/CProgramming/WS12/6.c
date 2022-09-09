#include <stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the first number : ");
    scanf("%d",&a); 
    printf("\nEnter the second number : ");
    scanf("%d",&b);
    int*c=&a,*d=&b;
    printf("\nThe sum of the entered numbers is : %d ",*c+*d);

}