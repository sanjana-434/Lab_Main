//Write a program in C to read an existing file.
#include <stdio.h>
int main()
{
    FILE* p;
    char s[20];
    printf("\nEnter the name of the file  : ");
    scanf("\n");
    scanf("%[^\n]s",s);
    p=fopen(s,"r");
    char ch;
    printf("\nThe content of the file is  :");
    while(1)
    {
        ch=getc(p);
        if(feof(p))
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(p);
}