#include <stdio.h>
#include <ctype.h>
int main()
{
    char ans[20];
    printf("\nState true or false : sun is a star!!\nAns : ");
    scanf("%[^\n]s",ans);
    char a[5]="true";
    int f=0;
    for (int i=0;a[i]!='\0' || ans[i]!='\0';i++)
    {
        if (a[i]!=tolower(ans[i]))
            f=1;
    }
    if (f==1)
        printf("\nWrong\n");
    else   
        printf("\nGood\n");
}