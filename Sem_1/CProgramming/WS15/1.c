#include <stdio.h>

typedef struct 
{
    char location[30];
    char owner[30];
    int bedrooms;
    float sqft;
    float price;
}house;

void read(house* x);
void display(house* x);
int main()
{
    int n=1;
    house h1,h2,h3;
    read(&h1);
    read(&h2);
    read(&h3);
    display(&h1);
    display(&h2);
    display(&h3);
    float max=h1.sqft;
    if (h2.sqft>max)
    {
        max=h2.sqft;
        n=2;
    }
    if (h3.sqft>max)
    {
        max=h3.sqft;
        n=3;
    }
    printf("The house %d is the  largest house with  %0.3f squarefeet  ",n,max);
}
void read(house* x)
{
    printf("\nEnter the details of the house  : ");
    printf("\nlocation of the house : ");
    scanf("\n");
    scanf("%[^\n]s",x->location);
    printf("\nOwner  : ");
    scanf("\n");
    scanf("%[^\n]s",x->owner);
    printf("\nBedrooms  : ");
    scanf("%d",&x->bedrooms);
    printf("\nTotal square feet : ");
    scanf("%f",&x->sqft);
    printf("\nPrice  :");
    scanf("%f",&x->price);
}

void display(house* x)
{
    printf("\nlocation of the house : %s",x->location);
    printf("\nOwner  : %s",x->owner);
    printf("\nBedrooms  : %d",x->bedrooms);
    printf("\nTotal square feet : %0.3f",x->sqft);
    printf("\nPrice  : %0.3f\n",x->price);
}