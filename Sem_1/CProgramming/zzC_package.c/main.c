#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <pthread.h>

#include "login.c"
#include "validselection.c"
#include "filename.c"
#include "readfile.c"
#include "result.c"
#include "rank.c"
#include "weekly_report.c"

extern int result[10];
extern char n[20];
extern char r[6];
extern int total;

char code[7];
int d;

void display(int col,int row);
void* exe();
void* timer();
int m2=0,m1=0,s2=0,s1=0; //for timer


void* exe()
{
    system("cls");
    display(0,19);
    printf("\n\t\t\t\t\t\t\t\t\tTotal Time in mm : ss");
    printf("\n\t\t\t\t\t\t\t\t\t=====================");
    printf("\n\t\t\t\t\t\t\t\t\t        03:00");
    sleep(3);
    
    system("cls");
    display(0,20);
    printf("\n\t\t\t\t\t\t\t\t\tAnd your time starts now !!!");
    sleep(5);

    system("cls");
    display(0,20);

    printf("\t\t\t\t\t\t\t\t\t=================\n");
    printf("\t\t\t\t\t\t\t\t\tMCQ Practice Test\n");
    printf("\t\t\t\t\t\t\t\t\t=================\n\n");

    sleep(3);
    system("cls");
    
    int a;
    L1:display(0,18);
    a=login();

    sleep(3);
    system("cls");

    if(a==0)
    {
        display(0,20);
        printf("\n\t\t\t\t\t\t\t\t\tInvalid ID.Please try again!");
        sleep(3);
        system("cls");
        goto L1;
    }

    display(0,20);
    printf("\n\t\t\t\t\t\t\t\t\tValid Identification!\n");

    sleep(3);
    system("cls");

    L2:display(0,12);
    printf("\n\t\t\t\t\t\t\t   SUBJECT LIST (along with code) :");
    printf("\n\t\t\t\t\t\t\t   -------------------------------\n");
    printf("\n\t\t\t\t\t\t\t   1)20XD11-Calculus and its Applications.\n");
    printf("\n\t\t\t\t\t\t\t   2)20XD12-Introductuion for Computational Biology.\n");
    printf("\n\t\t\t\t\t\t\t   3)20XD13-Digital Electronics.\n");
    printf("\n\t\t\t\t\t\t\t   4)20XD14-Problem Solving and C Programming.\n\n");

    printf("\n\t\t\t\t\t\t\t   Enter code  :  ");
    scanf("\n");
    scanf("%[^\n]s",code);

    sleep(3);
    system("cls");

    if (validCode(code)==1)
    {
        display(0,20);
        printf("\n\t\t\t\t\t\t\t\t\t%s is Selected!\n",code);
        sleep(3);
        system("cls");
    }
    else
    {
        display(0,20);
        printf("\n\t\t\t\t\t\t\t\t\tInvalid Code , Enter again ");
        sleep(3);
        system("cls");
        goto L2;
    }


    L3:display(0,13);
    printf("\n\t\t\t\t\t\t\t\tDIFFICULTY LEVEL LIST :");
    printf("\n\t\t\t\t\t\t\t\t-----------------------\n");
    printf("\n\t\t\t\t\t\t\t\t1) Easy.\n");
    printf("\n\t\t\t\t\t\t\t\t2) Medium.\n");
    printf("\n\t\t\t\t\t\t\t\t3) Hard.\n\n");
    printf("\n\t\t\t\t\t\t\t\tEnter the difficulty (1,2,3) : ");
    
    scanf("%d",&d);

    sleep(3);
    system("cls");

    if (validDiff(d)==1)
    {
        display(0,20);
        printf("\n\t\t\t\t\t\t\t\t\tdiffIculty level %d is Selected!\n",d);
        sleep(3);
        system("cls");
    }
    else
    {
        display(0,20);
        printf("\n\t\t\t\t\t\t\t\t\tInvalid level ,Enter again ");
        sleep(3);
        system("cls");
        goto L3;
    }


 
    int fn_index;
    fn_index=filename_function(code,d);
    char filename[12][20]={{"cal_easy.txt"},{"cal_med.txt"},{"cal_hard.txt"},
                        {"bio_easy.txt"},{"bio_med.txt"},{"bio_hard.txt"},
                        {"de_easy.txt"},{"de_med.txt"},{"de_hard.txt"},
                        {"c_easy.txt"},{"c_med.txt"},{"c_hard.txt"}};  

    
    
    readfile(filename[fn_index],d,code);  
    res(n,r,result,code);

    file_report();
    exit(0);
    return NULL; 
        
}


void* timer()
{
    do
    {    
    if (m1==9 && s2==5 && s1==9)
    {
        m2++;
        m1=-1;
    }
    if(s2==5 && s1==9)
    {
        s2=-1;
        m1++;
    }

    if (s1==9)
    {
        s2++;
        s1=-1;
    }
    s1++;
    sleep(1);
    }while (!(m2==0 && m1==2 && s2==0 && s1==0));
    system("cls");
    display(0,20);
    printf("\n\t\t\t\t\t\t\t\t\tOOPS..TIME OVER !!!!");
    sleep(5);
    res(n,r,result,code);
    enterDetails(total,n,r);
    file_report();
    exit(0);
}

int main(void* arg)
{
    char continue_;
    do
    {
        int w=1;
        system("cls");
        display(0,13);
        printf("\n\t\t\t\t\t\t\t\t\tSelect from the choices ");
        printf("\n\t\t\t\t\t\t\t\t\t-----------------------");
        printf("\n\n\t\t\t\t\t\t\t\t\t1) Attend the test ");
        printf("\n\t\t\t\t\t\t\t\t\t2) Generate report based on rank ");
        printf("\n\t\t\t\t\t\t\t\t\t3) Generate weekly report ");
        printf("\n\t\t\t\t\t\t\t\t\t4) Exit");
        printf("\n\n\t\t\t\t\t\t\t\t\tEnter your choice : ");

        scanf("%d",&w);
        sleep(3);

        if (w==1)
        {
            system("cls");
            pthread_t newthread[2];
            pthread_create(&newthread[1], NULL, exe, NULL);
            pthread_create(&newthread[0], NULL, timer , NULL);
            pthread_exit(NULL);
        }
        else if(w==2)
        {
            system("cls");
            l9:display(0,14);
            printf("\n\t\t\t\t\t\t\t\t1) 20XD11-Calculus and its Applications.\n");
            printf("\n\t\t\t\t\t\t\t\t2) 20XD12-Introductuion for Computational Biology.\n");
            printf("\n\t\t\t\t\t\t\t\t3) 20XD13-Digital Electronics.\n");
            printf("\n\t\t\t\t\t\t\t\t4) 20XD14-Problem Solving and C Programming.\n\n");
            printf("\n\t\t\t\t\t\t\t\tEnter the subject code :  ");
            scanf("\n");
            scanf("%s",code);
            sleep(3);

            system("cls");

        if (validCode(code)==1)
        {
            display(0,20);
            printf("\n\t\t\t\t\t\t\t\t\t%s is Selected!\n",code);
            sleep(3);
            system("cls");
        }
        else
        {
            display(0,20);
            printf("\n\t\t\t\t\t\t\t\t\tInvalid level ,Enter again ");
            sleep(3);
            system("cls");
            goto l9;
        }
        rank();
        report();
        }
        else if (w==3)
        {
            system("cls");
            display(55,20);
            weekly_report();
            sleep(3);
        }
        else if(w==4)
        {
            exit(0);
        }
        system("cls");
        display(0,20);
        printf("\n\t\t\t\t\t\t\t\t\tDo you want to continue (y/n) : ");
        scanf("\n");
        scanf("%c",&continue_);
        sleep(3);

    } while (continue_=='y');
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");

}
