//C program to convert All Characters in Upper Case of a File using C Program.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE* p1,*p2;
    p1=fopen("f1.txt","r");
    p2=fopen("f2.txt","w");
    if (p1==NULL)
    {
        printf("\nERROR!! File 1 doesn't exist");
    }
    char ch;
    while (1)
    {
        ch=fgetc(p1);
        if (feof(p1))
        {
            break;
        }
        fputc(toupper(ch),p2);

    }
    fclose(p1);
    fclose(p2);
    p1=fopen("f1.txt","w");
    p2=fopen("f2.txt","r");
    if (p2==NULL)
    {
        printf("\nERROR!! File 1 doesn't exist");
    }
    while(1)
    {
        ch=fgetc(p2);
        if (feof(p2))
        {
            break;
        }
        printf("%c",ch);
        fputc(ch,p1);
    }
    fclose(p1);
    fclose(p2);

}