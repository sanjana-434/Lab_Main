#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int n;
    if (argc!=3)
    {
        printf("\nInavlid command line argument ");
        exit(0);
    }
    FILE * p;
    p=fopen(argv[1],"r");
    if (p==NULL)
    {
        printf("\nERROR !!!....File doesnot exist");
        exit(0);
    }
    n=atoi(argv[2]);
    printf("%d",n);

    char ch;
    while (1)
    {
        ch=fgetc(p);
        if (ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(p);
    printf("\nSUCCESS !!!!!!");
    printf("%s",argv[0]);
    printf("%s",argv[1]);
    printf("%s",argv[2]);
    int c=3;
    if (n!=100)
    {
        printf("hgrfyijrnjfm");
    }
    
}