#include <stdio.h>
#include <stdlib.h>


extern int total;
extern char n[20];
extern char r[6];
extern char code[7];

typedef struct 
{
    char name[20];
    char roll_no[7];
    int tot_marks;
    char code[7];     
}subject;

void report();
void rank();
void file_report();

subject s[100];

int q;

void file_report()
{
    FILE* fp;
    fp=fopen("file_report.txt","a");
    fprintf(fp,"%s %s %d %s\n",code,r,total,n);
    fclose(fp);
}

void rank()
{
    subject temp;

    q=0;
    FILE* p;
    p=fopen("file_report.txt","r");
    rewind(p);
    if (p==NULL)
    {
        printf("\nERROR !!!");
    }
    while (1)
    {
        fscanf(p,"%s %s %d %[^\n]s",s[q].code,s[q].roll_no,&s[q].tot_marks,s[q].name);
        if (feof(p))
        {
            break;
        }
        q++;
    }

    for (int j=0;j<q;j++)
    {
        if (s[j].tot_marks < s[j+1].tot_marks)
        {
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
            j=-1;
        }
    }
}

void report()
{
    system("cls");
    display(0,8);
    printf("\n\t\t\t\t===================================================================================================");
    printf("\n\t\t\t\t\t\t\t\t\t\tREPORT ");
    printf("\n\t\t\t\t===================================================================================================");
    printf("\n\n");
    
    printf("\n\t\t\t\t\t---------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t|    %-12s|     %-15s|     %-15s|     %-15s|","RANK","NAME","ROLL NO","TOTAL MARKS");
    printf("\n\t\t\t\t\t---------------------------------------------------------------------------------");

    int i=1;
    for (int j=0;j<q;j++)
    {
        if(strcmp(code,s[j].code)==0)
        {
            printf("\n\t\t\t\t\t|    %-12d|     %-15s|     %-15s|     %-15d|",i,s[j].name,s[j].roll_no,s[j].tot_marks);
            i++;
        }
    }
    printf("\n\t\t\t\t\t---------------------------------------------------------------------------------");

    sleep(10);
}



