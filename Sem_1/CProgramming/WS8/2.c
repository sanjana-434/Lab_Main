#include <stdio.h>
int main()
{
    int n ;
    printf("Enter the number of responses : ");
    scanf("%d",&n);
    int survey[n];
    printf("\nEnter the responses (1-9) : ");
    for (int i=0;i<n;i++)
        scanf("%d",&survey[i]);
    
    //mean
    float mean=0;
    for (int i=0;i<n;i++)
        mean+=survey[i];
    mean/=n;
    printf("\nMean : %0.2f",mean);
    
    //median
    //sorting the array
    float median ,f;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i;j<n;j++)
        {
            if (survey[i]>survey[j])
            {
                f=survey[i];
                survey[i]=survey[j];
                survey[j]=f;
            }
        }
    }
    //finding median
    if (n%2==0)
        median=(survey[n/2]+survey[(n/2)-1])/2.0;
    else 
        median=survey[(n/2)];
    printf("\nMedian : %0.2f",median);

    //mode 
    int count[10]={0} , mode ,l, max; //ignore index 0 of count 
    //counting the no of responses
    for (int k=0;k<n;k++)
        count[survey[k]]++;
    //finding the max response
    max = count[1];
    for (int j=2;j<10;j++)
        if (count[j]>max)
        {
            max = count[j];
            mode =j;
        }
    printf("\nMode : %d",mode);
    
    
}