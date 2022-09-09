#include <stdio.h>
int main()
{
    /*
    int leapYear(int y);
    int d=0, date,month ,n , y ,l; 
    int ly[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int nly[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter the year : ");
    scanf("%d",&y);
    printf("\nsun=0 , mon=1 ,......sat=6");
    printf("\nEnter the first day of the year : ");
    scanf("%d",&n);
    printf("\nEnter the month : ");
    scanf("%d",&month);
    printf("\nEnter the date : ");
    scanf("%d",&date);

    l=leapYear(y);
    if (l==1)
    {
        for (int i=0;i<month-1;i++)
        {
            d+=ly[i];
        }
        d+=date;
    }
    else
    {
        for (int i=0;i<month-1;i++)
        {
            d+=nly[i];
        }
        d+=date;
    }
    n=d%7+n-1;
    printf("\nThe day of the year is : %d",d);
    printf("\nThe respective day is : ");
    switch(n)
    {
        case 0:printf("Sunday");break;
        case 1:printf("Monday");break;
        case 2:printf("Tuesday");break;
        case 3:printf("Wednesday");break;
        case 4:printf("Thursday");break;
        case 5:printf("Friday");break;
        case 6:printf("Saturday");break;
    }


}
int leapYear(int y)
{
    int l=0;
    if(y%100 ? (y%400==0 ? 1 : 0) : 0)
        l=1;
    else if (y%4==0)
        l=1;
    return l;*/
    int d , day ,month , date , year;
    printf("\nEnter the day of the year : ");
    scanf("%d",&d);
    printf("\nEnter the year : ");
    scanf("%d",&year);
    printf("\nsun=0 , mon=1 ,......sat=6");
    printf("\nEnter the first day of the year : ");
    scanf("%d",&day);
    int y[12]={31,28,31,30,31,30,31,31,30,31,30,31} , l=0;
    if ((year%4==0) || ((year%400==0) && (year%100)==0))
        y[1]=29;
    for (int i=0;i<12;i++)
    {
        l+=y[i];
        if (d<=l)
        {
            month = i+1;
            date=y[i]-(l%d);
            break;
        }
    }
    printf("The date : %d . %d . %d",date,month,year);
    int n=d%7-1;
    printf("\nThe day of the year is : %d",d);
    printf("\nThe respective day is : ");
    switch(n)
    {
        case 0:printf("Sunday");break;
        case 1:printf("Monday");break;
        case 2:printf("Tuesday");break;
        case 3:printf("Wednesday");break;
        case 4:printf("Thursday");break;
        case 5:printf("Friday");break;
        case 6:printf("Saturday");break;
    }
}
