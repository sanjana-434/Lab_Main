#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the values of x and y : ");
    scanf("%d%d",&x,&y);
    if (x>0 && y>0)
    {
        printf("\nthe points lie in the first quadrant\n");
    }
    else if(x<0 && y>0)
    {
        printf("\nthe points lie in the fourth quadrant\n");
    }
    else if(x<0 && y<0)
    {
        printf("\nthe points lie in the third quadrant\n");
    }
    else if(x>0 && y<0)
    {
        printf("\nthe points lie in the second quadrant\n");
    }
    else if(y==0 && x!=0)
    {
        printf("\nthe points lie on x axis\n");
    }
    else if(y!=0 && x==0)
    {
        printf("\nthe points lie on y axis\n");
    }
    else 
    {
        printf("\n the point represents origin\n");
    }
}