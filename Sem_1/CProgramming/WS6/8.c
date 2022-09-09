/*  Temp < 0 then Freezing weather
		Temp 0-10 then Very Cold weather
		Temp 10-20 then Cold weather
		Temp 20-30 then Normal in Temp
		Temp 30-40 then Its Hot
		Temp >=40 then Its Very Hot   */
#include <stdio.h>
int main()
{
    float  temp;
    printf("\nEnter the temperature in centigrade : ");
    scanf("%f",&temp);
    if (temp<0)
    {
        printf("\nFreezing weather\n");
    }
    else if(temp<10)
    {
        printf("\nVery cold weather\n");
    }
    else if(temp<20)
    {
        printf("\ncold weather\n");
    }
    else if(temp<30)
    {
        printf("\nNormal in Temp\n");
    }
    else if(temp<40)
    {
        printf("\nIts Hot\n");
    }
    else
    {
        printf("\nIts very Hot\n");
    }
}
