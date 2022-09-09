#include <stdio.h>
#include <string.h>
struct Phone
{
    char firstName[10];
    char lastName[10];
    char phoneNumber[10];   
};

void read(struct Phone* x);
int equal(struct Phone* x,struct Phone* y);
int main()
{
    struct Phone p1,p2;
    read(&p1);
    read(&p2);
    int f=equal(&p1,&p2); 
    if (f==1)
        printf("\nTrue");
    else
        printf("\nFalse");  
}
void read(struct Phone* x)
{
    static int i;
    i++;
    printf("\nEnter the phone number %d",i);
    printf("\nFirst name : ");
    scanf("\n");
    scanf("%[^\n]s",x->firstName);
    printf("\nSecond name : ");
    scanf("\n");
    scanf("%[^\n]s",x->lastName);
    printf("\nPhone number : ");
    scanf("\n");
    scanf("%[^\n]s",x->phoneNumber);

}

int equal(struct Phone* x,struct Phone* y)
{
    if (strcmp(x->phoneNumber,y->phoneNumber)==0)
        return 1;
    else
        return 0;
}