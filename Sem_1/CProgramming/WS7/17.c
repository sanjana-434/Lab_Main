#include <stdio.h>
#include <stdlib.h>
int main()
{
    int month,date;
    printf("Enter the month and date : ");
    scanf("%d%d",&month,&date);
    if (month<=6 && month>=3)
    {
        if (month==3 && date>=20)
        {
            printf("\nSpring\n");
            exit (0);
        }
        if (month==6 && date<=20)
        {
            printf("\nSpring\n");
            exit(0);
        }
        if (month==4 || month==5)
        {
            printf("\nSpring\n");
            exit(0);
        }
    }
    printf("\nNot Spring\n");
}