#include <stdio.h>
int main()
{
    float max , min , temp[24];
    for (int i=0;i<24;i++)
    {
        printf("\nEnter the temperature at %dst temperature : ",(i+1));
        scanf("%f",&temp[i]);
    }
    max=temp[0];
    min=temp[0];
    for (int j=0;j<24;j++)
    {
        if (temp[j]>max)
        {
            max=temp[j];
        }
        if (temp[j]<min)
        {
            min=temp[j];
        }
    }
    printf("\nMaximum temperature : %0.3f",max);
    printf("\nMinimum temperature : %0.3f",min);
}