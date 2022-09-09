#include <stdio.h>
#include <stdlib.h>
int numLowerCase(char* str);
int main()
{
    char* s;
    s=malloc(50);
    printf("Enter the string : ");
    gets(s);
    printf("\nNumber of lower case characters : %d",numLowerCase(s));
}
int numLowerCase(char* str)
{
    int i,c=0;
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]<=122 && str[i]>=97)
            c++;
    }
    return c;
}