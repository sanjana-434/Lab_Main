//Write a program in C to remove a file from the disk
#include <stdio.h>
int main()
{
    char s[20];
    printf("\nEnter the name of the file to br deleted  : ");
    scanf("\n");
    scanf("%[^\n]s",s);
    int n;
    n=remove(s);
    if (n==0)
        printf("File is deleted successfully !");
    else
        printf("File is not deleted !");
}