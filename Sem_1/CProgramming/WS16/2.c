#include <stdio.h>

typedef struct coffee_cup {
    int capacity;
    int contents;
} coffee_cup;

void init_full(coffee_cup *ptr_coffee, int my_capacity);
void init_empty(coffee_cup *ptr_coffee, int my_capacity);
int drink(coffee_cup *ptr_coffee, int amount) ;
int fill(coffee_cup *ptr_coffee) ;
int maxAdd(const coffee_cup *ptr_coffee);
int transfer(coffee_cup *ptr_to, coffee_cup *ptr_from, int amount);

int main()
{
    printf("\n==================================================================================================================================");
    printf("\n                                                            COFFEE CAFE ");
    printf("\n==================================================================================================================================");
    coffee_cup c1,c2;
    int my_capacity,amount;
    printf("\nEnter the maximum capacity of the cup  : ");
    scanf("%d",&my_capacity);
    int n,f,a,max;
    do
    {
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n1) Fill up the cup ");
    printf("\n2) Empty the cup ");
    printf("\n3) Drinking of coffee ");
    printf("\n4) Fill up the coffee and return the amount filled : ");
    printf("\n5) Print the max amount of coffee that can be added ");
    printf("\n6) Transfer the coffee into another cup ");
    printf("\nAny other number)  Exit");
    printf("\nSelect a number : ");
    scanf("%d",&n);
    if (n==1)
        init_full(&c1,my_capacity);
    else if (n==2)
        init_empty(&c1,my_capacity);
    else if (n==3)
    {
        printf("\nEnter the amount of coffee drinked  : ");
        scanf("%d",&amount);
        f=drink(&c1,amount);
        if (f==1)
            printf("\nChanges are made to the cup");
        else
            printf("\ninvalid!!,Changes are not made to the cup");
    }
    else if (n==4)
    {
        a=fill(&c1);
        printf("\nAmount of coffee added to fill the cup : %d ",a);
    }
    else if (n==5)
    {
        max=maxAdd(&c1);
        printf("\nMaximum amount of coffee in ounces that could be added to the coffee cup : %d",max);
    }
    else if (n==6)
    {
        printf("\nAt least amount ounces can be added to the coffee cup : ");
        scanf("%d",&amount);
        f=transfer(&c2, &c1, amount);
        if (f==1)
            printf("\nCoffee is transfered to the other cup ");
        else
            printf("\nCoffee is not transfered to the other cup");
    }
    else if (n>7 || n<1)
        printf("\nInvalid input");
    }while( n!=7);
    printf("\n\nEXIT");
}

void init_full(coffee_cup *ptr_coffee, int my_capacity) 
{
    ptr_coffee->capacity = my_capacity;
    ptr_coffee->contents = my_capacity;
}

void init_empty(coffee_cup *ptr_coffee, int my_capacity) 
{
    ptr_coffee->capacity = my_capacity;
    ptr_coffee->contents = 0;
}

int drink(coffee_cup *ptr_coffee, int amount) 
{
    if (amount>0 && amount<=ptr_coffee->contents)
    {
        ptr_coffee->contents=ptr_coffee->contents-amount;
        return 1;
    }
    else
        return 0;
}

int fill(coffee_cup *ptr_coffee) 
{
    int a=ptr_coffee->capacity-ptr_coffee->contents;
    ptr_coffee->contents=ptr_coffee->capacity;
    return a;
}

int maxAdd(const coffee_cup *ptr_coffee) 
{
    return ptr_coffee->capacity-ptr_coffee->contents;
}

int transfer(coffee_cup *ptr_to, coffee_cup *ptr_from, int amount)
{
    if (ptr_from->contents>=amount)
    {
        ptr_to->contents=ptr_from->contents;
        return 1;
    }
    return 0;
}