#include <stdio.h>

typedef struct
{
    int itemNo;
    char name[20];
    int price;
    char supplierName[20];
}items;

void read(items* x);
void display(items* x);
int  highest(items* x,int n);
void fxn3(items* x);

int main()
{
    int n,i;
    printf("\nEnter the number of items : ");
    scanf("%d",&n);
    items it[n];
    for(i=0;i<n;i++)
        read(&it[i]);
    printf("\n-----------------------------------------------------------------------------");
    printf("\ni)  Displaying the item's details ");
    for (i=0;i<n;i++)
        display(&it[i]);
    printf("\n-----------------------------------------------------------------------------");
    printf("\nii)  Highest price : %d",highest(&it,n));
    printf("\n-----------------------------------------------------------------------------");
    printf("\nName of the item\t\tNumber of items\t\tSupplier");
    for (i=0;i<n;i++)
        fxn3(&it[i]);
    printf("\n-----------------------------------------------------------------------------");
}
void read(items* x)
{
    static int h;
    h++;
    printf("\nEnter the details of item %d",h);
    printf("\nItem Number : ");
    scanf("%d",&x->itemNo);
    printf("\nItem Name  :");
    scanf("\n");
    scanf("%[^\n]s",x->name);
    printf("\nPrice : ");
    scanf("%d",&x->price);
    printf("\nSupplier Name : ");
    scanf("\n");
    scanf("%[^\n]s",x->supplierName);

}
void display(items* x)
{
    static int k;
    k++;
    printf("\nDetails of item %d  ",k);
    printf("\nItem Number : %d",x->itemNo);
    printf("\nItem Name  : %s",x->name);
    printf("\nPrice : %d",x->price);
    printf("\nSupplier Name : %s",x->supplierName);
}
int  highest(items* x,int n)
{
    int max=x[0].price;
    for(int i=0;i<n;i++)
    {
       if (max<x[i].price)
        max=x[i].price; 
    }
    return max;
}
void fxn3(items* x)
{
    printf("\n%-20s\t\t%d\t\t  \t%s",x->name,x->itemNo,x->supplierName);
}