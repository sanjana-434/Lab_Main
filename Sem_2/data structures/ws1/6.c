#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    int len_ans=0;
    printf("\nEnter the number of array elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array elements  : ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int str[n][10];
    for(i=0;i<n;i++)
    {
        itoa(arr[i],str[i],10);
    }
    char temp[10];
    for (i=0;i<n-1;i++)
    {
        if (strcmp(str[i],str[i+1])<0)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[i+1]);
            strcpy(str[i+1],temp);
            i=-1;
        }
    }
    for (i=0;i<n;i++)
    {
        len_ans+=strlen(str[i]);
    }

    char *answer = malloc((sizeof(char)*len_ans));
    for (i=0;i<n;i++)
    {
        strcat(answer,str[i]);
    }
    printf("\nAnswer  : %s",answer);
    
}