#include <stdio.h>
int main()
{
    int leap(int year);
    int daysInMonth_nl[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int daysInMonth_l[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int date,month,year ,days=0;
    printf("\nEnter the date , month and the year : ");
    scanf("%d%d%d",&date,&month,&year);
    int l=leap(year);
    if (l==1)
    {
        for (int i=0 ; i<month-1 ; i++)
            days+=daysInMonth_l[i];
        days+=date;
    }
    else
    {
        for (int i=0 ; i<month-1 ; i++)
            days+=daysInMonth_nl[i];
        days+=date;
    }
    printf("\nThe day of the year : %d",days);
}

int leap(int year)
{
    int l=0;
    if (year%100==0)
    {
        if (year%400==0)
            l=1;
    }
    else if (year%4==0)
    {
        l=1;
    }
    return l;
}