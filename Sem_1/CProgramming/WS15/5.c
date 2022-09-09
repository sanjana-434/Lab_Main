#include <stdio.h>

typedef struct 
{
    int r;
    int i;
}complex;

void read(complex* x);
void sum(complex* x,complex*y,complex* s);
void diff(complex* x,complex*y,complex* d);
void mul(complex* x,complex*y,complex* m);
void print(complex x);

int main()
{
    complex c1,c2,s,d,m;
    read(&c1);
    read(&c2);
    sum(&c1,&c2,&s);
    diff(&c1,&c2,&d);
    mul(&c1,&c2,&m);
    printf("\nSum of the complex numbers : ");
    print(s);
    printf("\nDifference of the complex numbers : ");
    print(d);
    printf("\nMultiplication of the complex numbers : ");
    print(m);

}
void read(complex* x)
{
    static int n;
    n++;
    printf("Enter the complex number %d : ",n);
    printf("\nReal part : ");
    scanf("%d",&x->r);
    printf("\nImaginery part : ");
    scanf("%d",&x->i);
}
void sum(complex* x,complex*y,complex* s)
{
    s->r = x->r + y->r;
    s->i = x->i + y->i;
}
void diff(complex* x,complex*y,complex* d)
{
    d->r = x->r - y->r;
    d->i = x->i - y->i;
}
void mul(complex* x,complex*y,complex* m)
{
    m->r=(x->r*y->r)-(x->i*y->i) ;
    m->i=(x->i * y->r)-(x->r * y->i);
}
void print(complex x)
{
    if (x.i<0)
        printf("%d %di",x.r,x.i);
    else
        printf("%d + %di",x.r,x.i);
}