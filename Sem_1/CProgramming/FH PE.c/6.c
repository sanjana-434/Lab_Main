//fgets and fputs and fseek,frewind,ftell

#include <stdio.h>
int main()
{
    FILE* p;
    p=fopen("rough2.txt","a+");
    if (p==NULL)
    {
        printf("ERROR!!");
    }
    fseek(p,0,2);
    int n=ftell(p);
    printf("\nlen : %d\n",n);

    char s[20];
    rewind(p);
    printf("\n=================\n");
    fgets(s,100,p);
    printf("%s",s);

    printf("\n=================\n");
    fseek(p,15,1);
    fgets(s,100,p);
    printf("%s",s);

    printf("\n=================\n");
    fseek(p,-10,2);
    fgets(s,100,p);
    printf("%s",s);


    fseek(p,-20,2);
    fputs("0000000000",p);
    

    printf("\n=================\n");
    rewind(p);
    fread(s,70,1,p);
    printf("%s",s);
    fclose(p);

}