#include <stdio.h>
#include <math.h>

typedef struct 
{
    int day;
    int month;
    int year;
}date;

date read(date* x);
date diff(date* x,date* y);
int main()
{
    date d1,d2,d;
    read(&d1);
    read(&d2);
    d=diff(&d1,&d2);
    printf("\nThe difference between the dates  : %d .%d .%d \n" ,d.day,d.month,d.year);
}

date read(date* x)
{
    static int i;
    i++;
    printf("\nEnter the date %d",i);
    printf("\nDay : ");
    scanf("%d",&x->day);
    printf("\nMonth : ");
    scanf("%d",&x->month);
    printf("\nYear : ");
    scanf("%d",&x->year);
}
date diff(date* x,date* y)
{
    date z;
    z.day=abs(x->day - y->day);
    z.month=abs(x->month - y->month);
    z.year=abs(x->year - y->year);
    return z;
}