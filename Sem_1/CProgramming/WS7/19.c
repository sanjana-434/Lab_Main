#include <stdio.h>
int main()
{
    float i , y , x ;
    
    printf("      x      y      i\n");
    for (y=1.0; y<=6.0; y=y+0.5)
    {
        for (x=5.5 ; x<=12.5 ;x=x+0.5)
        {
            i=2+(y+0.5*x);
            printf("%7.2f%7.2f%7.2f\n",x,y,i);
        }
        
    }

}
