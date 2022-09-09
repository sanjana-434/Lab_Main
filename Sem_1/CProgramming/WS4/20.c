#include <stdio.h>

int main()
{
    float x1, x2 ,y1, y2, x_mid, y_mid, m1, m2,  y_intercept;
    printf("\nEnter the value of x1 and y1 : ");
    scanf("%f%f",&x1,&y1);
    printf("\nEnter the value of x2 and y2 : ");
    scanf("%f%f",&x2,&y2);
    m1=(y2-y1)/(x2-x1);
    x_mid=(x1+x2)/2;
    y_mid = (y1+y2)/2;
    m2 = -1/m1;
    y_intercept = y_mid - (m2*x_mid);
    printf("\nOriginal points : ");
    printf("(%0.2f,%0.2f)  ,(%0.2f,%0.2f) ",x1,y1,x2,y2);
    if (y_intercept>=0){
        printf("\nThe line equation of the perpendicular bisector : y= %0.2fx+%0.2f\n",m2,y_intercept);
    }else{
        printf("\nThe line equation of the perpendicular bisector : y= %0.2fx%0.2f\n",m2,y_intercept);
    }


}