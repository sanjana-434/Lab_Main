#include <stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature : ");
    scanf("%d",&temp);
    if (temp>95)
        printf("\nVisit our labs!!");
    else if(temp>=80)
        printf("\nSwimming");
    else if(temp>=60)
        printf("\nTennis");
    else if(temp>=40)
        printf("\nGolf");
    else if(temp>=20)
        printf("\nSkiing");
    else
        printf("\nVisit our labs!!");
}