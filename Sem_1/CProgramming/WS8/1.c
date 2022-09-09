#include <stdio.h>
int main()
{
    int n ;
    float gs , gp;     //gs = gross sales ,gp == 9% of gs
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int salary[n];
    //getting the inputs
    for (int i=0;i<n;i++)
    {
        gs=0 , gp=0;
        printf("\nEnter the gross sales of salespersons %d : ",i+1);
        scanf("%f",&gs);
        gp=0.09*gs;
        salary[i]=200+gp;
    }
    //counting
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
    for (int k=0;k<n;k++)
    {
        if (salary[k]>=200 && salary[k]<=299)
            a++;
        else if (salary[k]>=300 && salary[k]<=399)
            b++;
        else if (salary[k]>=400 && salary[k]<=499)
            c++;
        else if (salary[k]>=500 && salary[k]<=599)
            d++;
        else if (salary[k]>=600 && salary[k]<=699)
            e++;
        else if (salary[k]>=700 && salary[k]<=799)
            f++;
        else if (salary[k]>=800 && salary[k]<=899)
            g++;
        else if (salary[k]>=900 && salary[k]<=999)
            h++;
        else 
            i++;
    }
    
    printf("\nNumber of salaries between 200 and 299 : %d",a);
    printf("\nNumber of salaries between 300 and 399 : %d",b);
    printf("\nNumber of salaries between 400 and 499 : %d",c);
    printf("\nNumber of salaries between 500 and 599 : %d",d);
    printf("\nNumber of salaries between 600 and 699 : %d",e);
    printf("\nNumber of salaries between 700 and 799 : %d",f);
    printf("\nNumber of salaries between 800 and 899 : %d",g);
    printf("\nNumber of salaries between 900 and 999 : %d",h);
    printf("\nNumber of salaries between 1000 and over : %d",i);
}