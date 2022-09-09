#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int indexFirstAlpha(char words[][20], int n);
int main()
{
    int n,i;
    printf("Enter the number of strings : ");
    scanf("%d",&n);
    char words[n][20];
    printf("Enter the strings  : ");
    for (i=0;i<n;i++)
    {
        scanf("\n");
        scanf("%[^\n]s",words[i]);
    }
    printf("index of the string that comes first alphabetically : %d",indexFirstAlpha(words,n));

}
int indexFirstAlpha(char words[][20], int n)
{
    int i=0,index=0;
    char s[20];
    strcpy(s,words[0]);
    for (i=0;i<n;i++)
    {
        if (strcmp(s,words[i])<0)
        {
            strcpy(s,words[i]);
            index=i;
        }
    }
    return index;
}