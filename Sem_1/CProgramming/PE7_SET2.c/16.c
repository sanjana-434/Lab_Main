/*Write a C program to display a sine table. The program should display all the sine values
from 0 to 360 degrees (at 5 degree increment) and it should display only 25 rows at a
time.*/
#include <stdio.h>
#include <math.h>
int main()
{
    float y;
    printf("x           sin(x)\n");
    for (float i=0;i<=360;i=i+5)
    {
        y=sin(i*(180.0/3.14))*(3.14/180.0);
        printf("%0.0f          %0.3f\n",i,y);
    }
}