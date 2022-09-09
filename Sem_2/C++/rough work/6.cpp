#include <iostream>
using namespace std;
/*
class sanjana{
private:
    static const int i;
    int h,a;
public:
    sanjana(int x,int b){
        h=x;
        a=b;
    }
    int access(){
        cout<<h<< "  "<<a;
    }

};
int main(){
    
    sanjana j(3,5);
    j.access();

}*/

/*
int main(){
    int ival = 1024;
    cout<<endl<<"1.  "<<ival<<"   "<<&ival;
    int *pi = &ival;
    cout<<endl<<"2.  "<<pi<<"    "<<*pi<<"    "<<&pi;
    int *pi2 = new int(1024);
    cout<<endl<<"3.  "<<pi2<<"    ";
    int *pi3 = new int[1024];
    cout<<endl<<"4.  "<<pi3++<<pi3;
}*/
/*
int main(){
    int *pi = new int(0);
    int *pia = new int[10];
while (*pi < 10){
        pia[*pi] = *pi;
        cout<<endl<<*(pia+*pi)<<  "  "<<*pi;
        *pi = *pi+1;
          }
delete pi;
delete [] pia;

}*/
/*
int foobar(int *pi) {
    cout<<endl<<"pi  : "<<pi;
    *pi = 1024;
    cout<<endl<<"*pi  : "<<*pi;
    return *pi;
}
int main(){
	int *pi2 = 0;
    cout<<endl<<"pi2 : "<<pi2;
    int ival = foobar(pi2);
    cout<<endl <<"ival :  "<<ival;
return 0;
}*/
/*
class ex
{
	static int i,j;
public:
	ex() {i=1; i++; j++; cout<< j<< " "<<i<<" "; }
};
int ex::i=0;
int ex::j=0;
int main() 
{	ex e1,e2, e3;	 }
*/
/*
void swap(int& a, int b) { 
int temp = a; 
     a = b; 
     b = temp;
 } 
int main() { 
int a = 4;
int b = 2; 
int c = 5; 
swap(a,b); 
swap(b,c);
cout<< a << "\n" << b << "\n" << c; 
}*/

class clockType
{	
private:
    int h, m, s;
public:
	void getTime(int&, int&, int&);
};
//member function
void clockType::getTime(int& a,int& b,int& c){
    h=a;
    m=b;
    s=c;
}
int check(int &a1,int &b1,int &c1,int &a2,int &b2,int &c2){
    if (a1==a2){
        if (b1==b2){
            if (c1==c2){
                return 1;
            }
        }
    }
    return 0;
    
}
int main(){
    clockType c1,c2;
    int h=4,m=9,s=5;
    c1.getTime(h,m,s);
    c2.getTime(h,m,s);
    cout<<check()
}


