/*18.	Write a program that asks the user for an angle, entered in radians. The programshould then display the sine, cosine,
 and tangent of the angle. (Use the sin, cos, andtan library functions to determine these values.) The output should be displayed 
 inﬁxed-point notation, rounded to four decimal places of precision.*/
 #include <stdio.h>
 #include <math.h>
 int main()
 {
     float radian;
     printf("Enter the angle in radian : ");
     scanf("%f",&radian);
     printf("\nsin(%0.3f) : %0.3f",radian,sin(radian));
     printf("\ncos(%0.3f) : %0.3f",radian,cos(radian));
     printf("\ntan(%0.3f) : %0.3f\n",radian,tan(radian));

 }