#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("\nThe year %d is a leap year \n",year);
    }
    else 
    {
         printf("\nThe year %d is not a leap year \n",year);
    }
}