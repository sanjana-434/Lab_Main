/*8.	Write a program that calculates the average rainfall for three months. 
The program should ask the user to enter the name of each month, such as June or July, and the
 amount of rain (in inches) that fell each month. The program should display a message similar to the following:
The average rainfall for June, July, and August is 6.72 inches.
*/
#include <stdio.h>
int main()
{
    char m1[10],m2[10],m3[10];
    float rm1,rm2,rm3,avg;
    printf("Enter the first month : ");
    scanf("\n");
    scanf("%s",m1);
    printf("\nEnter the amount of rain in inches : ");
    scanf("%f",&rm1);
    printf("\nEnter the second month : ");
    scanf("\n");
    scanf("%s",m2);
    printf("\nEnter the amount of rain in inches : ");
    scanf("%f",&rm2);
    printf("\nEnter the third month : ");
    scanf("\n");
    scanf("%s",m3);
    printf("\nEnter the amount of rain in inches : ");
    scanf("%f",&rm1);
    avg=(rm1+rm2+rm3)/3;
    printf("\nThe average rainfall for %s, %s, and %s is %0.2f inches", m1,m2,m3,avg);

}