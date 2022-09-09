#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int score[n];
    printf("Enter the values of the array : ");
    for (int i=0;i<n;i++)
        scanf("%d",&score[i]);
    
    //checking whether atleast one men's score is 0
    int f=1;
    for (int i=0;i<n;i+=2)
    {
        if (score[i]==0)
            f=0;
    }
    //calcultinf max of women and min of men
    int max=score[1],min=score[0];
    if (f==0)
    {
        for (int i=0,j=1;i<n,j<n;i+=2,j+=2)
        {
            if (score[i]==0)
                break;
            if (max<score[j])
                max=score[j];
            if (min>score[i])
                min=score[i];
        }
    printf("\nMaximum of women's score : %d",max);
    printf("\nMinimum of men's score : %d",min);
    }
    else
    {
        printf("\nInvalid inputs , atleast one of the men's value is expecting to be 0 ");
    }
}