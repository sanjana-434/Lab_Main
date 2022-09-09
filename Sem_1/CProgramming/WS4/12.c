#include <stdio.h>
int main()
{
    int feet,inches,length;
    printf("\nEnter the length in feet and inches : ");
    scanf("%d%d",&feet,&inches);
    length = 12*feet+inches;
    printf("Your total length in inches is %d inches",length);

}