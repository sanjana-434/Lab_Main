#include <stdio.h>

int main()
{
    int n1 , n2 , n3 , n4;
    printf("Enter the 4 numbers : ");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    int min=n1,max=n1;
    if (n2>max)
        max=n2;
    if (n3>max)
        max=n3;
    if (n4>max)
        max=n4;
    if (n2<min)
        min=n2;
    if (n3<min)
        min=n3;
    if (n4<min)
        min=n4;
    printf("\nThe difference between the maximum and the minimum value : %d",max-min);
}
