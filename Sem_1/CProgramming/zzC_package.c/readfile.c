#include <stdio.h>
#include <string.h>

int result[10]={0};

char ans_14_1[10]={'B','D','D','A','D','A','B','B','C','B'};
char ans_14_2[10]={'C','C','B','B','A','D','A','D','D','B'};
char ans_14_3[10]={'C','B','B','C','A','B','D','C','C','C'};
char ans_13_2[10]={'A','D','B','B','D','C','A','A','B','A'};
char ans_13_1[10]={'A','D','C','D','B','A','C','D','A','A'};
char ans_13_3[10]={'B','B','B','B','B','D','C','B','A','D'};
char ans_12_1[10]={'B','A','B','B','C','B','C','A','B','D'};
char ans_12_2[10]={'D','B','D','A','D','A','D','C','C','D'};
char ans_12_3[10]={'C','B','D','A','C','C','B','C','A','A'};
char ans_11_1[10]={'B','B','D','A','A','D','C','A','B','D'};
char ans_11_2[10]={'C',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char ans_11_3[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};

extern int m2,m1,s2,s1;

char ans[10] ={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};

void print_time()
{
    printf("\t\t\t\t\t\t\t\t\t       TIME TAKEN\n\n");
    printf("\t\t\t\t\t\t\t\t\t=======================\n");
    printf("\t\t\t\t\t\t\t\t\t  mm:ss = %d%d : %d%d\n",m2,m1,s2,s1);
    printf("\t\t\t\t\t\t\t\t\t=======================\n"); 
}

int readfile(char fn[],int d,char code[])
{
    FILE* fp;
    fp=fopen(fn,"r");
    if (fp==NULL)
    {
        printf("\nERROR!! File doesnot exist ");
    }
    //printing the questions
    char line[100];
    int i=0;
    int j=0;
    
    display(0,10);
    while (1)
    {
        i++;
        printf("\t\t\t\t\t\t\t");
        fgets(line,100,fp);
        if (feof(fp))
        {
            break;
        }
        puts(line);
        if (i%15==0)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tAnswer  : ");
            scanf("\n");
            scanf("%c",&ans[j]);

            if(d==1 && strcmp(code,"20XD11")==0)
            {
                if (ans_11_1[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==2 && strcmp(code,"20XD11")==0)
            {
                if (ans_11_2[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==3 && strcmp(code,"20XD11")==0)
            {
                if (ans_11_3[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==1 && strcmp(code,"20XD12")==0)
            {
                if (ans_12_1[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==2 && strcmp(code,"20XD12")==0)
            {
                if (ans_12_2[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==3 && strcmp(code,"20XD12")==0)
            {
                if (ans_12_3[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==1 && strcmp(code,"20XD13")==0)
            {
                if (ans_13_1[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==2 && strcmp(code,"20XD13")==0)
            {
                if (ans_13_2[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==3 && strcmp(code,"20XD13")==0)
            {
                if (ans_13_3[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==1 && strcmp(code,"20XD14")==0)
            {
                if (ans_14_1[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==2 && strcmp(code,"20XD14")==0)
            {
                if (ans_14_2[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            else if(d==3 && strcmp(code,"20XD14")==0)
            {
                if (ans_14_3[j]==ans[j])
                {
                    result[j]=1;
                }
            }
            sleep(2);
            system("cls");
            j++;
            display(0,15);
            print_time();
            sleep(5);
            system("cls");
            display(0,10);
        }   
    }
}
