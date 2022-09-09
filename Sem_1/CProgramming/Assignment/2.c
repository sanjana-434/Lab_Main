#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int c_even=0 , c_odd=0 , s_even=0 , s_odd=0 , c_positive=0 , c_negative=0;
    int c_1d=0 , c_2d=0 , c_3d=0 , c_md=0 ;

    //inputing 20 integers
    int num[20];
    int i;
    printf("\nEnter 20 integers :  ");
    for (i=0;i<20;i++)
        scanf("%d",num+i);
    

    for (i=0;i<20;i++)
    {
        if (num[i]%2==0)
        {
            c_even++;   
            s_even+=num[i];
        }
        else
        {
            c_odd++;    
            s_odd+=num[i];
        }

        if (num[i]>0)
            c_positive++;
        else if (num[i]<0)
            c_negative++;


        if (num[i]>999 || num[i]<-999)
            c_md++;
        else if (num[i]>99 || num[i]<-99)
            c_3d++;
        else if (num[i]>9 || num[i]<-9)
            c_2d++;
        else
            c_1d++;
    }

    printf("\nNumber of odd numbers                  :  %d",c_odd);
    printf("\nNumber of even numbers                 :  %d",c_even);
    printf("\nSum of all even numbers                :  %d",s_even);
    printf("\nSum of all odd numbers                 :  %d",s_odd);
    printf("\nNumber of positive numbers             :  %d",c_positive);
    printf("\nNumber of negative numbers             :  %d",c_negative);
    printf("\nNumber of 1 digit numbers              :  %d",c_1d);
    printf("\nNumber of 2 digit numbers              :  %d",c_2d);
    printf("\nNumber of 3 digit numbers              :  %d",c_3d);
    printf("\nNumber of more than 3 digit numbers    :  %d\n",c_md);

}