#include <stdio.h>
int main()
{
    FILE* p;
    p=fopen("data.txt","r");
    int freq[11]={0};
    int a;
    if (p==NULL)
        printf("\nERROR!!");

    int n;
    fscanf(p,"%d",&n);
    int i,j;
    printf("%d ",n);
    for (i=0;i<n;i++)
    {
        fscanf(p,"%d",&a);
        freq[a]++;
    }
    
    for(i=0;i<11;i++)
        printf("%d  ",freq[i]);
    
    for(i=10;i>0;i--)
    {
        for (j=0;j<=10;j++)
        {
            if (freq[j]==i)
            {
                printf(" * ");
                freq[j]--;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n 0  1  2  3  4  5  6  7  8  9  10\n");
    
}