#include <stdio.h>
int main()
{
    char str[100];
    char input(char s[],int code[]);
    int code[26]={3,4,9,21,6,7,1,22,13,15,10,18,25,24,16,8,5,14,23,17,19,2,12,20,11};
    puts("The ouput : ");
    puts(input(str,code));

}
char input(char s[],int code[])
{
    int x=0;
    while (scanf("%d",&s[x])!='\n')
    {
        if (s[x]<=97 && s[x]<=122)
            s[x++]=(char)(97+code[s[x]-97]);
    }
    return s;
}