#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    char id[7];
    char name[20];
    char sex;
    float quiz1,quiz2;
    float mtScore;
    float fScore;
    float totScore;
}students;

float max=0;
float min=0;
void read(students* x);
void f1(students* x);
void f2(students* x);
void f3(students* x);
void f4(students* x);
void f5(students* x);
int l=3;
static int k;
int main()
{
    students* s;
    int i;
    s=malloc(l*sizeof(students));
    for (i=0;i<l;i++)
        read(&s[i]);
    int f;
    do 
    {
        printf("\n======================================================================================================================= ");
        printf("\n                                                      MENU                     ");
        printf("\n======================================================================================================================= ");
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
        printf("\nEnter the operation to be performed : ");
        scanf("%d",&f);
        if (f==1)
            f1(s);
        else if (f==2)
            f2(s);
        else if (f==3)
        {
            for (i=0;i<l;i++)
            {
                f3(&s[i]);
            }
        }
        else if (f==4)
        {
        printf("\n==================================================================================================================================");
        printf("\n                                                   DETAILS OF THE STUDENTS");
        printf("\n==================================================================================================================================");
        printf("\n%-20s|%-20s|%-20s|%-15s|%-15s|%-15s|%-15s|%-15s\n","ID","NAME","SEX","QUIZ 1","QUIZ 2","MIDTERM SCORE","FINAL SCORE","TOTAL SCORE");
            for (i=0;i<l;i++)
            {
                f4(&s[i]);
            }
        }
        else if (f==5)
        {
            for (i=0;i<l;i++)
            {
                f5(&s[i]);
            }
        }
        else if (f==6)
        {
            for (i=0;i<l;i++)
            {
                max=f6(&s[i]);
            }
            printf("\n%-20s|%-20s|%-20s|%-15s|%-15s|%-15s|%-15s|%-15s\n","ID","NAME","SEX","QUIZ 1","QUIZ 2","MIDTERM SCORE","FINAL SCORE","TOTAL SCORE");
            for(i=0;i<l;i++)
            {
                if (max==s[i].totScore)
                {
                    f4(&s[i]);
                }
            }
        }
        else if (f==7)
        {
            for (i=0;i<l;i++)
            {
                min=f7(&s[i]);
            }
            printf("\n%-20s|%-20s|%-20s|%-15s|%-15s|%-15s|%-15s|%-15s\n","ID","NAME","SEX","QUIZ 1","QUIZ 2","MIDTERM SCORE","FINAL SCORE","TOTAL SCORE");
            for(i=0;i<l;i++)
            {
                if (min==s[i].totScore)
                {
                    f4(&s[i]);
                }
            }
        }
        else if (f==8)
        {
            for (i=0;i<l;i++)
            { 
                printf("\n%-20s|%-20s|%-20s|%-15s|%-15s|%-15s|%-15s|%-15s\n","ID","NAME","SEX","QUIZ 1","QUIZ 2","MIDTERM SCORE","FINAL SCORE","TOTAL SCORE");
                f8(&s[i]);
            }
            if (i==l)
                printf("\nID not found !");

        }
        else if (f==9)
            f9(s);

    }while (f!=10);
}
void read(students* x)
{
    k++;
    printf("\nEnter the details of the student %d : ",k);
    printf("\nID : ");
    scanf("\n");
    scanf("%[^\n]s",x->id);
    printf("\nName : ");
    scanf("\n");
    scanf("%[^\n]s",x->name);
    printf("\nSex : ");
    scanf("%*c%c",&x->sex);
    printf("\nQuiz 1 : ");
    scanf("%f",&x->quiz1);
    printf("\nQuiz 2 : ");
    scanf("%f",&x->quiz2);
    printf("\nMid term score : ");
    scanf("%f",&x->mtScore);
    printf("\nFinal score : ");
    scanf("%f",&x->fScore);
    x->totScore=x->quiz1+x->quiz2+x->mtScore+x->fScore;
}
void f1(students* x)
{
    l++;
    realloc(x,(l)*sizeof(students));
    read(&x[l-1]);
}
void f2(students* x)
{
    l--;
    k--;
    realloc(x,(l)*sizeof(students));
}
void f4(students* x)
{
    printf("\n%-20s|%-20s|%-20c|%-15.3f|%-15.3f|%-15.3f|%-15.3f|%-15.3f",x->id,x->name,x->sex,x->quiz1,x->quiz2,x->mtScore,x->fScore,x->totScore);  
}
void f3(students* x)
{
    printf("\nEnter the name of the student to be updated : ");
    char n[30];
    scanf("\n");
    scanf("%[^\n]s",n);
    if (strcmp(n,x->name)==0)
    {
        printf("\nUPDATE  :");
        read(x);
    }
    
}
void f5(students* x)
{
    float avg=0;
    printf("\nThe average total score of students :  ");
    for (int i=0;i<l;i++)
    {
        avg=avg+x->totScore;
    }
    avg=avg/l;
    printf("%0.3f",avg);
}

float f6(students* x)
{
    if (max < x->totScore)
        max=x->totScore;
    return max;
}
float f7(students* x)
{
    if (min > x->totScore)
        min=x->totScore;
    return min;
}
void f8(students* x)
{
    char id_entered[10];
    printf("\nEnter the ID : ");
    scanf("\n");
    scanf("%[^\n]s");
    if (strcmp(x->id,id_entered)==0)
    {
        f4(x);
    }
}
void f9(students* x)
{
    int i=0;
    for (i=0;i<l-1;i++)
    {
        if (strcmp((x+i)->id ,(x+i+1)->id)>0)
        {
            char t[10];
            strcpy(t,(x+i)->id);
            strcpy((x+i)->id,(x+i+1)->id);
            strcpy((x+i+1)->id,t);
            i=-1;
        }
    }
}
