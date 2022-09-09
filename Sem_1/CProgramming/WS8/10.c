#include <stdio.h>
int main()
{
    const int MAX_ITEMS=100;
    double a[MAX_ITEMS],b[MAX_ITEMS];
    double c[MAX_ITEMS];
    int aCount ,bCount,cCount;
    printf("Enter the number of elements of array a and b (<=100) : ");
    scanf("%d%d",&aCount,&bCount);

    cCount=aCount+bCount;
    //inputing values of array a and b
    printf("\nEnter the elements of array a in ascending order : ");
    for (int i=0;i<aCount;i++)
        scanf("%lf",&a[i]);
    printf("\nEnter the elements of array b in ascending order : ");
    for (int j=0;j<bCount;j++)
        scanf("%lf",&b[j]);

    int x=0,y=0,k=0 ; //x and y == indexes for a and b ,k =index of C
    while (x<aCount && y<bCount)
    {
        if (a[x]<b[y])
        {  
            c[k]=a[x];
            x++;
        }
        else if (a[x]>b[y]) 
        {
            c[k]=b[y];
            y++;
        }
        else
        {
            c[k]=a[x];
            x++;
            y++;
        }
        k++;
    }
        if (x==aCount)
        {
            for (int m=y;m<bCount;m++)
            {
               c[k]=b[y];
               k++;
               y++;
            }
        }
        else if(y==bCount)
        {
            for (int m=y;m<aCount;m++)
            {
                c[k]=a[x];
                k++;
                x++;
            }
        }

   //printing
   printf("\nMerged array :\n");
   for  (int h=0;h<k;h++)
       printf("%0.2lf ",c[h]);
}