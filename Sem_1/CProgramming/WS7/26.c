#include <stdio.h>

int main()
{
    float mark;
    printf("Enter the marks : ");
    scanf("%f",&mark);
    if (mark<50)
        printf("\nF\n");
    else if (mark<60)
        printf("\nC\n");
    else if (mark<70)
        printf("\nB\n");
    else if (mark<80)
        printf("\nB+\n");
    else if (mark<90)
        printf("\nA\n");
    else
        printf("\nA+\n");

}