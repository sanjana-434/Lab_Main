#include <stdio.h>
int main()
{
    int bulb=1;
    int s[41]={0},check[1000]={0} , i,j;
    for (i=1;i<41;i++)
        scanf("%d",&s[i]);
    int k;
    scanf("%d",&k);
    i=0;
    int ans;
    while (i<k)
    {
        for (j=1;j<41;j++)
        {
            if (s[j]==1 && bulb%(j)==0 )
            {
                if (check[bulb]==0)
                {
                    i++;
                    ans=bulb;
                    check[ans]=1;
                }
            }
        }
        bulb++;
    }
    printf("\n%d",ans);
    

}
