#include <stdio.h>

int main()
{
    char s[100];
    int j;
    int a=0,e=0,i=0,o=0,u=0,c=0,words=0;
    printf("Enter the line : ");
    scanf("\n");
    scanf("%[^\n]s",s);
    for (j=0;s[j]!='\0';j++)
    {
        if ((s[j]>=65 && s[j]<=90) || (s[j]<=122 && s[j]>=97))
        {
            if (s[j]=='a' || s[j]=='A')
                a++;
            else if (s[j]=='e' || s[j]=='E')
                e++;
            else if(s[j]=='i' || s[j]=='I')
                i++;
            else if (s[j]=='o' || s[j]=='O')
                o++;
            else if (s[j]=='u' || s[j]=='U')
                u++;
            else
                c++;
        }
        else if (s[j]==' ' || s[j]=='.' || s[j]==',')
            words++;
        if (s[j]>=65 && s[j]<=90)
            s[j]=s[j]+32;
        else if(s[j]<=122 && s[j]>=97)
            s[j]=s[j]-32;
    }
    printf("\nNumber of vowels : ");
    printf("\na   e   i   o   u");
    printf("\n%d   %d   %d   %d   %d",a,e,i,o,u);
    printf("\nNumber of consonants : %d",c);
    printf("\nNumber of words  : %d",words);
    printf("\nAfter flipping the cases: %s\n",s);

}