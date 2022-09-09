//Write a program in C to create and store information in a text file.
#include <stdio.h>
#define N(s,m) s##m
int  main()
{
    FILE * p;
    char filename[20];
    printf("\nEnter the file name : ");
    scanf("\n");
    scanf("%[^\n]s",filename);
    p=fopen(filename,"w");
    if (p!=NULL)
    {
        printf("\nFile is created successfully !!");
    }
    int n;
    char line[100];
    printf("\nEnter the number of lines to be written : ");
    scanf("%d",&n);
    printf("\nEnter the lines : ");
    for (int i=0;i<n;i++)
    {
        gets(line);
        fputs(line,p);
        fprintf(p,"%c",'\n');
    }
    fclose(p);

}