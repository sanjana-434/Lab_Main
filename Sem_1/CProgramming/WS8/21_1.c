//finding julian day by inputing d,m,y
#include <stdio.h>
int main()
{
    int d,m,y,jd=0;
    int isleapYear(int y);
    int nly[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31, 30};
    int ly[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 31, 30};
    printf("Enter the date in the format (dd/mm/yyyy): ");
    scanf("%d%d%d",&d,&m,&y);
    if (m>12)
        printf("\nInvalid input (month ) ");
    else if (isleapYear(y)==1)
    {
        if (d>ly[m])
            printf("\nInvalid input");
        else 
        {
            for (int i=0;i<m;i++)
                jd+=ly[i];
            jd+=d;
            printf("\nJulian day : %d\n",jd);

        }
    }
    else
    {
        if (d>nly[m])
            printf("\nInvalid input");
        else
        {
            for (int i=0;i<m;i++)
                jd+=nly[i];
            jd+=d;
            printf("\nJulian day : %d\n",jd);

        }
    }

}
int isleapYear(int y)
{
    int f=0;
    if ((y%4==0) && (y%100!=0) || (y%400==0))
        f=1;
    return f;
}