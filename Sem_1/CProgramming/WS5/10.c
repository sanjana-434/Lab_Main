/*10.	A bag of cookies holds 40 cookies. The calorie information on the bag claims that there are 10 “servings” 
in the bag and that a serving equals 300 calories. Write a program that asks the user to input how many cookies he or she 
actually ate and then reports how many total calories were consumed*/
#include <stdio.h>
int main()
{
    float num, calories_per_cookie=300.0/10.0;
    float total_calories;
    printf("Enter the numbers of cookies he or she ate : ");
    scanf("%f",&num);
    printf("\nThe total calories consumed : %0.3f calories \n",num*calories_per_cookie);
}