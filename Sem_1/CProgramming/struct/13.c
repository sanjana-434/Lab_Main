#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;    //n =choice
int len=2;   //len of the struct array
extern float max,min;


typedef struct 
{
    char ID[7];
    char name[25];
    char sex;
    float quiz1Score;
    float quiz2Score;
    float midtermScore;
    float finalScore;
    float totalScore;
}students;


void read(students* x);
void f1(students* x);
void f3(students* x);
void f4(students* x);
void f6(students* x);
void f7(students* x);
int f8(students* x,char* id);


int main()
{
    students *s;
    int i;
    s=malloc(len*sizeof(students));

    for (i=0;i<len;i++)
    {
        printf("\nEnter the details of student %d\n" ,i+1);
        read(s+i);
    }

    do 
    {

        printf("\n============================================================================================================== ");
        printf("\n                                                     Menu    ");
        printf("\n==============================================================================================================");
        printf("\n1. Add student records");
        printf("\n2. Delete student records");
        printf("\n3. Update student records");
        printf("\n4. View all student records");
        printf("\n5. Calculate an average of a selected student's scores");
        printf("\n6. Show student who gets the max total score");
        printf("\n7. Show student who gets the min total score");
        printf("\n8. Find student by ID");
        printf("\n9. Sort records by total scores");
        printf("\n10. Exit");

        printf("\nEnter your choice  : ");
        scanf("%d",&n);

    if (n==1)
    {
        len++;
        s=realloc(s,(len*sizeof(students)));
        f1(&s[len-1]);
    }

    else if (n==2)
    {
        int f=0;
        char nameStudents[25];
        printf("\nEnter the name of the student's record to be deleted  : ");
        scanf("%*c%[^\n]s",nameStudents);
        for (i=0;i<len;i++)
        {
            if (strcmp(s[i].name,nameStudents)==0)
            {
                f=1;
                s[i]=s[i+1];
            }
        }
        if (f==1)
        {
            printf("\nRecord is deleted successfully " ); 
            len--;
        }
        else
            printf("\nRecord not found");
    }

    else if (n==3)
    {
        char nameStudents[25];
        int f=0;
        printf("\nEnter the name of the student's record to be updated  : ");
        scanf("%*c%[^\n]s",nameStudents);
        for (i=0;i<len;i++)
        {
            if (strcmp(s[i].name,nameStudents)==0)
            {
                printf("\nEnter the details of student ""%s"" to be updated  : ",nameStudents);
                f3(s+i);
                f=1;
            }
        }
        if (f==0)
            printf("\nRecord not found");
        else
            printf("\nRecord is not found");
    }

    else if (n==4)
    {
        printf("\nDisplaying the records of all the students  : \n");
        for (i=0;i<len;i++)
        {
            printf("\nStudent  %d \n",i+1);
            f4(s+i);
        }
    }

    else if (n==6)
    {
        for (i=0;i<len;i++)
            f6(s+i);
        printf("\nTopper's details  : \n");
        for (i=0;i<len;i++)
        {
            if (s[i].totalScore == max)
                f4(s+i);
        }
    }

    else if (n==7)
    {
        for (i=0;i<len;i++)
            f7(s+i);
        printf("\nLeast performer's details  : \n");
        for (i=0;i<len;i++)
        {
            if (s[i].totalScore == min)
                f4(s+i);
        }
    }

    else if (n==8)
    {
        char id[7];
        printf("\nEnter the student's id to be searched  :  ");
        scanf("%*c%[^\n]s",id);
        int f=0;
        for(i=0;i<len;i++)
        {
            f=f8(s+i,id);
        }
        if (f==1)
            printf("\nStudent is found");
        else
            printf("\nStudent is not found");
    }

    else if(n==9)
    {
        students y;
        for (i=0;i<len-1;i++)
        {
            if (s[i].totalScore>s[i+1].totalScore)
            {
                y=s[i];
                s[i]=s[i+1];
                s[i+1]=s[i];
                i=-1;
            }
        }
        printf("\nThe records are sorted successfully !!!!");
    }

    else
        exit(0);

    }while(n!=10);

    printf("\n\n======================================================EXIT================================================================================");
}

void read(students* x)
{
    printf("\nID            : ");
    scanf("\n");
    scanf("%[^\n]s",x->ID);
    printf("\nName          : ");
    scanf("%*c%[^\n]s",x->name);
    printf("\nSex           : ");
    scanf("%*c%c",&x->sex);
    printf("\nQuiz 1 score  : ");
    scanf("%f",&x->quiz1Score);
    printf("\nQuiz 2 score  : ");
    scanf("%f",&x->quiz2Score);
    printf("\nMidterm score : ");
    scanf("%f",&x->midtermScore);
    printf("\nFinal score   : ");
    scanf("%f",&x->finalScore);
    x->totalScore=x->quiz1Score+x->quiz2Score+x->midtermScore+x->finalScore;
}

void f1(students* x)
{
    printf("\nEnter the details of the student %d  ",len);
    read(x);
}

void f3(students* x)
{
    read(x);
}

void f4(students* x)
{
    printf("\nID            :   %s",x->ID);
    printf("\nName          :   %s",x->name);
    printf("\nSex           :   %c",x->sex);
    printf("\nQuiz 1 score  :   %0.3f",x->quiz1Score);
    printf("\nQuiz 2 score  :   %0.3f",x->quiz2Score);
    printf("\nMidterm score :   %0.3f",x->midtermScore);
    printf("\nFinal score   :   %0.3f",x->finalScore);
    printf("\nTotal score   :   %0.3f\n",x->totalScore);
}

float max=0;
void f6(students* x)
{
    if (max<x->totalScore)
        max=x->totalScore;
}


float min=500;
void f7(students* x)
{
    if (min>x->totalScore)
        min=x->totalScore;
}

int f8(students* x,char* id)
{
    if(strcmp(id,x->ID)==0)
        return 1;
    else
        return 0;
}

