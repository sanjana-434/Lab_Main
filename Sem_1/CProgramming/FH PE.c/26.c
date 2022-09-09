//Write a program in C to merge two files and write it in a new file. [using fread and fwrite]
#include <stdio.h>
int main()
{
    FILE* p1,*p2,*p3;
    p1=fopen("c1.txt","r");
    p2=fopen("c2.txt","r");
    p3=fopen("c.txt","w");
    if (p1==NULL || p2==NULL)
        printf("\nError !! The file doesn't exist ");
    
    fseek(p1,0,2);
    fseek(p2,0,2);
    int size1=ftell(p1),size2=ftell(p2);
    char line1[size1];
    char line2[size2];
    rewind(p1);
    rewind(p2);
    while (!feof(p1))
    {
        fread(line1,size1,1,p1);
        fwrite(line1,size1,1,p3);
    }
    fprintf(p3,"%c",'\n');
    while (!feof(p2))
    {
        fread(line2,size2,1,p2);
        fwrite(line2,size2,1,p3);
 
    }
    fclose(p1);
    fclose(p2);
    fclose(p3);


}