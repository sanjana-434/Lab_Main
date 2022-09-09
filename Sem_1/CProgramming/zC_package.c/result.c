#include <stdio.h>
#include <string.h>

char res[10][10];

void result_final(char* name,char*rollno,char* cr,char*ya)
{
    for (int i=0;i<10;i++)
    {
        if (cr[i]==ya[i])
            strcpy(res[i],"Correct");
        else
            strcpy(res[i],"Wrong");
    }

    printf("\n================================================================================================================");
    printf("\n                                                    RESULT  ");
    printf("\n================================================================================================================\n");

    int i;
    printf("\nName of the student : %s",name);
    printf("\nRoll no : %s\n",rollno);

    printf("\n\n|\t%-20s|\t%-20s|\t%-20s|\t%-20s|\t","Q.NO","Correct Answer","Your Answer","Result");
    
    for (i=0;i<10;i++)
        printf("\n\n|\t%-20d|\t%-20c|\t%-20c|\t%-20s|\t",i+1,cr[i],ya[i],res[i]);
}