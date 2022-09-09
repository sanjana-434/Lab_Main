#include <stdio.h>
int isMountain(int* elevation, int length);
int main()
{
    int n,i,m;
    printf("\nEnter the length of the array : ");
    scanf("%d",&n);
    int elevation[n];
    printf("\nEnter the values of the array : ");
    for (i=0;i<n;i++)
        scanf("%d",&elevation[i]);
    m=isMountain(elevation,n);
    if (m==1)
        printf("\nArray elevation form a mountain sequence\n");
    else
        printf("\nArray elevation does not form a mountain sequence\n");
}
int isMountain(int* elevation, int length)
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
    for(i=0;i<maxIndex;i++)
    {
        if (elevation[i]>=elevation[i+1])
            f=0;
    }
    for (i=maxIndex;i<length-1;i++)
    {
        if (elevation[i]<=elevation[i+1])
            f=0;
    }
    return f;
}