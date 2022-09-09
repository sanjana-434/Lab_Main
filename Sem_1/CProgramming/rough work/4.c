#include <stdio.h>
int main()
{
    int a[n]={1,2,3,2,1,4,3,5};
    for(int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                for (int k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
        }
    }
for (int h=0;h<n;h++)
{
    printf(" %d",a[h]);
}
}