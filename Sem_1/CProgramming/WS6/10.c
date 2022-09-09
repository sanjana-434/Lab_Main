#include <stdio.h>
int main()
{
    float angle1,angle2,angle3,sum ;
    printf("Enter the angle1 : ");
    scanf("%f",&angle1);
    printf("Enter the angle2 : ");
    scanf("%f",&angle2);
    printf("Enter the angle3 : ");
    scanf("%f",&angle3);
    sum =angle1+angle2+angle3;
    if (sum==180)
    {
        printf("\nTriangle can be formed \n");
    }
    else
    {
        printf("\nTriangle cannot be formed \n");
    }
}