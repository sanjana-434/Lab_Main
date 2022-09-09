#include <stdio.h>
int sumDigits(int n);
int main()
{
    int n;
    printf("\nEnter the digit : ");
    scanf("%d",&n);
    printf("\nSum of the digits : %d",sumDigits(n));

}
int sumDigits(int n)
{
    int s=0;
    while (n!=0)
    {
        s+=n%10;
        n=n/10;
    }
    return s;
}