#include <stdio.h>
#include <conio.h>

typedef struct 
{
    int rollno;
    char name[20];
    float fees;
    char DOB[10];
}student;
student read();
void print(student x);
int main()
{
    student s1,s2;
    s1=read();
    s2=read();
    print(s1);
    printf("\n");
    print(s2);
}

student read()
{
    student x;
    static int i;
    i++;
    printf("\nEnter the details %d : ",i);
    printf("\n-----------------");
    printf("\nRoll no : ");
    scanf("%d",&x.rollno);
    printf("\nName : ");
    scanf("%*c%[^\n]s",x.name);
    printf("\nFees : ");
    scanf("%f",&x.fees);
    printf("\nDOB : ");
    scanf("%*c%[^\n]s",x.DOB);
    return x;
}
void print(student x)
{
    static int j;
    j++;
    printf("\nDetails of student %d ",j);
    printf("\n==================");
    printf("\nRoll no : %d",x.rollno);
    printf("\nName : %s",x.name);
    printf("\nFees : %f",x.fees);
    printf("\nDOB : %s",x.DOB);
}
