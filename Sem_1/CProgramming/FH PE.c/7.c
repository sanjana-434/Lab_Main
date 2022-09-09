//used fread and fwrite 

#include <stdio.h>
#include <stdlib.h>
struct s1
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct s1 s[3]={{1,"sanjana",87.9},{2,"tarun",98.8},{3,"dhana",78.9}};
    struct s1 q[3];
    FILE * p;
    p=fopen("rough.txt","w+");
    
    fwrite(s,sizeof(struct s1),3,p);

    if (p==NULL)
        printf("ERROR!!");
    fseek(p,0,0);
    printf("\n%-20s%-20s%-20s","Rollno","Name","Marks");
    printf("\n===================================================");
    while(1)
    {
        fread(q,sizeof(struct s1),3,p);
        if(feof(p))
        {
            exit(0);
        }
    printf("\n%-20d%-20s%-20.3f",q[0].rollno,q[0].name,q[0].marks);
    printf("\n%-20d%-20s%-20.3f",q[1].rollno,q[1].name,q[1].marks);
    printf("\n%-20d%-20s%-20.3f",q[2].rollno,q[2].name,q[2].marks);
    }
    
}