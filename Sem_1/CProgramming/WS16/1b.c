#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAXRACKSIZE 50

typedef struct snack {
    char name[50];
    int costCents;
    int calories;
} snack;

typedef struct rack {
    int curSize;
    snack* list[MAXRACKSIZE];
} rack;

snack* makeSnack(const char sName[], int sCents, int sCals);
rack* makeSnackRack();
snack* dispenseSnack(rack* ptrRack);
int addSnack(rack* ptrRack, snack* ptrSnack);
void display(rack* x);

int curSize=0;
char name[50];
int cost,cal;
int n;

rack r;
snack tmp2;
int main()
{
    do{
        printf("\n===================================================================================");
        printf("\n                                     MENU                                           ");
        printf("\n===================================================================================");
        printf("\n1) Update the first a snack in the rack");
        printf("\n2) Add the snack in the rack  ");
        printf("\n3) To dispense a snack");
        printf("\n4) To display all the snacks");
        printf("\n0) Exit");
        

        printf("\nEnter ypur choice  : ");
        scanf("%d",&n);
        if (n==1)
        {
            curSize++;
            printf("\nEnter the details of the snack : ");
            printf("\nName  : ");
            scanf("\n");
            scanf("%[^\n]s",name);
            printf("\nCost   : ");
            scanf("%d",&cost);
            printf("\nCalories  : ");
            scanf("%d",&cal);
            makeSnackRack();
            
        }
        else if (n==2)
            addSnack(&r,&tmp2);
        else if (n==3)
        {
            dispenseSnack(&r);
        }
        else if(n==4)
        {
            display(&r);
        }

    }while (n!=0);
    

}

snack* makeSnack(const char sName[], int sCents, int sCals) 
{
    snack* tmp = malloc(sizeof(snack));
    strcpy(tmp->name,sName);
    tmp->costCents=sCents;
    tmp->calories=sCals;
    return tmp;
}

rack* makeSnackRack() 
{
    r.list[curSize-1]=makeSnack(name,cost,cal);
}

int addSnack(rack* ptrRack, snack* ptrSnack) 
{
    curSize++;
    if (curSize>50)
    {
        return 0;
    }
    else 
    {
        printf("\nEnter the details of the snack : ");
        printf("\nName  : ");
        scanf("\n");
        scanf("%[^\n]s",ptrSnack->name);
        printf("\nCost   : ");
        scanf("%d",&ptrSnack->costCents);
        printf("\nCalories  : ");
        scanf("%d",&ptrSnack->calories);
        ptrRack->list[curSize-1]=ptrSnack;
        

    }
}

snack* dispenseSnack(rack* ptrRack)
{
    for (int i=0;i<curSize-1;i++)
    {
        r.list[i]=r.list[i+1];
    }
    curSize--;
}

void display(rack* x)
{
    for (int i=1;i<=curSize;i++)
    {
        printf("\nSnack  %d" , i);
        printf("\n----------");
        printf("\nName     :  %s",x->list[i-1]->name);
        printf("\nCost     :  %d",x->list[i-1]->costCents);
        printf("\nCalories :  %d",x->list[i-1]->calories);
    }
}

