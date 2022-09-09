#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char name[20];
    char idNum[7];
    float* tests;
    float average;
    char grade;
}students;

void input(students* x);
void display(students* x);

int tn;//number of tests
int main()
{
    int n,i;//number of students 
    printf("\nEnter the number of students : ");
    scanf("%d",&n);
    printf("\nEnter the number of tests : ");
    scanf("%d",&tn);
    students s[n];
    for (i=0;i<n;i++)
    {
        input(s+i);
    }
    printf("\nDisplaying the details of the students : ");
    printf("\n=========================================");
    printf("\n\n%-20s%-20s%-20s%-20s\n","Name","Idnum","Average","Grade");
    for (i=0;i<n;i++)
    {
        display(s+i);
    }


}
void input(students* x)
{
    int static k;
    k++;
    int i;
    printf("\n\nEnter the details of student %d",k);
    printf("\nName : ");
    scanf("\n");
    scanf("%s",x->name);
    printf("\nIdnum : ");
    scanf("\n");
    scanf("%s",x->idNum);
    printf("\nTest marks : ");
    x->tests=malloc(tn*sizeof(float));
    x->average=0;
    for (i=0;i<tn;i++)
    {
        scanf("%f",&x->tests[i]);
        x->average+=x->tests[i];
    }
    x->average=x->average/tn;
    if (x->average>=91 && x->average<=100)
        x->grade='A';
    else if (x->average>=81 && x->average<=90)
        x->grade='B';
    else if (x->average>=71 && x->average<=80)
        x->grade='C';
    else if (x->average>=61 && x->average<=70)
        x->grade='D';
    else
        x->grade='F';
}

void display(students* x)
{
    printf("\n%-20s%-20s%-20.3f%-20C",x->name,x->idNum,x->average,x->grade);
}
