#include <stdio.h>

typedef struct 
{
    char name[20];
    int id;
    float g1,g2,g3;
}students;
void read(students * x);
void result(students* x);
int main()
{
    int n;
    printf("\nEnter the number of students : ");
    scanf("%d",&n);
    students s[n];
    int i=0;
    for(i=0;i<n;i++)
        read(&s[i]);
    printf("--------------------------------------------------------------------------");
    printf("\nRESULTS");
    printf("\n=======");
    printf("\n%-20s\t\tID\t\tResults (300)","Student Name");
    for (i=0;i<n;i++)
        result(&s[i]);

}
void read(students * x)
{
    static int k;
    k++;
    printf("\nEnter the details of student %d",k);
    printf("\nName : ");
    scanf("\n");
    scanf("%[^\n]s",x->name);
    printf("\nID : ");
    scanf("%d",&x->id);
    printf("\nGrade 1 : ");
    scanf("%f",&x->g1);
    printf("\nGrade 2 : ");
    scanf("%f",&x->g2);
    printf("\nGrade 3 : ");
    scanf("%f",&x->g3);  
}
void result(students* x)
{
    printf("\n%-20s\t\t%d\t\t%0.3f",x->name,x->id,(x->g1)+(x->g2)+(x->g3));
}