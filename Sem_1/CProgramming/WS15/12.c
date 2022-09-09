#include <stdio.h>
#include <string.h>
typedef struct {
    int d;
    int m;
    int y;
}date;

typedef struct stud {
    int rollno;
    char name[20];
    date dob;
    float m1,m2,m3,m4,m5;
}STUD;

void read(STUD* x);
int display(STUD * x);
int arrange(STUD * x,STUD* y);
void displayAll(STUD* x);

int n,i;

int main()
{
    printf("\nEnter the number of students : ");
    scanf("%d",&n);
    STUD s[n];
    for (i=0;i<n;i++)
        read(s+i);

    int ch;
    do
    {
        printf("\n\nYOUR CHOICES ");
        printf("\n============\n");
        printf("\n1 ) Display a record.");
        printf("\n2 ) Arrange the student details based on roll no.");
        printf("\n3 ) Display student details with percentage and result.");
        printf("\n\nEnter your choice : ");
        scanf("%d",&ch);
        if (ch==1)
        {
            for (i=0;i<n;i++)
            {
                int h=display(s+i);
                if (h==0)
                    break;
            }
        }
        else if (ch==2)
        {
            for (i=0;i<n-1;i++)
            {
                int f;
                f=arrange(s+i,s+i+1);
                if (f==1)
                    i=-1;
            }
        }
        else if(ch==3)
        {
            for (i=0;i<n;i++)
            {
                displayAll(s+i);
            }
        }
        else
            break;

    }while(1);
}

void read(STUD* x)
{
    static int k=0;
    k++;
    printf("\nEnter the details of student %d",k);
    printf("\nRoll no : ");
    scanf("%d",&x->rollno);
    printf("\nName  : ");
    scanf("%*c%[^\n]s",x->name);
    printf("\nDOB : ");
    scanf("%d%d%d",&x->dob.d,&x->dob.m,&x->dob.y);
    printf("\nMark 1 , 2 , 3 , 4 , 5    : ");
    scanf("%f%f%f%f%f",&x->m1,&x->m2,&x->m3,&x->m4,&x->m5);
}
int display(STUD * x)
{
    char nam[20];
    printf("\nEnter the name of the student  : ");
    scanf("%*c%[^\n]s",nam);
    if (strcmpi(nam,x->name)==0)
    {
        printf("\nRoll no : %d",x->rollno);
        printf("\nName  :  %s",x->name);
        printf("\nDOB  :  %d / %d / %d",x->dob.d,x->dob.m,x->dob.y);
        printf("\nMark 1 : %0.2f",x->m1);
        printf("\nMark 2 : %0.2f",x->m2);
        printf("\nMark 3 : %0.2f",x->m3);
        printf("\nMark 4 : %0.2f",x->m4);
        printf("\nMark 5 : %0.2f",x->m5);
        return 0;
    }
}

int arrange(STUD * x,STUD* y)
{
    STUD z;
    if (x->rollno > y->rollno)
    {
        z=*x;
        *x=*y;
        *y=z;
        return 1;
    }
    return 0;
}

void displayAll(STUD* x)
{
    static int l;
    l++;
    float percent;
    printf("\nSTUDENT  %d",l);
    printf("\n===========");
    printf("\nRoll no : %d",x->rollno);
    printf("\nName  :  %s",x->name);
    printf("\nDOB  :  %d / %d / %d",x->dob.d,x->dob.m,x->dob.y);
    printf("\nMark 1 : %0.2f",x->m1);
    printf("\nMark 2 : %0.2f",x->m2);
    printf("\nMark 3 : %0.2f",x->m3);
    printf("\nMark 4 : %0.2f",x->m4);
    printf("\nMark 5 : %0.2f",x->m5);
    percent=(x->m5+x->m4+x->m3+x->m2+x->m1)/5;
    printf("Percentage  : %0.2f",percent);
    if (percent>=50)
        printf("\nResult : PASS");
    else
        printf("\nResult : FAIL");
}