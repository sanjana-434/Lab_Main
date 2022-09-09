#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2,r1,r2;
    int r,d;
    printf("\nEnter the values of center point and radius of circle 1 : ");
    scanf("%d%d%d",&x1,&y1,&r1);
    printf("\nEnter the values of center point and radius of circle 2 : ");
    scanf("%d%d%d",&x2,&y2,&r2);
    r=r1+r2;
    d=sqrt((pow((x1-x2),2))+pow((y2-y1),2));
    if(r>=d)
    {
        printf("\nThe circles intersect each other\n");
    }
    else
    {
        printf("\nThe circles doesnot intersect\n");
    }

}