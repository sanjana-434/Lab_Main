#include <stdio.h>
#include <string.h>
typedef struct 
{
    char rollno[7];
    char name[20];
    float m1,m2,m3;
    float total;
    char result[5];
    char grade;
}students;
void read(students* x);
void cal(students* x);
void display(students* x);
int main()
{
    students s[4];
    int i;
    for (i=0;i<4;i++)
        read(&s[i]);
    for (i=0;i<4;i++)
        cal(&s[i]);
    printf("\n%-20s|\t%-20s|\t%-20s|\t%-20s|\t%-20s|\t%-20s|\t%-20s|\t%-20s","Roll No","Name","Mark 1","Mark 2","Mark 3","Total","Result","Grade");
    for (i=0;i<4;i++)
        display(&s[i]);
}
void read(students* x)
{
    static int k;
    k++;
    printf("\nEnter the details of the student %d : ",k);
    printf("\nRoll number : ");
    scanf("\n");
    scanf("%[^\n]s",x->rollno);
    printf("\nName : ");
    scanf("\n");
    scanf("%[^\n]s",x->name);
    printf("\nMark 1 : ");
    scanf("%f",&x->m1);
    printf("\nMark 2 : ");
    scanf("%f",&x->m2);
    printf("\nMark 3 : ");
    scanf("%f",&x->m3);
}
void cal(students* x)
{
    x->total = x->m3 + x->m2 + x->m1;
    if ((x->total)/3.0 >=50)
    {
        strcpy(x->result,"Pass");
        if ((x->total)/3.0 >89)
            x->grade='S';
        else if ((x->total)/3.0 <=89 && (x->total)/3.0 >70)
            x->grade='A';
        else 
            x->grade='B';
    }
    else
    {
        strcpy(x->result,"Fail");
        x->grade='\0';
    }
}
void display(students* x)
{
    printf("\n%-20s|\t%-20s|\t%-20f|\t%-20f|\t%-20f|\t%-20f|\t%-20s|\t%-20c",x->rollno,x->name,x->m1,x->m2,x->m3,x->total,x->result,x->grade);
}