#include <stdio.h>
int main()
{
    char s[100];
    int i,f=0;
    printf("\nEnter the noun : ");
    scanf("\n");
    scanf("%[^\n]s",s);
    for (i=0;s[i]!='\0';i++)
        f=i;
    if (s[f]=='y')
    {
        s[f]='i';
        s[f+1]='e';
        s[f+2]='s';
        s[f+3]='\0';
    }
    else if (s[f]=='s' || (s[f]=='h' && s[f-1]=='c') || (s[f]=='h' && s[f-1]=='s'))
    {
        s[f+1]='e';
        s[f+2]='s';
        s[f+3]='\0';
    }
    else
    {
        s[f+1]='s';
        s[f+2]='\0';
    }
    printf("\nPlural form of the noun : %s",s);

}