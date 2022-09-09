//C program to create, open and close a file.
#include <stdio.h>
int main()
{
    FILE * p;
    p=fopen("new.txt","w");
    if (p!=NULL)
    {
        printf("\nFile is successfully created !!");
    }
    else
        printf("\nFile is not created");
    fclose(p);
}