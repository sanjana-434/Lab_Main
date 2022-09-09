//Menu driven program 
#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,ans;
    printf("Enter the values of x and y : ");
    scanf("%d%d",&x,&y);
    int option;
    do
    {   
    printf("1 . x power y\n");
    printf("2 . print x for y times\n");
    printf("3 . sine of x\n");
    printf("4 . biggest among x and y\n");
    printf("5 . x+y\n");
    printf("0 . Exit");

    printf("\nEnter the option : ");
    scanf("%d",&option);
    
    switch (option)
    {
    case 1: printf ("%d\n",pow(x,y));
            break;
    case 2: ans=1;
            for(int i=0;i<y;i++)
            {
                ans=ans*x;
            }
            printf("%d\n",ans);
            break;
    case 3: ans=sin(x);
            printf("%d\n",ans);
            break;
    case 4:if (x>y)
                ans=x;
            else
                ans=y;
            printf("%d\n",ans);
            break;
    case 5: ans=x+y;
            printf("%d\n",ans);
            break;
    }
    }while(option!=0);

}