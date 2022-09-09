#include <stdio.h>
#include <string.h>
typedef struct Dinosaur{
    char name[10];
    double weight;
    double length;
    int carnivorous;   
}Dinosaur;

void read(Dinosaur* x);
int equal(Dinosaur* x,Dinosaur* y);
int main()
{
    int f;
    Dinosaur d1,d2;
    read(&d1);
    read(&d2);
    f=equal(&d1,&d2);
    if (f==1)
        printf("\nTRUE");
    else   
        printf("\nFALSE");
}
void read(Dinosaur* x)
{
    static int n;
    n++;
    printf("\nEnter the details of dinosaur %d",n);
    printf("\nName : ");
    scanf("\n");
    scanf("%[^\n]s",x->name);
    printf("\nWeight : ");
    scanf("%lf",&x->weight);
    printf("\nLength : ");
    scanf("%lf",&x->length);
    printf("\nCarnivorous : ");
    scanf("%d",&x->carnivorous);
}
int equal(Dinosaur* x,Dinosaur* y)
{
    if ((x->carnivorous == y->carnivorous) && (x->length == y->length) &&  (strcmp(x->name,y->name)==0) &&  (x->weight == y->weight))
        return 1;
    else
        return 0;
}