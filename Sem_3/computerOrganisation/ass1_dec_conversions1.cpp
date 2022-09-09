#include <iostream>
#include <vector>
#include <math.h>
#include<iterator>

using namespace std;

int dec_bin(int dec){
    int temp=dec;
    vector<int> bin;
    while(temp!=0 && temp!=1){
        bin.push_back(temp%2);
        temp=temp/2;
    }
    bin.push_back(temp);
    //vector<int>::iterator it;

    int dec_valid=0;
    int i=0;
    for (auto it =  bin.begin(); it != bin.end(); ++it){
        dec_valid=dec_valid+(pow(2,i)*(*it));
        i++;
    }

    for (auto it =  bin.rbegin(); it != bin.rend(); ++it){
        cout<<*it<<"  ";
        i++;
    }
    if (dec_valid==dec){
        cout<<"Output is valid!";
    }
}

int dec_oct(int dec){
    int temp=dec;
    vector<int> oct;
    while(temp>=8){
        oct.push_back(temp%8);
        temp=temp/8;
    }
    //oct.push_back(temp%8);
    oct.push_back(temp);
    //vector<int>::iterator i;
    for (auto it =  oct.rbegin(); it != oct.rend(); ++it){
        cout<<*it;
    }
    int dec_valid=0;
    int i=0;
    for (auto it =  oct.begin(); it != oct.end(); ++it){
        dec_valid=dec_valid+(pow(8,i)*(*it));
        i++;
    }
    if (dec_valid==dec){
        cout<<endl<<"Output is valid!";
    }
}

int dec_hex(int dec){
    int temp=dec;
    vector<int> hex;
    while(temp>=16){
        hex.push_back(temp%16);
        temp=temp/16;
    }
    hex.push_back(temp);
    //vector<int>::iterator i;
    for (auto it =  hex.rbegin(); it != hex.rend(); ++it){
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
    int dec_valid=0;
    int i=0;
    for (auto it =  hex.begin(); it != hex.end(); ++it){
        dec_valid=dec_valid+(pow(16,i)*(*it));
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
                    dec_bin(dec);
                    break;
            case 2:
                    dec_oct(dec);
                    break;
            case 3:
                    dec_hex(dec);
                    break;
        }
    }while(ch!=0);
}