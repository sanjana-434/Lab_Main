#include <stdio.h>
int main()
{
    int month,date,year , l=0 ,d;
    printf("Enter the date , month and year : ");
    scanf("%d%d%d",&date,&month,&year);
    if (year%100==0)
    {
        if (year%400==0)
            l=1;
        else
            l=0;
    }   
    else if (year%4==0)
    {
        l=1;  
    } 
    
    int a=0;
    if (month==1)
    {
        d=date;
    }
    a+=31;
    if (l==0)
    {
        if(month==2)
            d=a+date;
    a+=28;
    }
    if (l==1)
    {
        if(month==2)
            d=a+date;
    a+=29;
    }
    if(month==3)
    {
        d=a+date;
    }
    a+=31;
    if(month==4)
    {
        d=a+date;
    }
    a+=30;
    if(month==5)
    {
        d=a+date;
    }
    a+=31;
    if(month==6)
    {
        d=a+date;
    }
    a+=30;
    if(month==7)
    {
        d=a+date;
    }
    a+=31;
    if(month==8)
    {
        d=a+date;
    }
    a+=31;
    if(month==9)
    {
        d=a+date;
    }
    a+=30;
    if(month==10)
    {
        d=a+date;
    }
    a+=31;
    if(month==11)
    {
        d=a+date;
    }
    a+=30;
    if (month==12)
    {
        d=a+date;
    }
    printf("\nThe day with respect to a year is %d\n",d);
}