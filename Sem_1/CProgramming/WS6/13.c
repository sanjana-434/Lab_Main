/*  E	Excellent
V	Very Good
G	Good
A	Average
F	Fail*/
#include <stdio.h>
int main()
{
    char grade;
    printf("Enter the grade : ");
    scanf("%c",&grade);
    if (grade=='E')
    {
        printf("\nExcellent\n");
    }
    else if (grade=='V')
    {
        printf("\nVery Good\n");
    }
    else if (grade=='G')
    {
        printf("\nGood\n");
    }
    else if (grade=='A')
    {
        printf("\nAverage\n");
    }
    else if (grade=='F')
    {
        printf("\nFail\n");
    }
    else
    {
        printf("\ninvalid input\n");
    }
}
