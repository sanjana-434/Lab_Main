#include <stdio.h>
int main()
{
    int birthd,birthm,birthy;
    int currentd,currentm,currenty;
    int age , maxHR;
    printf("Enter your birthday,month and year : ");
    scanf("%d%d%d",&birthd,&birthm,&birthy);
    printf("\nEnter the current day ,month and year : ");
    scanf("%d%d%d",&currentd,&currentm,&currenty);
    age=currenty-birthy;
    maxHR=220-age;
    printf("\nYour age : %d",age);
    printf("\nYour maximun heart rate : %d",maxHR);
    printf("\nTarget heart beat range : %0.3f  to  %0.3f\n",0.50*maxHR,0.85*maxHR);
}