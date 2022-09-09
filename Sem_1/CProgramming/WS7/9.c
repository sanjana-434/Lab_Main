#include <stdio.h>
#include <math.h>
int main()
{
    int d1,d2,sum;
    int s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0,s11=0,s12=0;
    
    for (int i=0;i<36000;i++)
    {
        d1=(rand()%(6-1+1))+1;
        d2=(rand()%(6-1+1))+1;
        sum=d1+d2;
        if (sum==2)
            s2+=1;
        if (sum==3)
            s3+=1;
        if (sum==4)
            s4+=1;
        if (sum==5)
            s5+=1;
        if (sum==6)
            s6+=1;
        if (sum==7)
            s7+=1;
        if (sum==8)
            s8+=1;
        if (sum==9)
            s9+=1;
        if (sum==10)
            s10+=1;
        if (sum==11)
            s11+=1;
        if (sum==12)
            s12+=1;
    }
        printf("2  : %6d (%f)\n",s2,s2/36000.0);
        printf("3  : %6d (%f)\n",s3,s3/36000.0);
        printf("4  : %6d (%f)\n",s4,s4/36000.0);
        printf("5  : %6d (%f)\n",s5,s5/36000.0);
        printf("6  : %6d (%f)\n",s6,s6/36000.0);
        printf("7  : %6d (%f)\n",s7,s7/36000.0);
        printf("8  : %6d (%f)\n",s8,s8/36000.0);
        printf("9  : %6d (%f)\n",s9,s9/36000.0);
        printf("10 : %6d (%f)\n",s10,s10/36000.0);
        printf("11 : %6d (%f)\n",s11,s11/36000.0);
        printf("12 : %6d (%f)\n",s12,s12/36000.0);
        
}