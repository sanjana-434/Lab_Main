#include <stdio.h>

int main()
{
    int n , m ,distance ,bus=0 ; 
    float busCost, fuelCost , costPerson , totalCost  ;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    printf("\nEnter the number of instructors : ");
    scanf("%d",&m);
    printf("\nEnter the distance travelled in miles : ");
    scanf("%d",&distance);
    int a=n+m;
    if (a<16)
    {
        bus=1;
    }
    else if((a%16)==0)
    {
        bus=a/16;
    }
    else
    {
        bus=(a/16)+1;
    }
    busCost=bus*(81+(0.21*81));
    printf("\nNumber of mini buses : %d",bus);
    printf("\nCost for the bus : %0.3f",busCost);
    fuelCost=distance*379.184774;
    printf("\nFuel cost of the bus : %0.3f",fuelCost);
    totalCost=busCost+fuelCost;
    printf("\nTotal cost of the trip : %0.3f",totalCost);
    costPerson=totalCost/(n+m);
    printf("\nCost per person : %0.3f",costPerson);
    printf("\nThe amount to be claimed for the instructors : %0.3f",m*costPerson);

}