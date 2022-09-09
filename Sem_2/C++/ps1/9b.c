
#include <stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct
{
    int dd,mm,yy;
}date;

typedef struct{
    char name[30],address[50],city[20],state[20];
    int ZIP;
    char teleNo[10];
    float acc_bal;
    date last_pay;
}customer;

void f1(customer* x,int n);
void f5();
void search(int n);

int main()
{
    customer c1;
    int ch,i;
    char a;
    l1:
    printf("\n             MENU ");
    printf("\n             ----");
    printf("\n\n1. Enter new records into file");
    printf("\n2. Search and display the record");//1
    printf("\n3. Search and delete the record");//2
    printf("\n4. Search and change the record ");//3
    printf("\n5. Display the entire content");
    printf("\n6. Exit");
    printf("\nEnter your choice  : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
                f1(&c1,0);
                printf("\nRecord is added successfully !!");
                break;
        case 2:
                search(1);break;
        case 3:
                search(2);break;
        case 4:
                search(3);break;
        case 5:
                printf("\nDisplaying the details of all the records  :");
                printf("\n-----------------------------------------\n");
                f5();
                break;

    }
    printf("\nDo you want to continue? (y/n): ");
    scanf("\n");
    scanf("%c",&a);
    if (a=='y')
        goto l1;

}
void f1(customer* x,int n)
{
    if(n==1)
    {
        printf("CHANGE THE DATA:\n\n");
    }
    printf("\nEnter the details of record");
    printf("\nName  : ");
    scanf("\n");
    scanf("%[^\n]s",x->name);
    printf("\nAddress  : ");
    scanf("\n");
    scanf("%[^\n]s",x->address);
    printf("\nCity  : ");
    scanf("\n");
    scanf("%[^\n]s",x->city);
    printf("\nState  : ");
    scanf("\n");
    scanf("%[^\n]s",x->state);
    printf("\nZIP  : ");
    scanf("%d",&x->ZIP);
    printf("\nTelephone number  : ");
    scanf("\n");
    scanf("%s",x->teleNo);
    printf("\nAccount balance  : ");
    scanf("%f",&x->acc_bal);
    printf("\nDate of last payment  : ");
    scanf("%d%d%d",&x->last_pay.dd,&x->last_pay.mm,&x->last_pay.yy);
    FILE *p;
    p=fopen("file.txt","a");
    if(p==NULL)
    {
        printf("cannot open file");
        exit(0);
    }
    if(n==1)
    {
        FILE *newf;
        newf=fopen("new.txt","a");
        fwrite(x,sizeof(customer),1,newf);
    }
    else{
        fwrite(x,sizeof(customer),1,p);
        fclose(p);
    }

}
void f5()
{
    int r=0;
    customer x;
    FILE * pt;
    pt=fopen("file.txt","r");
    while (1)
    {
        fread(&x,sizeof(customer),1,pt);
        r++;
        if (feof(pt))
            break;

        printf("\nName                   :  %s",x.name);
        printf("\nAddress                :  %s",x.address);
        printf("\nCity                   :  %s",x.city);
        printf("\nState                  :  %s",x.state);
        printf("\nZIP                    :  %d",x.ZIP);
        printf("\nTelephone number       :  %s",x.teleNo);
        printf("\nAccount balance        :  %0.2f",x.acc_bal);
        printf("\nDate of last payment   :  %d | %d | %d",x.last_pay.dd,x.last_pay.mm,x.last_pay.yy);
    }
    if (r==1)
    {
        printf("\nNo records are available!!");
    }
    fclose(pt);
}

void search(int n)
{
    int flag=0;
    customer x;
    FILE * pt;
    FILE *newf;
    pt=fopen("file.txt","r");
    char s_name[50];
    printf("Enter the name to be searched : ");
    scanf("\n");
    scanf("%[^\n]s",s_name);
    while (1)
    {
        fread(&x,sizeof(customer),1,pt);
        if (feof(pt))
            break;
        if(strcmp(s_name,x.name)==0 && n==1)
        {
                flag=1;
                printf("PRINTING SPECIFIC RECORD");
                printf("\nName                   :  %s",x.name);
                printf("\nAddress                :  %s",x.address);
                printf("\nCity                   :  %s",x.city);
                printf("\nState                  :  %s",x.state);
                printf("\nZIP                    :  %d",x.ZIP);
                printf("\nTelephone number       :  %s",x.teleNo);
                printf("\nAccount balance        :  %0.2f",x.acc_bal);
                printf("\nDate of last payment   :  %d | %d | %d",x.last_pay.dd,x.last_pay.mm,x.last_pay.yy);
        }

        else if(n==2 || n==3)
        {
            printf("ARRIVED THILL THIS\n");

            newf=fopen("new.txt","a");
            if(!(strcmp(s_name,x.name)==0))
                fwrite(&x,sizeof(customer),1,newf);
            else
            {
                    if(n==2)
                        printf("Record deleted!!!\n");
                    if(n==3)
                        f1(&x,1);
            }
        }
      
    }
    if (flag==0)
        {
            printf("\nNo such records");
        }
    fclose(newf);
    fclose(pt);
    remove("file.txt");
    rename("new.txt","file.txt");
}