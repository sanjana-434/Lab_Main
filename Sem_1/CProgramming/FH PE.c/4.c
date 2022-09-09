//Use command line argument    [a.exe  rough.txt  3]
//File handling
#include <stdlib.h>
#include <stdio.h>

int  main(int argc,char argv[][20])
{
    printf("%d",argc);
    printf(" %s",argv[1]);
    printf(" %s",argv[1]);
    printf(" %s",argv[1]);
    FILE * p;
    if (argc!=3)
    {
        exit(0);
    }
    if (p==NULL)
    {
        printf("ERROR!!");
    }
    p=fopen(argv[1],"r");
    char ch;
    while(1)
    {
        ch=getc(p);
        if (ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
}