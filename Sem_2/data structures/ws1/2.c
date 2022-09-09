#include <stdio.h>

int main()
{
    int len,i,j,k;
    printf("\nEnter the number of elements of the array : ");
    scanf("%d",&len);
    int len_copy=len;
    int arr[len];
    printf("\nEnter the elements   :"    );
    for (i=0;i<len;i++)
        scanf("%d",arr+i);
    
    //copy
    int dup[len];
    int count[len];
    int copy[len];
    for (i=0;i<len;i++)
    {
        copy[i]=arr[i];
        printf("\n%d ",copy[i]);
        count[i]=0;   //initialising
    }

    
    int d=0;
    for (i=0;i<len-1;i++)
    {
        for (j=i+1;j<len;j++)
        {
            if (arr[i]==arr[j])
            {
                dup[d++]=arr[i];
                for (k=j;k<=len-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                len--;
                i--;
            }
        }
    }

    for (i=0;i<d;i++)
    {
        for (j=i+1;j<d;j++)
        {
            if (dup[i]==dup[j])
            {
                for (k=j;k<d;k++)
                {
                    dup[k]=dup[k+1];
                }
                d--;
                i--;
            }
        }
    }
    //count

    for (i=0;i<d;i++)
    {
        for (j=0;j<len_copy;j++)
        {
            if (dup[i]==copy[j])
                count[i]++;
        }
        printf(" : %d ",count[i]);
    }

    printf("\n\n%-30s%-20s","Duplicate elements","count");
    
    for(i=0;i<d;i++)
        printf("\n%-30d%-20d",dup[i],count[i]);

    
}
