//Write a program in C to merge two files and write it in a new file. [using fgets and fputs]
#include <stdio.h>
int main()
{
    FILE* p1,*p2,*p3;
    p1=fopen("c1.txt","r");
    p2=fopen("c2.txt","r");
    p3=fopen("c.txt","w");
    if (p1==NULL || p2==NULL)
        printf("\nError !! The file doesn't exist ");
    
    char line[100];
    while (!feof(p1))
    {
        fgets(line,100,p1);
        fputs(line,p3);
    }
    fprintf(p3,"%c",'\n');
    while (1)
    {
        fgets(line,100,p2);
        if (feof(p2))
        {
            break;
        }
        fputs(line,p3);
 
    }
    fclose(p1);
    fclose(p2);
    fclose(p3);


}