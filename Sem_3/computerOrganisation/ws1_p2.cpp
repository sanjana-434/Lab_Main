#include<iostream>
#include <bits/stdc++.h>
using namespace std;
string sumBase(string a,string b, int base)
{
	int lena, lenb;
	lena = a.size();
	lenb = b.size();
	string sum="", s="";
	int diff;
	diff=abs(lena-lenb);
	for(int i=1;i<=diff;i++)
		s+="0";
	if (lena<lenb)
		a=s+a;
	else
		b=s+b;
	int curr,carry=0;
	for(int i=max(lena,lenb)-1;i>-1;i--)
    {
		curr=carry+(a[i]-'0')+(b[i] - '0');
		carry=curr/base;
		curr=curr%base;
		sum=(char)(curr+'0')+sum;
	}
	if(carry>0)
		sum=(char)(carry+'0')+sum;
	return sum;
}
int getDifference(int B, int X, int Y)
{
    int res=0;
    int carry=0;
    int power=1;
    while(X>0)
    {
        int n1=X%10;
        int n2=Y%10;
        X=X/10;
        Y=Y/10;
        int temp=n1-n2+carry;
        if(temp<0)
        {
            carry=-1;
            temp+=B;
        }
        else
        {
            carry=0;
        }
        res+=temp*power;
        power=power*10;
    }
    return res;
}

int main()
{
	string a,b,sum;
	int x,y,base,diff,ch;
    cout<<"1.Addition\n2.Subtraction"<<endl;
    l1:cout<<"Enter choice:";
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter two numbers:";
        cin>>a;
        cin>>b;
        cout<<"Enter base: ";
        cin>>base;
        sum=sumBase(a,b,base);
        cout<<"Sum: "<<sum<<endl;
    }
    else if(ch==2)
    {
        cout<<"Enter two numbers:";
        cin>>x>>y;
        cout<<"Enter base: ";
        cin>>base;
        diff=getDifference(base,x,y);
        cout<<"Difference: "<<diff<<endl;
    }
    else
    {
        cerr<<"Invalid choice..Enter again.."<<endl;
        goto l1;
    }
}

