#include <iostream>
using namespace std;

class clockType
{	
    private:
        int h, m, s;
    public:
	    void getTime(int&, int&, int&);
        void Equal(const clockType& t2);
        friend void EqualOrNot(const clockType& t1,const clockType& t2);
};
void clockType::getTime(int& h,int& m,int& s){
    this->h=h;
    this->m=m;
    this->s=s;
}
void clockType::Equal(const clockType& t2){
    //member function
    if (h==t2.h && m==t2.m && s==t2.s){
        cout<<endl<<"Equal Time";
    } 
    else{
        cout<<endl<<"Not equal";
    }
}
void EqualOrNot(const clockType& t1,const clockType& t2){
    //non member function
    if (t1.h==t2.h && t1.m==t2.m && t1.s==t2.s){
        cout<<endl<<"Equal Time";
    } 
    else{
        cout<<endl<<"Not equal";
    }
}
int main(){
    clockType time1,time2;
    int h,m,s;
    cout<<endl<<"Enter Time1 : ";
    cin>>h>>m>>s;
    time1.getTime(h,m,s);
    cout<<endl<<"Enter Time2 : ";
    cin>>h>>m>>s;
    time2.getTime(h,m,s);
    EqualOrNot(time1,time2);
    time1.Equal(time2);
}