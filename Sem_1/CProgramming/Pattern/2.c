#include <stdio.h>
#include<windows.h>
int main()
{
    int a=0;
    while (a<10)
    {
        int b=0;
        while (b<=a)
        {
            printf("$  ");
            b++;
        }
        printf("\n");
        system("PAUSE");
        a++;
        
    }
}