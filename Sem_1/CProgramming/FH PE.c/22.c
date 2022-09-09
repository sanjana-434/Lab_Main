//to convert the content's character by 1 
//example  :   "sanj" should be converted to "tbok"
#include <stdio.h>
int main()
{
    FILE* p1,*p2;
    char s[20];
    printf("\nEnter the name of the file  : ");
    scanf("%s",s);
    
    p1=fopen(s,"r");
    p2=fopen("f3.txt","w");
    if (p1==NULL)
        printf("\nERROR!! File doesn't exist");
    char ch;
    while(!feof(p1))
    {
        ch=fgetc(p1);
        ch++;
        putc(ch,p2);

    }
    fclose(p1);
    fclose(p2);

    p1=fopen(s,"w");
    p2=fopen("f3.txt","r");
    if (p2==NULL)
        printf("\nERROR!! File doesn't exist ");
    while (!feof(p2))
    {
        ch=fgetc(p2);
        printf("%c",ch);
        putc(ch,p1);
    }
    fclose(p1);
    fclose(p2);

}