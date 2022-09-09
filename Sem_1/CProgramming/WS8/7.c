//temp ==Min ,Max , Avg
#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of elements of the array temp : ");
    scanf("%d",&n);

    //inputing the temperatures
    printf("\nEnter the elements (temp) of array temp : ");
    float temp[n];
    for (int i=0;i<n;i++)
        scanf("%f",temp+i);
    
    //finding min ,max and avg
    float min=temp[0],max=temp[0],avg=0;
    for (int j=0;j<n;j++)
    {
        if (temp[j]>max)
            max=temp[j];
        if (temp[j]<min)
            min=temp[j];
        avg+=temp[j];
    }
    avg/=n;
    printf("\nMax temperature : %0.3f",max);
    printf("\nMin temperature : %0.3f",min);
    printf("\nAverage temperature : %0.3f",avg);

}