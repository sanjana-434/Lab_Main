#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float * arr;
    int i=0;
    arr=malloc(sizeof(float));
    float mean=0,sd=0;
    printf("Enter the values of the array (ends for -1) : ");
    do
    {
        realloc(arr,sizeof(float)*(i+1));
        scanf("%f",&arr[i]);
    } while (arr[i++]!=-1);
    int len=0;
    for (i=0;arr[i]!=-1;i++)
    {
        mean=mean+arr[i];
        len++;
    }
    mean=mean/len;
    //sd
    for (i=0;arr[i]!=-1;i++)
    {
        sd+=pow((arr[i]-mean),2);
    }
    sd=pow(sd/len,0.5);
    printf("\nMean of the array : %0.3f\n",mean);
    printf("\nStandard deviation of the array : %0.3f\n",sd);
}