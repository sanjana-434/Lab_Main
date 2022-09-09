#include <stdio.h>
int distanceJumped(int buildings[], int length);
int main()
{
    int n,i;
    printf("\nEnter the number of buildings : ");
    scanf("%d",&n);
    int h[n];
    printf("\nEnter the heights of the buildings : ");
    for (i=0;i<n;i++)
        scanf("%d",&h[i]);
    int jumpUp=distanceJumped(h,n);
    printf("\nTotal feet he must jummp up : %d\n",jumpUp);
}
int distanceJumped(int buildings[], int length)
{
    int i=0;
    int h=0;
    for (i=0;i<length-1;i++)
    {
        if (buildings[i]<buildings[i+1])
            h+=buildings[i+1]-buildings[i];
    }
    return h;
}