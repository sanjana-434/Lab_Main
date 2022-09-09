#include <stdio.h>

typedef struct UCFCard 
{
    int UCFID;
    int balanceCents;
    int points;
} UCFCard;

void read(UCFCard* x);
void add(UCFCard* ptrCard, int addCents);
int purchase(UCFCard* ptrCard, int costCents);
void display(UCFCard* x);

int main()
{
    int addCents,costCents;
    UCFCard u;
    read(&u);
    printf("\nEnter the cents needed to be added  : ");
    scanf("%d",&addCents);
    add(&u,addCents);
    printf("\nEnter the cost of purchase : ");
    scanf("%d",&costCents);
    int f=purchase(&u,costCents);
    if (f==0)
        printf("\nNo enough points or balance to purchase......Sorry ");
    else 
    {
        printf("\nPurchase is done successfully !!");
        printf("\n\nDetails after purchase\n");
        printf("------------------------------");
        display(&u);
    }

}

void read(UCFCard* x)
{
    printf("\nEnter the details  :  ");
    printf("\nEnter UCFID : ");
    scanf("%d",&x->UCFID);
    printf("\nEnter the balance cents : ");
    scanf("%d",&x->balanceCents);
    printf("\nEnter the points  : ");
    scanf("%d",&x->points);
}
void add(UCFCard* ptrCard, int addCents) 
{
    ptrCard->balanceCents+=addCents;
}

int purchase(UCFCard* ptrCard, int costCents)
{
    if (costCents<=ptrCard->points)
        ptrCard->points = ptrCard->points - costCents;
    else if(costCents<= ptrCard->balanceCents)
        ptrCard->balanceCents = ptrCard->balanceCents -costCents;
    else 
        return 0;
    int addPoints;
    addPoints=costCents/20;
    ptrCard->points+=addPoints;
    return 1;
}

void display(UCFCard* x)
{
    printf("\nUCFID : %d",x->UCFID);
    printf("\nBalance cents : %d",x->balanceCents);
    printf("\nPoints  : %d",x->points);
}
