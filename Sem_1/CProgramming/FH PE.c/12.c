//C program to print contents in reverse order of a file 
#include <stdio.h>
int main()
{
    FILE* p;
    p=fopen("new.txt","r");
    if (p==NULL)
        printf("Error !!! file doesn't exist ");

    fseek(p,0,2);
    int n;//len of the file = n
    n=ftell(p);
    char ch;

    do
    {
        n--;
        fseek(p,n,0);
        ch=fgetc(p);
        printf("%c",ch);
    } while (n!=0);
    


}