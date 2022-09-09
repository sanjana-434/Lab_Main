#include <stdio.h>

typedef struct 
{
    char name[30];
    int no;
    int points;
}players;

int mt(players* x);
void display(players* x);
void input(players* x);

int max=0;
int total=0;

int main()
{
    int i;
    players p[12];
    for (i=0;i<12;i++)
    {
        input(p+i);
        max=mt(p+i);  //max and total
    }
    printf("\n%30s%30s%30s\n","Player's name","Player's num","Points scored");
    for (i=0;i<12;i++)
    {
        display(p+i);
    }
    printf("\n\ntotal points : %d",total);
    printf("\n\nMaximum points player :  ");
    for (i=0;i<12;i++)
    {
        if (max==p[i].points)
        {
            display(p+i);
        }
    }

    
}

void input(players* x)
{
    int i;
    int static k;
    k++;
    do 
    {
        printf("\n\nEnter the details of player %d  :",k);
        printf("\nPlayer name : ");
        scanf("%s",x->name);
        printf("\nPlayer number : ");
        scanf("%d",&x->no);
        printf("\nPoints scored : ");
        scanf("%d",&x->points);
    }while(!(x->no>=0 && x->points>=0));
}


int mt(players* x)
{
    total+=x->points;
    if (max<=x->points)
    {
        max=x->points;
    }
}

void display(players* x)
{
    printf("\n%30s%30d%30d",x->name,x->no,x->points);
}
