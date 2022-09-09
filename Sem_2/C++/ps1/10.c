#include <stdio.h>

enum web{EDUCATIONAL,SOCIAL_NETWORKING,ENTERTAINMENT};

typedef struct 
{
    char URL[30];
    int num_downloads;
    enum web typeof_webpage;

}webpage;
void display(webpage* y,char* str);
void hit(webpage* x);

int main()
{
    int n;
    char j;
    webpage w1={"http://www.facebook.com",0,SOCIAL_NETWORKING},w2={"http://www.cplusplus.com",0,EDUCATIONAL},w3={"http://youtube.com",0,ENTERTAINMENT};
    do{
    l1:
    printf("\n1) SOCIAL_NETWORKING");
    printf("\n2) EDUCATIONAL");
    printf("\n3) ENTERTAINMENT");
    printf("\nSelect (1,2,3) for webpage : ");
    scanf("%d",&n);
    if (n==1)
        hit(&w1); 
    else if (n==2)
        hit(&w2);
    else if(n==3)
        hit(&w3);
    else
    {
        printf("\nINVALID INPUT ...ENTER AGAIN");
        goto l1;
    }
    printf("\nEnter y to continue : ");
    scanf("%*c%c",&j);
    }while (j=='y');

    printf("\n\nDisplaying the webpage  : ");
    printf("\n=======================");
    printf("\n\n%-30s|%-20s|%-20s","URL","Num_downloads","Typeof_webpage");
    printf("\n------------------------------------------------------------------------");
    display(&w1,"SOCIAL_NETWORKING");
    display(&w2,"EDUCATIONAL");
    display(&w3,"ENTERTAINMENT");
    
}
void hit(webpage* x)
{
    x->num_downloads++;
}

void display(webpage* y,char* str)
{
    printf("\n%-30s|%-20d|%-20s",y->URL,y->num_downloads,str);
}