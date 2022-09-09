//use of fscanf and fprintf

#include <stdio.h>
int main()
{
    FILE * p;
    p=fopen("rough.txt","w");
    
    int n;
    int no;
    int i;
    char name[20];
    int mark;
    printf("\nEnter the number of records : ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d%s%d",&no,name,&mark);
        fprintf(p,"%d %s %d\n",no,name,mark);
    }
    fclose(p);
    p=fopen("rough.txt","r");
    if (p==NULL)
        printf("\nError !!!");
    
    printf("\n======================================================================================");
    for (i=0;i<n;i++)
    {
        fscanf(p,"%d%s%d",&no,name,&mark);
        printf("\n%-5d %-20s %-5d",no,name,mark);
    }
    fclose(p);
    
}