//C program to find number of lines in a file.
#include <stdio.h>
int main()
{
    FILE * p;
    p=fopen("rough.txt","r");
    if (p==NULL)
    {
        printf("ERROR!!  File doesn't exist ");
    }

    int c=0;
    char s[100];
    while (1)
    {
        fgets(s,100,p);
        if (feof(p))
        {
            break;
        }
        c++;
    }
    printf("The number of lines : %d",c);

    fclose(p);
}