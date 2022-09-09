#include <stdio.h>
#include <string.h>
typedef struct 
{
    char id[10];
    char name[20];
    float salary;
    int perRating;
}emp;
void read(emp* x);
void searchId(emp* x,int n);
void display (emp* x);
int main()
{
    int n,i;
    printf("\nEnter the number of employees : ");
    scanf("%d",&n);
    emp s[n];
    for (i=0;i<n;i++)
        read(&s[i]);
    printf("\n-------------------------------------------------------------------------");
    printf("\nDisplaying all the employee's details : ");
    printf("\n%-20s\t%-20s\t%-20s\t%-20s\t%-20s","ID","Name","Salary","Performance rating","Bonus");
    for (i=0;i<n;i++)
        display(&s[i]);
    printf("\n-------------------------------------------------------------------------");
    searchId(&s,n);
    printf("\n-------------------------------------------------------------------------");
}
void read(emp* x)
{
    static int h;
    h++;
    printf("\nEnter the details of employee %d",h);
    printf("\nID : ");
    scanf("\n");
    scanf("%[^\n]s",&x->id);
    printf("\nName  :");
    scanf("\n");
    scanf("%[^\n]s",x->name);
    printf("\nSalary : ");
    scanf("%f",&x->salary);
    printf("\nPercentage rating : ");
    scanf("%d",&x->perRating);
}
void searchId(emp* x,int n)
{
    int i;
    char searchId[10];
    printf("\nEnter the employee id to be searched and displayed : ");
    scanf("\n");
    scanf("%[^\n]s",&searchId);
    for (i=0;i<n;i++)
    {
        if (strcmp(x->id,searchId)==0)
        {
            printf("\nID : %s",x->id);
            printf("\nName : %s",x->name);
            printf("\nSalary : %f",x->salary);
            printf("\nPercentage rating : %d ",x->perRating);
            break;
        }
        x++;
    }
    if (i==n)
        printf("\nId is not found");
}
void display (emp* x)
{
    float bonus=0;
    switch (x->perRating)
    {
    case 1:bonus=x->salary*0.05;break;
    case 2:bonus=x->salary*0.10;break;
    case 3:bonus=x->salary*0.15;break;
    case 4:bonus=x->salary*0.20;break;
    case 5:bonus=x->salary*0.25;break;    
    }
    if (x->perRating == 1 ||x->perRating == 2||x->perRating == 3||x->perRating == 4||x->perRating == 5 )
        printf("\n%-20s\t%-20s\t%-20f\t%-20d\t%-20f",x->id,x->name,x->salary,x->perRating,bonus);
    else
        printf("\n%-20s\t%-20s\t%-20f\t%-20d\t - [wrong i/p]",x->id,x->name,x->salary,x->perRating);
}
