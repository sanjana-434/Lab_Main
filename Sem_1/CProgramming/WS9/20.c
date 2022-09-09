#include <stdio.h>
double calcavg(int freq[]);
int main()
{
    int n,i;
    double avg;
    printf("Enter the number of students  : ");
    scanf("%d",&n);
    int hours[n],freq[10]={0};
    printf("\nEnter the hours each student has watched TV [0,9]: ");
    for (i=0;i<n;i++)
        scanf("%d",&hours[i]);
    for (int i=0;i<n;i++)
        freq[hours[i]]++;
    avg=calcavg(freq);
    printf("\nNumber of hours : ");
    for (i=0;i<10;i++)
        printf("%3d",i);
    printf("\nNumber of people : ");
    for (i=0;i<10;i++)
        printf("%3d",freq[i]);
    printf("\nAverage number of hours of TV watched a day by all the survey participants : %lf\n",avg);
}
double calcavg(int freq[])
{
    double a,n=0;
    for (int i=0;i<10;i++)
    {
        a+=i*freq[i];
        n+=i;
    }
    a=a/n;
    return a;
}