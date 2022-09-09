/*Enter total number : 10
Enter the t increment:  2.5
y-values:
[1] t=0.000000,  y=0.000000
[ 2] t=2.500000,  y=1.897969

[10]  t=22.500000,  y=-1.935616
There are 5 non-negative y-values
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int N,count ;
    float t=0.0 ,y ,inc;
    printf("Enter total number : ");
    scanf("%d",&N);
    printf("\nEnter the t increment : ");
    scanf("%f",&inc);
    printf("\ny-values:");
    for (int i=1; i<=10 ; i++)
    {
        y=2*sin(0.5*t);
        printf("\n[%d]  t=%f ,  y=%f ",i,t,y);
        t+=inc;
        if (y>=0.0)
            count++;
    }
    printf("\nThere are %d non-negative y-values\n",count);
}