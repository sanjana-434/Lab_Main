#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    for (int i=31;i>=0;i--)
    {
        printf("%d",((num>>i)&1));
    }
    printf("\n");

    num=num>>4;
    for (int i=31;i>=0;i--)
    {
        printf("%d",((num>>i)&1));
    }
    printf("\n");


}