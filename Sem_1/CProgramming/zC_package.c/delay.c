#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void delay(){
    int ms=1000;
    clock_t st=clock();
    while(clock()<st+ms);
}
void printTimer(int m,int s){
    printf("\b\b\b\b\b");
    printf("%d:%d\n",m,s);
}
void timer()
{
    static int m=0,s=0;
    s++;
    if(s>59){
        s=0;
        m++;
    }
    delay();
    system("cls");
    printTimer(m,s);
}
int main()
{
    while(1){
        timer();
    }
    return 0;
}