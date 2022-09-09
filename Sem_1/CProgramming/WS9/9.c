#include <stdio.h>
int peakLocation(int* elevation, int length);
int main()
{
    int n,i,m;
    printf("\nEnter the length of the array : ");
    scanf("%d",&n);
    int elevation[n];
    printf("\nEnter the values of the array : ");
    for (i=0;i<n;i++)
        scanf("%d",&elevation[i]);
    m=peakLocation(elevation,n);
    printf("\nIndex that contains the Maximum value : %d",m);
}
int peakLocation(int* elevation, int length)
{
    int k,max=elevation[0],f=1,i;
    int maxIndex;
    for (k=0;k<length;k++)
    {
        if (max<elevation[k])
        {
            max=elevation[k];
            maxIndex=k;
        }
    }
    return maxIndex;
}