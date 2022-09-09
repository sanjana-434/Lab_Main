#include <stdio.h>
#include <string.h>

typedef struct 
{
    int y;
    int m;
    int d;
}date;
typedef struct 
{
    char name[30];
    char address[50];
    char city[20];
    char state[20];
    int ZIP;
    int tele_num;
    float account_balance;
    date last_date;
}customer;

void f5();
int f1(customer* x);
int f2(char* name);
void topic();
void display(customer* x);

int l=0;
int main()
{
    char ans;
    do {
    customer c;
    int n;
    l2:
    printf("\n        MENU");
    printf("\n       ======\n");
    printf("\n1) Enter a new record : ");
    printf("\n2) Search a record and display it ");
    printf("\n3) Search a record and delete it");
    printf("\n4) Search a record and change it");
    printf("\n5) Display entire content");
    printf("\n\nEnter the choice : ");
    scanf("%d",&n);

    switch(n)
    {
        int i=0;
        case 1: do{
                    i++;
                    if (i!=1)
                    {
                        printf("\nINVALID INPUT !! ENTER AGAIN");
                    }
                printf("\nEnter the details  : ");
                printf("\n--------------------");
                printf("\nName             : ");
                scanf("\n");
                scanf("%s",c.name);
                printf("\nAddress          : "); 
                scanf("\n");
                scanf("%[^\n]s",c.address);
                printf("\nCity             :");
                scanf("\n");
                scanf("%s",c.city);
                printf("\nState            :");
                scanf("\n");
                scanf("%s",c.state);
                printf("\nZIP              :");
                scanf("%d",&c.ZIP);
                printf("\nTelephone number :");
                scanf("%d",&c.tele_num);
                printf("\nAccount balance  :");
                scanf("%f",&c.account_balance);
                printf("\nLast date        : ");
                scanf("%d %d %d",&c.last_date.d,&c.last_date.m,&c.last_date.y);
                }while(!(c.tele_num>999999999 && c.tele_num<9999999999 && c.account_balance>=0 && c.last_date.d>=1 && c.last_date.d<=31 && c.last_date.m<=12 && c.last_date.m>=1 && c.last_date.y<=2050 && c.last_date.y>=2022 ));
                f1(&c);
                break;
        case 2 : printf("\nEnter the name of the person's record to be displayed : ");
                 char n[30];
                 scanf("\n");
                 scanf("%s",n);
                 f2(n);
                 break;
        case 5:
                f5();
                break;
        default: printf("INVALID CHOICE ....ENTER AGAIN ");
                 goto l2;

        printf("\n\nDo you want to continue (y/n): ");
        scanf("%c",&ans);
    }

    }while (ans=='y');

}
int f1(customer* x)
{
    FILE* p;
    p=fopen("f9.txt","a");
    if (p==NULL)
    {
        printf("\nFile doesn't exist");
        return 0;
    }
    fwrite(x,sizeof(x),1,p);
    l++;
    fclose(p);
}
int f2(char* name)
{
    int f=0;
    customer x;
    if (l==0)
    {
        printf("\nNo records ");
    }
    else
    {
        FILE* p;
        p=fopen("f9.txt","r");
        while (!feof(p))
        {
            fread(&x,sizeof(x),1,p);
            if (strcmp(x.name,name)==0)
            {
                f=1;
                topic();
                display(&x);
                break;
            }
        }
    }
    if(f==0)
        printf("\nRecord not found");
}
void topic()
{
    printf("\n%-30s%-50s%-20s%-20s%-20s%-20s%-20s%-15s","Name","Address","City","State","ZIP","Telephone phone","Account balance","Last date");
}
void display(customer* x)
{
    printf("\n%-30s%-50s%-20s%-20s%-20d%-20s%-20s%-15s",x->name,x->address,x->city,x->state,x->ZIP,x->tele_num,x->account_balance,x->last_date);
}

void f5()
{
    customer y;
    FILE* p ;
    p=fopen("f9.c","r");
    if (p==NULL)
    {
        printf("\nFile doesn't exist ");
    }
    topic();
    while (!(feof(p)))
    {
        fread(&y,sizeof(y),1,p);
        display(&y);
    }
}
