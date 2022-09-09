#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of days : ");
    scanf("%d",&n);
    printf("\nEnter the temperature values : ");
    float temp[n];
    for (int i=0;i<n;i++)
    {
        printf("\nEnter temp of day %d : ",i+1);
        scanf("%f",&temp[i]);
    }
    //max and avg
    float max=temp[0],avg=0 ;
    int d=1;
    for (int i=0;i<n;i++)
    {
        avg+=temp[i];
        if (max<temp[i])
        {
            max=temp[i];
            d=i+1;
        }
    }
    avg=avg/n;
    printf("Average temp : %0.3f" ,avg);
    printf("\nMaximum temp : %0.3f",max);
    printf("\nThe maximum temp is recorded on day  : %d ",d);
    //min
    float min=temp[0] ;
    int l=1 ;
    for (int i=0;i<n;i++)
    {
        if (min>temp[i])
        {
            min=temp[i];
            l=i+1;
        }
    }
    printf("\nMinimum temp : %0.3f",min);
    printf("\nThe maximum temp is recorded on day : %d",l);
    //number of days based on the range 
    int vHot=0 ,hot=0 ,normal=0  ,cold=0 ,vCold=0 ;
    for (int k=0;k<n;k++)
    {
        if (temp[k]>150)
            vHot++;
        else if (temp[k]<=150 && temp[k]>80)
            hot++;
        else if (temp[k]<=80 && temp[k]>25)
            normal++;
        else if (temp[k]<=25 && temp[k]>0)
            cold++;
        else
            vCold++;
    }
    printf("\nNumber of Days ( very hot ) : %d",vHot);
    printf("\nNumber of Days ( hot ) : %d",hot);
    printf("\nNumber of Days ( normal ) : %d",normal);
    printf("\nNumber of Days ( cold ) : %d",cold);
    printf("\nNumber of Days ( very cold ) : %d",vCold);
  
}
