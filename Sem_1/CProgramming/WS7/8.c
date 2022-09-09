#include <stdio.h>

int main()
{
    int score[5] , p;
    printf("Enter the marks : ");
    scanf("%d%d%d%d%d",&score[0],&score[1],&score[2],&score[3],&score[4]);
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            p=score[j];
            if (score[j+1]<score[j])
            {
                score[j]=score[j+1];
                score[j+1]=p;
            }
        }
    }
    
    if ((score[3]-score[1])>=4)
    {
        printf("\nKIN\n");
    }
    else
    {
        printf("\nThe total final score : %d\n",score[1]+score[2]+score[3]);
    }

}