#include <stdio.h>
#include <string.h>
int main()
{
    FILE* p;
    p=fopen("f1.txt","r");
    while (p==NULL)
        printf("\nERROR !!! ");

    int c=0;
    char s1[50];
    while (!(feof(p)))
    {
        fscanf(p,"%s",s1);
        if (strcmp(s1,"vacation")==0)
            c++;
    }
    printf("\nThe number of times vacation occurs in the file : %d",c);
    fclose(p);
}