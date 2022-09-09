#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    int i,j,num;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    printf("\nEnter the value of i and j : ");
    scanf("%d%d",&i,&j);
    a=(num>>(i-1))&1;
    b=(num>>(j-1))&1;
    num=num+(b-a)*(pow(2,(i-1))-pow(2,j-1));
    printf("\nThe number after swaping the %dth and %dth bits : %d",i,j,num);
}