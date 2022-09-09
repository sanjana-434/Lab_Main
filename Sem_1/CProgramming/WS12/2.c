#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char* s1;//s1 is original string
    char* s2;//s2 is reverse of s1
    char* s3;//s3 is the string to cmp
    char l;
    s1=malloc(50);
    s2=malloc(50);
    s3=malloc(50);
    printf("\nEnter the string s1 : ");
    gets(s1);
    int len=0,i;
    //len of the string 1
    for (i=0;s1[i]!='\0';i++)
        len++;
    printf("\nThe lenght of the string : %d",len);
    //string copy
    strcpy(s2,s1);
    printf("\nThe string that is copied : %s",strcpy(s2,s1));
    //reversal of string
    for(i=0;i<len/2;i++)
    {
        l=s1[i];
        s1[i]=s1[len-i-1];
        s1[len-i-1]=l;
    }
    printf("\nThe reversed string : %s",s1);
    printf("\nEnter the string to be compared : ");
    gets(s3);
    if (strcmp(s1,s3)>0)
        printf("\nThe %s is greater than %s",s1,s3);
    else if(strcmp(s1,s3)==0)
        printf("\nBoth the strings %s and %s are equal",s1,s3);
    else 
        printf("\nThe %s is lesser than %s",s1,s3);
    
}