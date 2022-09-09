#include <stdio.h>
int max(int*c,int*d);
int main()
{
    int a,b;
    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    printf("\nMaximum of %d and %d : %d",a,b,max(&a,&b));

}
int max(int*c,int*d)
{
    int m=*c;
    if (m<*d)
        m=*d;
    return m;
}