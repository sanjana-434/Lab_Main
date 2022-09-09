//Write a program in C to encrypt a text file.
#include <stdio.h>
int main()
{
    FILE * p1,*p2;
    p1=fopen("encrypt.txt","r");
    p2=fopen("f5.txt","w");
    if (p1==NULL)
    {
        printf("ERROR!! File doesn't exist");
    }
    char ch;
    while(1)
    {
        ch=fgetc(p1);
        if (ch==EOF)
            break;
        putc(ch+100,p2);
    }
    fclose(p1);
    fclose(p2);
    p1=fopen("encrypt.txt","w");
    p2=fopen("f5.txt","r");
    if (p2==NULL)
    {
        printf("ERROR!! File doesn't exist");
    }
    while (!feof(p2))
    {
        ch=fgetc(p2);
        putc(ch,p1);
    }
    fclose(p1);fclose(p2);
    int n=remove("f5.txt");
    if (n==0)
        printf("\nFile is deleted successfully ");
    else
        printf("\nFile is not deleted");

}