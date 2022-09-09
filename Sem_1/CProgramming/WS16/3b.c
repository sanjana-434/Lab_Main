#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FULLDECK 72
#define NUMCOLORS 4
#define MAX 20

const char COLORS[NUMCOLORS][MAX] = {"red", "green", "blue","yellow"};

typedef struct UnoCard {
    char color[MAX];
    int number;
} UnoCard;

typedef struct UnoDeck {
    UnoCard cards[FULLDECK];
    int numCards;
} UnoDeck;

void randCard(UnoCard* ptr);
void printCard(const UnoCard* ptr);
int isMatch(const UnoCard* ptr1, const UnoCard* ptr2);
void swapUnoCards(UnoCard* ptr1, UnoCard* ptr2);
void shuffleDeck(UnoDeck* ptr) ;

static int k;
int main()
{
    time_t t;
    srand((unsigned) time(&t));
    UnoDeck u;
    u.numCards=FULLDECK;
    int i;
    for (i=0;i<FULLDECK;i++)
    {
        randCard(&u.cards[i]);
    }
    
    printf("\nDisplaying all the cards  ");
    printf("\n========================\n");
    printf("\n%-20s:%-20s %-20s","Card No","Color","Number");
    for (i=0;i<FULLDECK;i++)
    {
        printCard(&u.cards[i]);
    }

    int n1,n2,f;
    printf("\nEnter 2 unocard nos to be compared  :");
    scanf("%d%d",&n1,&n2);
    f=isMatch(&u.cards[n1-1],&u.cards[n2-1]);
    if (f==1)
        printf("\n\nBoth the cards are same ");
    else
        printf("\n\nBoth the cards are not same ");

    shuffleDeck(&u); 
    printf("\nDisplaying all the cards after shuffling ");
    printf("\n========================\n");
    printf("\n%-20s:%-20s %-20s","Card No","Color","Number");
    k=0;
    for (i=0;i<FULLDECK;i++)
    {  
        printCard(&u.cards[i]);
    }

    


}

void randCard(UnoCard* ptr)
{
    int no=(rand()%9)+1;
    int colour=rand()%4;
    strcpy(ptr->color,COLORS[colour]);
    ptr->number=no;
}

void printCard(const UnoCard* ptr)
{
    k++;
    printf("\n%-20d:%-20s %-20d",k,ptr->color,ptr->number);
}

int isMatch(const UnoCard* ptr1, const UnoCard* ptr2)
{
    if (strcmp(ptr1->color,ptr2->color)==0)
    {
        if (ptr2->number==ptr1->number)
        {
            return 1;
        }
    }
    return 0;
}

void shuffleDeck(UnoDeck* ptr)
{
    int n1,n2;
    for(int i=0;i<1000;i++)
    {
        n1=rand()%72;
        n2=rand()%72;
        swapUnoCards(&ptr->cards[n1],&ptr->cards[n2]);
    }
} 

void swapUnoCards(UnoCard* ptr1, UnoCard* ptr2)
{
    UnoCard x;
    x=*ptr1;
    *ptr1=*ptr2;
    *ptr2=x;
}