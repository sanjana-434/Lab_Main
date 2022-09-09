/* 5.	A  soft  drink  company  recently  surveyed  12,467  of  its  customers  and  found  that approximately 14 percent
 of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 64 percent
  of them prefer citrus flavored energy drinks. Write a program that displays the following:
•	The approximate number of customers in the survey who purchase one or more energy drinks per week.
•	the approximate number of customers in the survey who prefer citrus flavored energy drinks.      */
#include <stdio.h>
int main()
{
    int customers=12467;
    printf("\nThe approximate number of customers in the survey who purchase one or more energy drinks per week : %0.0f",customers*0.14);
    printf("\nThe approximate number of customers in the survey who prefer citrus flavored energy drinks : %0.0f",customers*0.14*0.64);
}
