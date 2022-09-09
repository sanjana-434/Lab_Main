//Inverted Full Pyramid Pattern

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=(2*n-1);j++)
        {
            if (j<=(n-1))
                printf("%c ",(i>j)?' ':'*');
            else 
                printf("%c ",(i+j)<(2*n-1)?'*':' ');
        }
        printf("\n");
    }
}