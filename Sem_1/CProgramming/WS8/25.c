#include <stdio.h>
int main()
{
    int votes[5][4]={{192,48,206,37},
                {147,90,312,21},
                {186,12,121,38},
                {114,21,408,39},
                {267,13,382,29}};
    //finding raw sum
    int sum=0;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<4;j++)
            sum+=votes[i][j];
    }
    printf("\nRaw total : %d",sum);
    //display table
    printf("\nZone    Candidate A  Candidate B    Candidate C     Candidate D\n");
    for (int i=0;i<5;i++)
        printf("%d           %d          %d            %d             %d\n",1+i,votes[i][0],votes[i][1],votes[i][2],votes[i][3],votes[i][4]);
    int votesCandidate[4]={0};
    int a=65;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<5;j++)
        {
            votesCandidate[i]+=votes[j][i];
        }
        printf("\nTotal votes of candidate %c : %d",a++,votesCandidate[i]);
    }
    float p;
    a=65;
    for (int h=0;h<4;h++)
    {
        p=(float)votesCandidate[h]/(float)sum;
        printf("\nPercentage of votes for candidate %c : %0.3f",a++,p);
    }
    //declaring the winner
    a=65;
    int f=1;
    for (int i=0;i<4;i++)
    {
        if (((float)votesCandidate[i])/sum>=0.5)
            {
                printf("\nThe Winner is %c",a);
                f=0;
            }
        a++;

    }
    int max1=65,max2=65;
    if (f==1)
    {
        for (int g=0;g<4;g++)
        {
            if (votesCandidate[g]>max1)
                max1=max1+g;
        }
        for (int m=0;m<4;m++)
        {
            if (votesCandidate[m]>max2 && votesCandidate[m]!=max1)
                max2=max2+m;
        }
    }
    if (f==1)
        printf("\nThe runner ups are : %c and %c",max1,max2);
}