/*•	Display the number 34.789 in a field of nine spaces with two decimal placesof precision.
•	Display the number 7.0 in a field of five spaces with three decimal places of precision.The decimal point 
and any trailing zeroes should be displayed.
•	Display the number 5.789e+12 in fixed point notation.
•	Display the number 67 left justiﬁed in a field of seven spaces.
*/
#include <stdio.h>
int main()
{
    printf("%14.2f\n",34.789);
    printf("%10.3f\n",7.0);
    printf("%f\n",5.789e+12);
    printf("%9d\n",67);
}