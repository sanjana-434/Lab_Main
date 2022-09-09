#include <stdio.h>
struct week_t{
int d,m,y;
};
weekly_report();
void enterDetails(int m,char name[],char roll[]);
int week(struct week_t date);
int printNumber();
void printDetails();

int week(struct week_t date){
struct week_t weekday[7];
struct week_t
temp={temp.d=date.d-1,temp.m=date.m,temp.y=date.y};
if(date.d>6){
if(date.d==1){
if(date.m==2||date.m==4||date.m==6||date.m==9||date.m==11){
temp.d=31;
temp.m=date.m-1;
}
}
}
else{
int a;
for(a=0;a<7;a++){
weekday[a]=temp;
temp.d-=1;
}
}
}

int printNumber()
{
FILE *f;
int c=0;
f=fopen("analysis.txt","r");

while(!feof(f)){
char ch;
ch=fgetc(f);
if(ch=='\n'){
c++;
}
}
fclose(f);
printf("The number of people who used this program is:%d.\n",c);
return c;
}

void printDetails()
{
FILE *f;
f=fopen("analysis.txt","r");
while(!feof(f)){
char ch;
ch=fgetc(f);
printf("%c",ch);
}
fclose(f);
}

void enterDetails(int m,char name[],char roll[])
{
FILE *f;
f=fopen("analysis.txt","a");
fprintf(f,"\n\t\t\t\t\t\t\t\t\t%s %s %d\n",roll,name,m);
fclose(f);
}

int weekly_report()
{
printNumber();
printDetails();
return 0;
}