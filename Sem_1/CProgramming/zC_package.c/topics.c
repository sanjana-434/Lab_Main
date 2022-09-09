#include <stdio.h>
#include "result.c"

void topics(char* code,int d)
{
    int i=0;
    //for c_easy
    char c_easy_topic[10][30]={"Introduction to c","Introduction to c","Basics of c","Data Types","Memory and Data Representation","Standard Input and Output",
                "Arrays","Arrays","String Handling","Function"};
    

    //f ==flag
    int f1;
    int f2[10]={1,1,1,1,1,1,1,1,1,1};
    for (i=0;i<10;i++)
    {
        if (strCmp("Correct",res[i])==0)
            f2[i]=0;
    }

    if (strCmp("20XD11",code)==0 && d==1)
        f1=1;
    else if (strCmp("20XD11",code)==0 && d==2)
        f1=2;
    else if (strCmp("20XD11",code)==0 && d==3)
        f1=3;
    else if (strCmp("20XD12",code)==0 && d==1)
        f1=4;
    else if (strCmp("20XD12",code)==0 && d==2)
        f1=5;
    else if (strCmp("20XD12",code)==0 && d==3)
        f1=6;
    else if (strCmp("20XD13",code)==0 && d==1)
        f1=7;
    else if (strCmp("20XD13",code)==0 && d==2)
        f1=8;
    else if (strCmp("20XD13",code)==0 && d==3)
        f1=9;
    else if (strCmp("20XD14",code)==0 && d==1)
        f1=10;
    else if (strCmp("20XD14",code)==0 && d==2)
        f1=11;
    else
        f1=12;

    if (f1==10)
    {
        for (i=0;i<10;i++)
        {
        if (i==0 || i==6)
        {
            if (f2[i]==0 && f2[i+1]==1)
                printf("\n --->  %s",c_easy_topic[i]);
        }
        else 
        {
            if (f2[i]==0)
                printf("\n --->  %s",c_easy_topic[i]);
        }
    }
    }
}

