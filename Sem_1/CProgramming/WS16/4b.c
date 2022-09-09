#include <stdio.h>

typedef struct UCFCard {
int UCFID;
int balanceCents;
int points;
} UCFCard;

void add(UCFCard* ptrCard, int addCents) ;
int purchase(UCFCard* ptrCard, int costCents);
void display(UCFCard* x);
int main()
{
    UCFCard u={1234567,1000,300};
    

    int n;
    float addcents;
    printf("\nEnter the cents to be added to the balance cents  : ");
    scanf("%f",&addcents);
    add(&u,addcents);
    int costCents;
    printf("\nEnter the cost of the item to be purchased  :");
    scanf("%d",&costCents);
    n=purchase(&u,costCents);
    if (n==1)
    {
        printf("\nPurchase done successfully !!");
        printf("\n\nDetails of UCFCard after purchase  : ");
        printf("\n======================================\n");
        display(&u);
    }
    else
    {
        printf("\nPurchase is not done ");
    }


}

void add(UCFCard* ptrCard, int addCents) 
{
    ptrCard->balanceCents+=addCents;
}

int purchase(UCFCard* ptrCard, int costCents)
{
    int bonus=0;
    if (ptrCard->points>=costCents)
    {
        ptrCard->points=ptrCard->points-costCents;
        return 1;
    }
    else if (ptrCard->balanceCents>=costCents)
    {
        ptrCard->balanceCents=ptrCard->balanceCents-costCents;
        bonus=costCents/20;
        ptrCard->points+=bonus;
        return 1;
    }
    return 0;
}

void display(UCFCard* x)
{
    printf("\nUCFID  : %d",x->UCFID);
    printf("\nBalance points  : %d",x->balanceCents);
    printf("\nPoints : %d",x->points);
}