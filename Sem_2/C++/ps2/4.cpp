#include <iostream>
#include <cstring>
using namespace std;

int find(char* s,int l);
char ch[5][5];
int main()
{
    char str[25];
    int i,j;
    cout<<"Enter the characters for the 2d array :  ";
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            cin>>ch[i][j];
        }
    }
    cout<<endl<<"\nEnter the string to be searched  : ";
    cin>>str;
    int l=strlen(str);
    int r=find(str,l);
    if (r==1)
        cout<<endl<<"Found"<<endl;
    else   
        cout<<endl<<"Not found"<<endl;
    
}
int find(char* s,int l)
{
    int count=0;
    int i,j,k;
    for (i=0;i<l;i++)
    {
        for (j=0;j<5;j++)
        {
            for (k=0;k<5;k++)
            {
                if (s[i]!='*' && ch[j][k]!='*' && s[i]==ch[j][k])
                {
                    count++;
                    s[i]='*';
                    ch[j][k]='*';
                }
            }
        }
    }
    if (count==l)
        return 1;
    else
        return 0;
}