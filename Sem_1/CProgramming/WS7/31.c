#include <stdio.h>

int main()
{
    int P1,P2,totalP1=0,totalP2=0,countP1=0,countP2=0,count=0;
    int ans='y';
    while(ans=='y')
    {
        count++;
        printf("\nEnter the vote for P1 in region %d:",count);
        scanf("%d",&P1);
        printf("\nEnter the vote for P2 in region %d:",count);
        scanf("%d",&P2);
        if (P1>P2)
            countP1++;
        else 
            countP2++;
        totalP1+=P1;
        totalP2+=P2;
        printf("\nMore precints (y or n): ");
        scanf("%*c%c",&ans);
    }
    printf("\nTotal number of votes for P1 : %d",totalP1);
    printf("\nTotal number of votes for P2 : %d",totalP2);
    printf("\nPercentage of vote of P1 : %0.2f",(totalP1*100.0)/(totalP1+totalP2));
    printf("\nPercentage of vote of P2 : %0.2f",(totalP2*100.0)/(totalP1+totalP2));
    printf("\nNumber of precints won by P1 : %d",countP1);
    printf("\nNumber of precints won by P1 : %d",countP2);
}