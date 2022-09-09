#include <stdio.h>
int main()
{
    int n , v;
    printf("\nEnter the number of voters : ");
    scanf("%d",&n);
    printf("\nEnter the vote (1,2,3,4,5) : ");
    int count[6]={0};   //count[6]={spoilt ballot , 1 ,2 ,3, 4, 5}
    //Counting the votes
    for (int i=0;i<n;i++)
    {
        scanf("%d",&v);
        if (v!=1 && v!=2 && v!=3 && v!=4 && v!=5)
            count[0]++;
        else
            count[v]++;
    }
    //printing the votes
    for (int j=1;j<6;j++)
        printf("\nVotes for candidate %d : %d",j,count[j]);
    printf("\nSpoilt ballot : %d",count[0]);

    
}