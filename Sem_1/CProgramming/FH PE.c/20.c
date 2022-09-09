//Write a program in C to Find the Number of Lines in a Text File.
#include <stdio.h>
int main()
{
    FILE * p;
    int count=1;
    p=fopen("rough.txt","r");
    if (p==NULL)
    {
        printf("\nERROR!! File doesnot exist");
    }
    char ch;
    fseek(p,0,2);
    int size=ftell(p);
    rewind(p);
    for (int i=0;i<size;i++)
    {
        ch=getc(p);
        if (feof(p))
        {
            break;
        }
        if (ch=='\n')
        {
            count++;
        }
    }
    printf("\nThe number of lines in the file is  :  %d" ,count);


}