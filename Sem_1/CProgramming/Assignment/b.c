#include <stdio.h>

int main()
{
    int cEven=0,cOdd=0,cPositive=0,cNegative=0,sumEven=0,sumOdd=0;
    int c1Digit=0,c2Digit=0,c3Digit=0,moreDigit=0;
    int i,num,c;
    int arr[20];
    printf("\nEnter the 20 numbers  :  ");
    for (i=0;i<20;i++)
        scanf("%d",&arr[i]);
    for (i=0;i<20;i++)
    {
        num=arr[i];
        if (num%2)
        {
            cOdd++;
            sumOdd+=num;
        }
        else
        {
            cEven++;
            sumEven+=num;
        }
        if (num>=0)
            cPositive++;
        else
            cNegative++;
        c=0;
        while (num)
        {
            c++;
            num/=10;
        }
        if (c==1)
            c1Digit++;
        else if (c==2)
            c2Digit++;
        else if(c==3)
            c3Digit++;
        else
            moreDigit++;

    }

    printf("\nTotal number of even integers                : %d",cEven);
    printf("\nTotal number of odd integers                 : %d",cOdd);
    printf("\nSum of all even integers                     : %d",sumEven);
    printf("\nSum of all odd integers                      : %d",sumOdd);
    printf("\nTotal number of positive numbers             : %d",cPositive);
    printf("\nTotal number of negative numbers             : %d",cNegative);
    printf("\nTotal number of one digit numbers            : %d",c1Digit);
    printf("\nTotal number of two digit numbers            : %d",c2Digit);
    printf("\nTotal number of three digit numbers          : %d",c3Digit);
    printf("\nTotal number of more than 3 digit numbers    : %d",moreDigit);
}

