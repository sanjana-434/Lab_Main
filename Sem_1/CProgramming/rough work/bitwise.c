#include <stdio.h>
#include <math.h>

int main()
{
    
    int c= 18 & 0xFFFD;
    printf("%d\n",c);

    int a= 18 & (18-2);
    printf("%d\n",a);

    int b= 18 | 0x1;
    printf("%d\n",b);

    int d=18|(18+8);
    printf("%d\n",d);

}
