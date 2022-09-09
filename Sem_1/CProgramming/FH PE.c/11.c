//C program to print given number of lines of a file (like head command in Linux).
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    FILE* p;
    p=fopen("new.txt","r");
    if (argc!=2)
    {
        printf("ERROR!! in the command line argument ");
    }
    if (p==NULL)
    {
        printf("\nERROR!! The file doesn't exist ");
    }
    char s[100];
    int n=2;
    n=atoi(argv[1]);
    for(int i=0;i<n;i++)
    {
        fgets(s,100,p);
        puts(s);
    }
    fclose(p);


}