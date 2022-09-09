#include <stdio.h>
#include <ctype.h>
void fxn(char *str);
int main()
{
    char s[50]="i am sanjana .i am a good girl\0";
    fxn(s);
    printf("%s",s);
}
void fxn(const char *str)
{
    int i=0;
    for (;str[i]!='\0';)
    {
        *str=toupper(*str);
        str++;
    }
}