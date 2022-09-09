#include <stdio.h>
#include "login.c"
#include "validselection.c"
#include "filename.c"
#include "answers.c"
#include "result.c"
#include "topics.c"

FILE *fp;

int main ()
{
    printf("\t\t\t\t\t\t\t\t\t=================\n");
    printf("\t\t\t\t\t\t\t\t\tMCQ Practice Test\n");
    printf("\t\t\t\t\t\t\t\t\t=================\n\n");
    
    int a;
    L1:a=login();
    if(a==0){
        printf("\nInvalid ID.Please try again!");
        goto L1;
    }

    printf("\nValid Identification!\n");
    printf("\nSubject list(along with code):");
    printf("\n-----------------------------\n");
    printf("\n1)20XD11-Calculus and its Applications.");
    printf("\n2)20XD12-Introductuion for Computational Biology.");
    printf("\n3)20XD13-Digital Electronics.");
    printf("\n4)20XD14-Problem Solving and C Programming.\n");

    L2:printf("\nEnter code:");
    char code[7];
    scanf("\n");
    scanf("%[^\n]s",code);
    if (validCode(code)==1)
        printf("\n%s is Selected!\n",code);
    else
    {
        printf("\nInvalid Code , Enter again ");
        goto L2;
    }

    printf("\nDifficulty list:");
    printf("\n----------------\n");
    printf("\n1) Easy.");
    printf("\n2) Medium.");
    printf("\n3) Hard.\n");
    L3:printf("\nEnter the difficulty (1,2,3) :");
    int d;
    scanf("%d",&d);
    if (validDiff(d)==1)
        printf("\ndiffuculty level %d is Selected!\n",d);
    else
    {
        printf("\nInvalid level ,Enter again ");
        goto L3;
    }
    
    //file name
    char fn[12][20]={{"easy_cal.txt"},{"medium_cal.txt"},{"diff_cal.txt"},
                        {"easy_bio.txt"},{"medium_bio.txt"},{"diff_bio.txt"},
                        {"easy_de.txt"},{"medium_de.txt"},{"diff_de.txt"},
                        {"easy_c.txt"},{"medium_c.txt"},{"diff_c.txt"}};
    

    printf("\n\n----------------------------------------------------------------------------------------------------------------------------\n");
    fp=fopen(fn[filename(code,d)],"r");
    char s;
    int count=0;
    while (!feof(fp))
    {
        s=fgetc(fp);
        printf("%c",s);
    }
    fclose(fp);

    ans(d,code);

    result_final(n,r,cor_ans(),users_ans);

    //Topics needed to be improved
    printf("\nTopics needed to be improved : ");
    printf("\n---------------------------");
    topics(code,d);
    return 0;
}

