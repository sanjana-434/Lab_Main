#include<stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char dsc[50];
    int num;
}bin;

int main()
{
    bin arr[10]={{"valve",10},{"bearing",5},{"brushing",15},{"coupling",21},{"flange",7},{"gear",5},{"gear housing",5},{"vacuum gripper",25},{"cable",18},{"rod",12}};
    l1:printf("\t\tMain Menu\n\n");
    int ch,ans;
    char name[50];
    for(int i=0;i<10;i++)
    {
        printf("%20s %10d\n",arr[i].dsc,arr[i].num);
    }
    printf("\n 1.add\n2.remove\n3.Exit\nEnter your choice");
    scanf("%d",&ch);
    if (ch==3)
        exit(1);
    printf("Enter the description of the bin");
    scanf("\n");
    gets(name);


    for(int i=0;i<10;i++)
    {
        if(strcmp(name,arr[i].dsc)==0)
        {
            ans=change(ch,&arr[i]);
            if(ans==1)
            {
                goto l1;
            }
        }
    }




}

int change(int ch,bin *a)
{

    int no=0;

                if(ch==1)
                {
                    p1:printf("Enter the value to be added\n");
                    scanf("%d",&no);
                    if(a->num+no>30)
                    {
                        printf("The value exceeds 30 enter a smaller number\n");
                        goto p1;
                    }
                    else if(no<0)
                    {
                        printf("Invalid input\n");
                        goto p1;
                    }
                    else
                    {
                        a->num=a->num+no;
                        return 1;
                    }
                }
                else if(ch==2)
                {
                    p2:printf("Enter the value to be removed\n");
                    scanf("%d",&no);
                    if(a->num-no<0 )
                    {
                        printf("Invalid input\n");
                        goto p2;
                    }
                    else
                    {
                        a->num=a->num-no;
                        return 1;
                    }
                }


}