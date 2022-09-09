//C program to compare contents of two files.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* p1,* p2;
    p1=fopen("f1.txt","r");
    p2=fopen("f2.txt","r");
    if(p1==NULL || p2==NULL)
    {
        printf("ERROR!! The file doesn't exit");
        exit(0);
    }

    char c1,c2;
    while (1)
    {
        c1=fgetc(p1);
        c2=fgetc(p2);

        if (feof(p1) || feof(p2))
        {
            break;
        }
        if (c1!=c2)
        {
            printf("Both the files are not same ");
            fclose(p1);
            fclose(p2);
            exit(0);
        }
    }
    printf("\nThe files are same ");
    fclose(p1);
    fclose(p2);

}