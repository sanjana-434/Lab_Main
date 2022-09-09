#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int r,i,j;
    printf("\nEnter the number of rows : ");
    scanf("%d",&r);
    char str[100];
    printf("\nEnter the string : ");
    scanf("\n");
    scanf("%s",str);
    int num;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    char n[20];
    itoa(num,n,10);
    int c=strlen(n);
    char arr[r][c];

    int index=0;
    for (i=0;i<c;i++)
    {
        for (j=0;j<r;j++)
        {
            arr[j][i]=str[index++];
        }
    }
    /*
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    int f[c];
    int cpy=num;
    for (i=c-1;cpy!=0;i--)
    {
        f[i]=cpy%10;
        cpy/=10;
        printf("\n%d",f[i]);
    }



}