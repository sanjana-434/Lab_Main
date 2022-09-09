#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of persons : ");
    scanf("%d",&n);
    char s[n][100];
    int m[n],max=0,f=0;
    
    for (i=0;i<n;i++)
    {
        printf("\nEnter the person's name %d : ",i+1);
        scanf("\n");
        scanf("%[^\n]s",s[i]);
        printf("Enter the score %d : ",i+1);
        scanf("%d",&m[i]);
        if (max<m[i])
        {
            max=m[i];
            f=i;
        }
    }
    printf("\nThe winner is : %s",s[f]);
    printf("\nWinner's score : %d",max);
}