#include <stdio.h>
#include <dos.h>
#include <time.h>
#define s(x) #x

int main()
{
    // struct date dt;
    // getdate(&dt);
    // printf("%d-%d-%d", dt.da_day,dt.da_mon,dt.da_year);
    //struct tm *localtime(const time_t *timer);
    //printf("Current local time and date: %s", asctime());
    time_t now;
    struct tm * date;
    time( &now );
    date = localtime( &now );
    printf("%s %s %s" , s(date->tm_mday) ,s(date->tm_mon+1) ,s(date->tm_year));
    
    return 0;
}