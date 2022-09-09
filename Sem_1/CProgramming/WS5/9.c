/*assumed that the net profit for adults ticket is Rs1 per tickt and for childs ticket it is 1per ticket*/
#include <stdio.h>
int main()
{
    int adult,child;
    float gross_profit,net_profit,amount_d;
    char movie_name[100];
    printf("Enter the nme of the movie : ");
    scanf("%[^\n]%*c",&movie_name);
    printf("\nEnter the number of adult tickets sold : ");
    scanf("%d",&adult);
    printf("\nEnter the number of child's ticket sold : ");
    scanf("%d",&child);
    gross_profit=6.00*adult+3.00*child;
    net_profit= 1.00*adult+1.00*child;
    amount_d=gross_profit-net_profit;
    printf("\nMovie name : %s",movie_name);
    printf("\nAdult's tickets sold : %d",adult);
    printf("\nchild's tickets sold : %d",child);
    printf("\nGross box office profit : $ %0.2f",gross_profit);
    printf("\nGross box office profit : $ %0.2f",net_profit );
    printf("\nAmount paid to distributor : $ %0.2f",amount_d);

}
