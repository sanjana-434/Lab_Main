#include <stdio.h>

    char ans_14_1[10]={'B','D','D','A','D','A','B','B','C','B'};
    char ans_14_2[10]={'C','C','B','B','A','D','A','D','D','B'};
    char ans_14_3[10]={'B','B','C','D','B','A','D','A','D','C'};
    char ans_13_1[10]={};
    char ans_13_2[10]={};
    char ans_13_3[10]={};
    char ans_12_1[10]={};
    char ans_12_2[10]={};
    char ans_12_3[10]={};
    char ans_11_1[10]={};
    char ans_11_2[10]={};
    char ans_11_3[10]={};

    char users_ans[10];

    int f=0;

void ans(int d,char* code)
{
    int i;
    printf("\nEnter the answers : ");
    for (i=0;i<10;i++)
    {
        printf("\n%d   :  ",i+1);
        scanf("%*c%c",&users_ans[i]);
    }

    for (i=0;i<10;i++)
    {
        if (strCmp(code,"20XD11")==0)
        {
            if(d==1)
            {
                if (ans_11_1[i]==users_ans[i])
                    f=1;
            }
            else if(d==2)
            {
                if (ans_11_2[i]==users_ans[i])
                    f=2;
            }
            else
            {
                if (ans_11_3[i]==users_ans[i])
                    f=3;
            }
        }
        else if (strCmp(code,"20XD12")==0)
        {
            if(d==1)
            {
                if (ans_12_1[i]==users_ans[i])
                    f=4;
            }
            else if(d==2)
            {
                if (ans_12_2[i]==users_ans[i])
                    f=5;
            }
            else
            {
                if (ans_12_3[i]==users_ans[i])
                    f=6;
            }
        }
        else if (strCmp(code,"20XD13")==0)
        {
            if(d==1)
            {
                if (ans_13_1[i]==users_ans[i])
                    f=7;
            }
            else if(d==2)
            {
                if (ans_13_2[i]==users_ans[i])
                    f=8;
            }
            else
            {
                if (ans_13_3[i]==users_ans[i])
                    f=9;
            }
        }
        else
        {
            if(d==1)
            {
                if (ans_14_1[i]==users_ans[i])
                    f=10;
            }
            else if(d==2)
            {
                if (ans_14_2[i]==users_ans[i])
                    f=11;
            }
            else
            {
                if (ans_14_3[i]==users_ans[i])
                    f=12;
            }
        }
    }
}
char* cor_ans()
{
    if (f==1)
        return ans_11_1;
    else if ( f==2)
        return ans_11_2;
    else if ( f==3)
        return ans_11_3;
    else if ( f==4)
        return ans_12_1;
    else if ( f==5)
        return ans_12_2;
    else if ( f==6)
        return ans_12_3;
    else if ( f==7)
        return ans_13_1;
    else if ( f==8)
        return ans_13_2;
    else if ( f==9)
        return ans_13_3;
    else if ( f==10)
        return ans_14_1;
    else if ( f==11)
        return ans_14_2;
    else if ( f==12)
        return ans_14_3;
}

