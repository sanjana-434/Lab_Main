//C program to write text (characters) into file and print.
#include <stdio.h>
int main()
{
    FILE* p;
    p=fopen("new.txt","w+");
    printf("\nEnter the number of characters to be written in the file   : " );
    int n,i;
    char ch;
    scanf("%d",&n);
    printf("Enter the characters to be written : ");
    for(i=0;i<n;i++)
    {
        scanf("%c",&ch);
        fputc(ch,p);
    }
    rewind(p);
    while(1)
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