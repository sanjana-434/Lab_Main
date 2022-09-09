#include <stdio.h>
#define pi 3.14
int main()
{
    float v_cone ,v_pyramid ,v_cylinder,v_sphere;
    float h,w,l,r;
    printf("Enter the height of cylinder : ");
    scanf("%f",&h);
    printf("\nEnter the radius of cylinder : ");
    scanf("%f",&r);
    v_cylinder = pi *r*2*h;
    printf("\nVolume of the cylinder : %0.2f",v_cylinder);
    printf("\nEnter the radius of the sphere : ");
    scanf("%f",&r);
    v_sphere=(4.0/3)*pi*r*r*r;
    printf("\nVolume of the sphere : %0.2f",v_sphere);
    printf("\nEnter the radius of the cone : ");
    scanf("%f",&r);
    printf("\nEnter the height of the cone : ");
    scanf("%f",&h);
    v_cone=(1.0/3)*pi*r*r*h;
    printf("\nVolume of the cone : %0.2f",v_cone);
    printf("\nEnter the radius of the pyramid : ");
    scanf("%f",&r);
    printf("\nEnter the height of the pyramid : ");
    scanf("%f",&h);
    printf("\nEnter the width of the pyramid : ");
    scanf("%f",&w);
    v_pyramid=(1.0/3)*w*h*r;       
    printf("\nVolume of the pyramid : %0.2f",v_pyramid);
}