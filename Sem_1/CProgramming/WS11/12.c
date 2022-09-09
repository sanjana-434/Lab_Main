#include <stdio.h>
int main()
{
    char s[100];
    int i,j;
    printf("Enter the string : ");
    scanf("\n");
    scanf("%[^\n]s",s);
    // i)
    for (i=0;s[i]!='\0';i++)
    {
        if (s[i]==' ' && s[i+1]==' ')
        {
            for (j=i;s[j]!='\0';j++)
            {
                s[j]=s[j+1];
            }
            i--;
        }
    }
    printf("\nstring after squeezing all continues blanks into one : ");
    printf("\n%s",s);
    for (i=0;s[i]!='\0';i++)
    {
        if (s[i]==' ')
        {
            for (j=i;s[j]!='\0';j++)
            {
                s[j]=s[j+1];
            }
        }
    }
    printf("\nstring with all blanks removed : ");
    printf("\n%s",s);

}