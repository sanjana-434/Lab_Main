#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

class custData{
    string name;
    string address;
    string city;
    string state;
    int ZIP;
    string telephone;
    float accountBalance;
    int yy;
    int mm;
    int dd;
public:
    custData();
    custData(string,string,string,string,int,string,float,int,int,int);
    void getData();
    int update(string n);
    int display(string n);
};
custData::custData(){
    accountBalance=0;
}
custData::custData(string n,string a,string c,string s,int z,string t,float b,int y,int m,int d){
    name=n;
    address=a;
    city=c;
    state=s;
    ZIP=z;
    telephone=t;
    accountBalance=b;
    yy=y;
    mm=m;
    dd=d;
}
void custData::getData(){
    int i=0;
    cin.ignore(1000,'\n');
    cout<<endl<<"Name : ";
    getline(cin,name,'\n');
    cout<<endl<<"Address : ";
    getline(cin,address,'\n');
    cout<<endl<<"City : ";
    getline(cin,city,'\n');
    cout<<endl<<"State : ";
    getline(cin,state,'\n');
    cout<<endl<<"ZIP : ";
    cin>>ZIP;
    cin.ignore(1000,'\n');
    do{
        if(i!=0){
            cout<<endl<<"Invalid input! Enter again";
        }
        i++;
        cout<<endl<<"Telephone number : ";
        getline(cin,telephone,'\n');

    }while(!(telephone.size()==10));
    i=0;
    do{
        if(i!=0){
            cout<<endl<<"Invalid input! Enter again";
        }
        i++;
        cout<<endl<<"Account balance : ";
        cin>>accountBalance;
    }while(accountBalance<0);
    cout<<endl<<"Date of last payment : ";
    cin>>dd>>mm>>yy;
}
int custData::display(string n){
    if (name==n){
        cout<<endl<<"Name : "<<name;
        cout<<endl<<"Address : "<<address;
        cout<<endl<<"City : "<<city;
        cout<<endl<<"State : "<<state;
        cout<<endl<<"ZIP : "<<ZIP;
        cout<<endl<<"Telephone : "<<telephone;
        cout<<endl<<"Account balance : "<<accountBalance;
        cout<<endl<<"Date of last payment : "<<dd<<" / "<<mm<<" / "<<yy;
        return 1;
    }
    return 0;
}
int custData::update(string n){
    if (name==n){
        getData();
        return 1;
    }
    return 0;
}
int main(){
    int n=1;               //number of customers;
    custData c[20];
    int ch;
    int f=0;              //flag
    string cust_name;     //to update (case 2)
    do{
        cout<<endl<<setw(18)<<"MENU";
        cout<<endl<<setw(18)<<"====";
        cout<<endl<<"1) Enter new customer information";
        cout<<endl<<"2) Update customer information";
        cout<<endl<<"3) Display customer information";
        cout<<endl<<"4) Exit the program";
        cout<<endl<<endl<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                    cout<<"Enter the following details of customer "<<n+1;
                    c[n].getData();
                    n++;
                    break;
            case 2:
                    cout<<endl<<"Enter customer name to be updated : ";
                    cin.ignore(1000,'\n');
                    getline(cin,cust_name,'\n');
                    for (int i=0;i<n;i++){
                        if (c[i].update(cust_name)==1){
                            f=1;
                            break;
                        }
                    }
                    if(f==0){
                        cout<<endl<<"Customer name not found";
                    }
                    break;
            case 3: 
                    cout<<endl<<"Enter customer name to be displayed : ";
                    cin.ignore(1000,'\n');
                    getline(cin,cust_name,'\n');
                    for (int i=0;i<n;i++){
                        if (c[i].display(cust_name)==1){
                            f=1;
                            break;
                        }
                    }
                    if(f==0){
                        cout<<endl<<"Customer name not found";
                    }
                    break;


                    
        }

    }while(ch!=4);
}