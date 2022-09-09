#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the number of strings : ");
    int n;
    scanf("%d",&n);
    char s[n][100];
    char l[100];
    int i,j,f;
    int age[n];
    for (i=0;i<n;i++)
    {
        printf("\nEnter the string %d : ",i+1);
        scanf("\n");
        scanf("%[^\n]s",s[i]);
        printf("\nAge : ");

        scanf("%d",&age[i]);
    }
    for (i=0;i<n-1;i++)
    {
        if (strcmp(s[i],s[i+1])>0)
        {
            f=age[i];
            age[i]=age[i+1];
            age[i+1]=f;
            strcpy(l,s[i]);
            strcpy(s[i],s[i+1]);
            strcpy(s[i+1],l);
            i=-1;
        }
    }
    printf("\nThe strings in ascending order : ");
    for (i=0;i<n;i++)
    {
        printf("\n%s  :  %d",s[i] , age[i]);
    }
}