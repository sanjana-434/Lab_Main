#include <stdio.h>
int main()
{
    int max , n1,n2,n3;
    printf("Enter the value of number 1 : ");
    scanf("%d",&n1);
    printf("\nEnter the value of number 2 : ");
    scanf("%d",&n2);
    printf("\nEnter the value of number 3 : ");
    scanf("%d",&n3);
    if(n2>n1 && n2>n3)
    {
        max=n2;
    }
    else if(n3>n1 && n3>n2)
    {
        max=n3;
    }
    else
    {
        max=n1;
    }
    printf("\nThe maximum value among the three numbers is : %d\n",max);

}