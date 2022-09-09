#include <stdio.h>


extern char ans_14_1[10];
extern char ans_14_2[10];
extern char ans_14_3[10];
extern char ans_13_1[10];
extern char ans_13_2[10];
extern char ans_13_3[10];
extern char ans_12_1[10];
extern char ans_12_2[10];
extern char ans_12_3[10];
extern char ans_11_1[10];
extern char ans_11_2[10];
extern char ans_11_3[10];

extern char ans[10];

extern int m1,m2,s2,s1;

extern int d;

int total=0;

void res(char n[],char r[],int result[],char code[])
{
    system("cls");
    display(0,6);
    printf("\n\t\t\t\t===================================================================================================");
    printf("\n\t\t\t\t\t\t\t\t\t\tRESULT ");
    printf("\n\t\t\t\t===================================================================================================");
    printf("\n\n");
    printf("\n\t\t\t\t\t\t\t\tNAME              :    %s",n);
    printf("\n\t\t\t\t\t\t\t\tROLL NO           :    %s",r);
    printf("\n\t\t\t\t\t\t\t\tSUBJECT CODE      :    %s",code);
    printf("\n\t\t\t\t\t\t\t\tDIFFICULTY LEVEL  :    %d",d);
    printf("\n\n");
    printf("\n\t\t\t\t\t---------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t|    %-12s|     %-15s|     %-15s|       %-13s|","Q.NO","CORRECT ANSWER","YOUR ANSWER","MARK");
    printf("\n\t\t\t\t\t---------------------------------------------------------------------------------");

    for (int i=0;i<10;i++)
    {
        if(d==1 && strcmp(code,"20XD11")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_11_1[i],ans[i],result[i]);
            }
            else if(d==2 && strcmp(code,"20XD11")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_11_2[i],ans[i],result[i]);
            }
            else if(d==3 && strcmp(code,"20XD11")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_11_3[i],ans[i],result[i]);
            }
            else if(d==1 && strcmp(code,"20XD12")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_12_1[i],ans[i],result[i]);
            }
            else if(d==2 && strcmp(code,"20XD12")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_12_2[i],ans[i],result[i]);
            }
            else if(d==3 && strcmp(code,"20XD12")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_12_3[i],ans[i],result[i]);
            }
            else if(d==1 && strcmp(code,"20XD13")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_13_1[i],ans[i],result[i]);
            }
            else if(d==2 && strcmp(code,"20XD13")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_13_2[i],ans[i],result[i]);
            }
            else if(d==3 && strcmp(code,"20XD13")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_13_3[i],ans[i],result[i]);
            }
            else if(d==1 && strcmp(code,"20XD14")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_14_1[i],ans[i],result[i]);
            }
            else if(d==2 && strcmp(code,"20XD14")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_14_2[i],ans[i],result[i]);
            }
            else if(d==3 && strcmp(code,"20XD14")==0)
            {
                printf("\n\t\t\t\t\t|      %-10d|          %-10c|          %-10c|          %-10d|",i+1,ans_14_3[i],ans[i],result[i]);
            } 
    }
    printf("\n\t\t\t\t\t---------------------------------------------------------------------------------");
    
    for (int i=0;i<10;i++)
    {
        total+=result[i];
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t    TOTAL MARKS   :   %d / 10",total);
    if (total>=5)
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\"PASS\"");
    else
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\"FAIL\"");

    printf("\n\n\t\t\t\t\t\t\t\t  TOTAL TIME TAKEN  :   %d%d mins %d%d secs",m2,m1,s2,s1);

    printf("\n\n\n\n\n\n\n\n\n");
}
