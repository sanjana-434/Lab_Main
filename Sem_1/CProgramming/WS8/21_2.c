//reverse of 21_1.c
//finding d and m by inputting julian day and y
#include <stdio.h>
int main()
{
    int jd,y,m,d;
    int isleapYear(int y);
    int nly[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31, 30};//not a leap year
    printf("Enter the julian days : ");
    scanf("%d",&jd);
    printf("\nEnter the year : ");
    scanf("%d",&y);
    d=jd;
    if (isleapYear(y)==1)
            nly[2]++;
    for (m=1;m<13;m++)
    {
        if (d-nly[m]>0)
            d=d-nly[m];
        else
            break;
    }
    printf("\nThe date and month of the given julian day and month : %02d / %02d\n",d,m);
}
int isleapYear(int y)
{
    int f=0;
    if ((y%4==0) && (y%100!=0) || (y%400==0))
        f=1;
    return f;
}