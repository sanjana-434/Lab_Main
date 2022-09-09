#include<stdio.h>

typedef struct
{
    char name[50];
    float cost;
    int no;
}drink;

int main()
{
    drink arr[5]={{"Cola",0.75,20},{"rootbeer",0.75,20},{"lemonlime",0.75,20},{"grapesoda",0.80,20},{"creamsoda",0.80,20}};
    int n,redo;
    l1:printf("\nMAIN MENU");
    printf("\n1.cola\n2.rootbeer\n3.lemonlime\n4.grapesoda\n5.creamsoda\n6.exit\nEnter your choise");
    scanf("%d",&n);
    if(n==6)
    {
        exit(0);
    }
    redo=input(&arr[n-1]);
    if(redo==1)
    {
        goto l1;
    }
}

int input(drink *p)
{
    float price;
    do
    {
        printf("Enter the amount inserted");
        scanf("%f",&price);
    }while(price>0 && price>1);
    if(p->no>0)
    {
        if(price<p->cost)
        printf("amount invalid");
        else
        {
            printf("The remaining amount is %.2f",price-p->cost);
            p->no--;
        }
        return 1;
    }
    else
    {
        printf("Product out of stock");
        return 1;
    }
}
