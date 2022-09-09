#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* a,i=-1,j;
    a=malloc(sizeof(int));
    printf("Enter the elements of the array : ");
    do
    {
        i++;
        realloc(a,sizeof(int)+sizeof(int)*i);
        scanf("%d",&a[i]);
    } while (a[i]!=-1);
    printf("The array in reverse order : ");
    for (j=i;j>=0;j--)
    {
        printf("%d ,",a[j]);
    }
}