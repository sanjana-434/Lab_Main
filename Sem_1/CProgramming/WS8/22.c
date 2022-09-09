#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    //mean
    float m=0,sqm=0;
    for (int i=0;i<n;i++)
    {
        m+=a[i];
        sqm+=a[i]*a[i];
    }
    m=(float)m/(float)n;
    sqm=(float)sqm/(float)n;
    printf("\nMean : %0.3f",m);
    //min and max
    int max,min;
    max=a[0];
    min=a[0];
    for (int i=1;i<n;i++)
    {
        if (max<a[i])
            max=a[i];
        if (min>a[i])
            min=a[i];
    }
    printf("\nMaximum : %d",max);
    printf("\nMinimum : %d",min);
    //sorting to find median
    int f;
    for (int i=0;i<n-1;i++)
    {
        if (a[i]>a[i+1])
        {
            f=a[i];
            a[i]=a[i+1];
            a[i+1]=f;
            i=-1;
        }
    }
    //meadian
    int median=a[n/2];
    printf("\nMedian : %d",median);

    //standard deviation
    float sd;
    sd=sqrt(sqm-m*m);
    printf("\nStandard deviation : %0.3f",sd);
}