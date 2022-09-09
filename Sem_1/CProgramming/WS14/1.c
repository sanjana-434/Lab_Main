#include <stdio.h>
int numDivision(int n);
int main()
{
    int n;
    printf("Enter a positive integer  : ");
    scanf("%d",&n);
    printf("\nNumber of factors of %d : %d " ,n,numDivision(n));

}
int numDivision(int n)
{
    int i,c=0;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
            c++;
    }
    return c;
}
