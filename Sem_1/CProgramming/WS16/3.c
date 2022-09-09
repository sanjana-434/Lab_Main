#define FULLDECK 72
#define NUMCOLORS 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 20

const char COLORS[NUMCOLORS][MAX] = {"red", "green", "blue","yellow"};

typedef struct UnoCard 
{
    char color[MAX];
    int number;
} UnoCard;

typedef struct UnoDeck 
{
    UnoCard cards[FULLDECK];
    int numCards;
} UnoDeck;



void randCard(UnoCard* ptr) ;
void printCard(const UnoCard* ptr);
int isMatch(const UnoCard* ptr1, const UnoCard* ptr2);
void fillDeck(UnoDeck* ptr) ;
void swapUnoCards(UnoCard* ptr1, UnoCard* ptr2);
void shuffleDeck(UnoDeck* ptr) ;
UnoCard drawCard(UnoDeck* ptr);
void display(UnoCard* x);

int r;
int main()
{
    time_t t;
    srand((unsigned)(time(&t)));
    UnoCard u1,u2;
    UnoDeck u;
    randCard(&u1);
    randCard(&u2);
    printCard(&u1);
    printCard(&u2);
    int f=isMatch(&u1,&u2);
    if (f==1)
        printf("\nBoth the cards are same");
    else
        printf("\nBoth the cards are different");
    fillDeck(&u);
    printf("\n\nDisplaying all the cards after filling the desk  :  ");
    printf("\n------------------------------------------------");
    for(int i=0;i<71;i++)
    {
        display(&u.cards[i]);
    }
    shuffleDeck(&u);
    printf("\n\nDisplaying all the cards after shuffling the desk  :  ");
    printf("\n------------------------------------------------");
    for(int i=0;i<71;i++)
    {
        display(&u.cards[i]);
    }
    UnoCard temp=drawCard(&u);
    u.cards[r].number=u.cards[71].number;
    strcpy(u.cards[r].color,u.cards[71].color);
    //displaying
    printf("\nDisplaying all the remaining cards ");
    for(int i=0;i<71;i++)
    {
        display(&u.cards[i]);
    }
}

void display(UnoCard* x)
{
    printf("\n%s  %d ",x->color,x->number);
}


UnoCard drawCard(UnoDeck* ptr)
{
    r=rand()*(71-0+1)+0;;
    return ptr->cards[r];
}

void shuffleDeck(UnoDeck* ptr)
{
    int i=0,i1,i2;
    for (i=0;i<1000;i++)
    {
        i1=rand()*(71-0+1)+0;
        i2=rand()*(72)+0;
        swapUnoCards(&ptr->cards[i1],&ptr->cards[i2]);
    }
}
void swapUnoCards(UnoCard* ptr1, UnoCard* ptr2)
{
    char fc[20];
    int fi;
    fi=ptr1->number;
    ptr1->number=ptr2->number;
    ptr2->number=fi;
    strcpy(fc,ptr1->color);
    strcpy(ptr1->color,ptr2->color);
    strcpy(ptr2->color,fc);
}


void randCard(UnoCard* ptr) 
{
    int randColour=((rand()%(3-0+1))+0);
    int randNo=((rand()%(9-1+1))+1);
    strcpy(ptr->color,COLORS[randColour]);
    ptr->number=randNo;

}
void printCard(const UnoCard* ptr)
{
    static int k;
    k++;
    printf("\nCard %d  : %s   %d",k,ptr->color,ptr->number);
}
int isMatch(const UnoCard* ptr1, const UnoCard* ptr2)
{
    if (ptr1->number==ptr2->number  &&  strcmp(ptr1->color,ptr2->color)==0)
        return 1;
    return 0;
}

void fillDeck(UnoDeck* ptr) 
{
    int i,j=1;
    for (int h=0;h<2;h++)
    {
    for (i=0;i<36;i++)
    {   
        if (i<9*(h+1))
        {
            strcpy(ptr->cards[i].color, COLORS[0]);
            ptr->cards[i].number=j;
            j++;
        }
        j=1;
        if (9*(h+1)<=i && i<18*(h+1))
        {
            strcpy(ptr->cards[i].color ,COLORS[1]);
            ptr->cards[i].number=j;
            j++;
        }
        j=1;
        if (18*(h+1)<=i && i<27*(h+1))
        {
            strcpy(ptr->cards[i].color ,COLORS[2]);
            ptr->cards[i].number=j;
            j++;
        }
        j=1;
        if (27*(h+1)<=i && i<36*(h+1))
        {
            strcpy(ptr->cards[i].color,COLORS[3]);
            ptr->cards[i].number=j;
            j++;
        }
    }
    }
}

