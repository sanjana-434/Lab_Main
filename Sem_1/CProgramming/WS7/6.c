#include <stdio.h>

int main()
{
    int a, b, n, h, j=0, t=0;   /*a=jump up  ,    b=slip down , n=the feet after which there is no slip , h=total height , t=time in mins , j=current position*/
    printf("Enter the value of a,b,n,h : ");
    scanf("%d%d%d%d",&a,&b,&n,&h);
    while (j<h)
    {
        j+=a;
        t+=1;
        if(j<n)
        {
            j-=b;
        }
    }
    printf("After %d minutes, the frog jumps a height of %d ft from the bottom of the pit, to get out of the pit!",t,h);
    
}