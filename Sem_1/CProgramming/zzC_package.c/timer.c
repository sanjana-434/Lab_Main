#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <windows.h>
#include "login.c"

void* timer();
void* timer()
{
    int m2=0,m1=0,s2=0,s1=0;

    do
    {    
    display(150,0);
    printf("%d%d : %d%d",m2,m1,s2,s1);
    if (s1==9)
    {
        s2++;
        s1=-1;
    }
    if(s2==5 && s1==9)
    {
        s2=0;
        m1++;
    }
    if (m1==9)
    {
        m2++;
        m1=0;
    }
    s1++;
    sleep(1);
    printf("\r");
    }while (1);
}
