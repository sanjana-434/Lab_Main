#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int dec_conversions(int dec,int type){   //type - bin(2) , oct(8) , hex(16)
    int temp=dec;
    vector<int> n;   //n can be bin ,oct or hex  
    while(temp!=0 && temp!=1){
        n.push_back(temp%type);
        temp=temp/type;
    }
    n.push_back(temp);
    //vector<int>::iterator i;

    if (type==16){
        for (auto it =  n.rbegin(); it != n.rend(); ++it){
            switch(*it){
                case 10: cout<<"A";break;
                case 11: cout<<"B";break;
                case 12: cout<<"C";break;
                case 13: cout<<"D";break;
                case 14: cout<<"E";break;
                case 15: cout<<"F";break;
                default: cout<<*it;
            }
        }
    }
    else{
        for (auto it =  n.rbegin(); it != n.rend(); ++it){
            cout<<*it<<"  ";
        }
    }

    int dec_valid=0;
    int i=0;
    for (auto it =  n.begin(); it != n.end(); ++it){
        dec_valid=dec_valid+(pow(type,i)*(*it));
        i++;
    }

    if (dec_valid==dec){
        cout<<endl<<"Output is valid!";
    }
}

int main(){
    int dec;
    int ch;
    do{
        cout<<endl<<"Enter the decimal number  : " ;
        cin>>dec;

        cout<<endl<<"What conversion do you want to do ? Enter 0 to exit";
        cout<<endl<<"1) Binary";
        cout<<endl<<"2) Octal";
        cout<<endl<<"3) Hexadecimal";
        cout<<endl<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                    dec_conversions(dec,2);
                    break;
            case 2:
                    dec_conversions(dec,8);
                    break;
            case 3:
                    dec_conversions(dec,16);
                    break;
        }
    }while(ch!=0);
}