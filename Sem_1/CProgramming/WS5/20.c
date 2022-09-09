#include <stdio.h>            
int main()
{
    int manuCode[5] , productCode[5] , checkDigit ;
    int a,b,c;
    printf("\nEnter the manufacturer code : ");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&manuCode[i]);
    }
    printf("\nEnter the product code : ");
    for (int j=0;j<5;j++)
    {
        scanf("%d",&productCode[j]);
    }
    printf("\nEnter the check digit : ");
    scanf("%d",&checkDigit);
    
    a=(manuCode[1]+manuCode[3]+productCode[0]+productCode[2]+productCode[4])*3;
    b=(manuCode[0]+manuCode[2]+manuCode[4]+productCode[1]+productCode[3]+a)%10;
    c=10-b;
    if (c==checkDigit)
    {
        printf("\nit is an UPC value \n");
    }else{
        printf("\nit is not an UPC value \n");
    }
}