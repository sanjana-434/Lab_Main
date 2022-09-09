#include <stdio.h>

typedef struct 
{
    float housing;
    float utilities;
    float household_expenses;
    float transportation;
    float food;
    float medical;
    float insurance;
    float entertainment;
    float clothing;
    float miscellaneous;
}monthlyBudget;

void display(monthlyBudget* x);
void input(monthlyBudget* x);
int mb;


int main()
{
    int i;
    printf("\nEnter the monthly budget  : ");
    scanf("%f",&mb);
    monthlyBudget m[12];
    for (i=0;i<3;i++)
    {
        input(m+i);
    }
    for (i=0;i<3;i++)
    {
        display(m+i);
    }
}

void input(monthlyBudget* x)
{
    int static k;
    k++;
    printf("\n\nEnter the details of month %d :",k);
    printf("\nHousing : ");
    scanf("\n");
    scanf("%f",&x->housing);
    printf("\nUtilities : ");
    scanf("\n");
    scanf("%f",&x->utilities);
    printf("\nHouse hold expenses : ");
    scanf("\n");
    scanf("%f",&x->household_expenses);
    printf("\nTransportation : ");
    scanf("\n");
    scanf("%f",&x->transportation);
    printf("\nFood : ");
    scanf("\n");
    scanf("%f" ,&x->food);
    printf("\nMedical : ");
    scanf("\n");
    scanf("%f",&x->medical);
    printf("\nInsurance : ");
    scanf("\n");
    scanf("%f",&x->insurance);
    printf("\nEntertainment : ");
    scanf("\n");
    scanf("%f",&x->entertainment);
    printf("\nClothing : ");
    scanf("\n");
    scanf("%f",&x->clothing);
    printf("\nMiscellaneous : ");
    scanf("\n");
    scanf("%f",&x->miscellaneous);

}
void display(monthlyBudget* x)
{
    int static h;
    h++;
    printf("\n\nMONTH %d: ",h);
    printf("\n%-20s%s%-20.3f","Housing",":",x->housing);
    printf("\n%-20s%s%-20.3f","Utilities",":",x->utilities);
    printf("\n%-20s%s%-20.3f","Household Expenses",":",x->household_expenses);
    printf("\n%-20s%s%-20.3f","Transportation",":",x->transportation);
    printf("\n%-20s%s%-20.3f","Food",":",x->food);
    printf("\n%-20s%s%-20.3f","Medical",":",x->medical);
    printf("\n%-20s%s%-20.3f","Insurance",":",x->insurance);
    printf("\n%-20s%s%-20.3f","Entertainment",":",x->entertainment);
    printf("\n%-20s%s%-20.3f","Clothing",":",x->clothing);
    printf("\n%-20s%s%-20.3f","Miscellaneous",":",x->miscellaneous);
    if (mb > (x->clothing+x->entertainment+x->food+x->household_expenses+x->housing+x->insurance+x->insurance+x->medical+x->miscellaneous+x->transportation+x->utilities))
        printf("\nOver the budget");
    else if(mb < (x->clothing+x->entertainment+x->food+x->household_expenses+x->housing+x->insurance+x->insurance+x->medical+x->miscellaneous+x->transportation+x->utilities))
        printf("\nBelow the budget");
    else
        printf("\nEqual to the budget");


}