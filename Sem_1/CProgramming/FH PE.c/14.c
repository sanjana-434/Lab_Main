#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * p;
    p=fopen("rough.txt","r");
    if (p==NULL)
    {
        printf("\nERROR!! file doesn't exist");
        exit(0);
    }
    int offset;
    int whence;
    printf("\nEnter the offset : ");
    scanf("%d",&offset);
    printf("\nEnter the whence [0,1,2] : ");
    scanf("%d",&whence);
    if (whence!=0 && whence!=1 && whence!=2 )
    {
        printf("\nINVALID WHENCE!!! ");
        exit(0);
    }
    fseek(p,offset,whence);
    char ch;
    while (1)
    {
        ch=fgetc(p);
        if (feof(p))
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(p);
}