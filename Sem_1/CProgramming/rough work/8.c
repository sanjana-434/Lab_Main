#include <stdio.h>
typedef struct student
{
    char name[20];
    int rollno;
    float mark;
}s;
int main()
{
    s s1,s2;
    printf("%f  %d  %s",s1.mark,s1.rollno,s1.name);
}