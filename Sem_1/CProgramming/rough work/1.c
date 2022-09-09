#include <stdio.h>
#include <stdlib.h>
int main()
{
    int add(int a,int b);
    int z, *security_value ,k ,a;
    printf("Enter the amount : ");
    scanf("%d",&z);
    printf("\nEnter the value of k : ");
    scanf("%d",&k);
    security_value=(int*)malloc(k*sizeof(int)); 
    
    for(int i=0;i<k;i++)
        scanf("%d",(security_value+i));

    for(int j=0;j<k;j++)
    {
        for (int h=0;h<k;h++)
        {
            if(*(security_value+h)>*(security_value+1+h))
            {
                a=*(security_value+h+1);
                *(security_value+h+1)==*(security_value+h);
                *(security_value+h)=a;
            }
        }
    }
    for(int i=0;i<k;i++)
        printf("%d",*(security_value+i));

    int sum=0,count=0;
    for (int d=0;d<k;d++)
    {
        sum=sum+*(security_value+d);
        count+=1;
        if(sum>k)
        {
            count-=0;
            break;
        }
        if((sum<k) && (d=k-1))
        {
            d=0;
        }
    }
    printf("the total no of securities : %d",count);
    printf("\n add : %d",add(3,4,5));
}
int add(int a,int b)
{
    return (a+b);
}