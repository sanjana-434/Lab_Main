#include <stdio.h>
#include <math.h>
int isValidPassword(int pswd[],int len);
int main()
{
    int len,i,f;
    printf("\nEnter the lenght of the array : ");
    scanf("%d",&len);
    int pswd[len];
    printf("\nEnter the password (only numbers ) : ");
    for (i=0;i<len;i++)
        scanf("%d",&pswd[i]);
    f=isValidPassword(pswd,len);
    if (f==1)
        printf("\nThe password is valid \n");
    else
        printf("\nThe password is invalid \n");

}
int isValidPassword(int pswd[],int len)
{
    int c[10]={0};
    int i;
    c[pswd[len-1]]++;
    for (i=0;i<len-1;i++)
    {
        c[pswd[i]]++;
        if (c[pswd[i]]<=1)
        {
            if (((abs(pswd[i]-pswd[i+1])>=2) && (abs(pswd[i]-pswd[i+1])<=7)) == 0) 
                return 0;
        }
        else
            return 0;
    }
    return 1;
}