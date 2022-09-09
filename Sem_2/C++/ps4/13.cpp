#include <iostream>
#include <cstring>
using namespace std;

class Address{
    int houseNo;
    string street;
    int apartmentNo;
    string city;
    string state;
    string postalCode;
public:
    Address(int h,string st,int a,string c,string s,string pc );
    Address(int h,string st,string c,string s,string pc );
    Address();
    void print();
    void getdata();
};

Address::Address(){
    houseNo=0;
    street='\0';
    apartmentNo=0;
    city='\0';
    state='\0';
    postalCode='\0';
}
Address::Address(int h,string st,int a,string c,string s,string pc ){
    houseNo=h;
    street=st;
    apartmentNo=a;
    city=c;
    state=s;
    postalCode=pc;
}
Address::Address(int h,string st,string c,string s,string pc ){
    //no apartment number 
    houseNo=h;
    street=st;
    city=c;
    state=s;
    postalCode=pc;
}
void Address::print(){
    cout<<endl<<houseNo<<" , "<<street;
    cout<<endl<<city<<" , "<<state<<" , "<<postalCode;
}
void Address::getdata(){
    int i=0;
    cout<<endl<<"Enter the following details";
    cout<<endl<<"---------------------------";
    do{
        if(i!=0){
            cout<<endl<<"Invalid input....Enter again!";
        }
        i++;
        cout<<endl<<"House Number : ";
        cin>>houseNo;
    }while(houseNo<=0);
    cin.ignore(1000,'\n');
    cout<<endl<<"Street : ";
    getline(cin,street,'\n');
    i=0;
    do{
        if(i!=0){
            cout<<endl<<"Invalid input....Enter again!";
        }
        i++;
        cout<<endl<<"Apartment number : ";
        cin>>apartmentNo;
    }while(apartmentNo<=0);
    cin.ignore(1000,'\n');
    cout<<endl<<"City : ";
    getline(cin,city,'\n');
    cout<<endl<<"State : ";
    getline(cin,state,'\n');
    cout<<endl<<"Postal code : ";
    getline(cin,postalCode,'\n');
}
int main(){
    Address Address1;
    Address1.getdata();;
    Address1.print();
}