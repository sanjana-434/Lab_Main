//CODE WRITTEN BY SANJANA R ON 14/04/2022

#include <iostream>
using namespace std;

class Customer;
class Item{
    string item_name;
    int code;
    float price;
public:
    void input();
    void display();
    friend void details_items(Item* a,const Customer& b,int& items,int& n);

};
class Customer{
    string customer_name;
    int* item_code;
public:
    Customer(int n){
        item_code=new int[n];
    }
    void input(int);
    friend void details_items(Item* a,const Customer& b,int& items,int& n);
};
void Item::input(){
    cout<<"Enter the item name : ";
    cin>>item_name;
    cout<<"Enter code : ";
    cin>>code;
    cout<<"Enter price : ";
    cin>>price;
}
void Item::display(){
    cout<<endl<<"Item name : "<<item_name;
    cout<<endl<<"Code : "<<code;
    cout<<endl<<"Price : "<<price;
}
void Customer::input(int n){
    cout<<"Customer name : ";
    cin>>customer_name;
    cout<<"Enter the Item codes : ";
    for(int i=0;i<n;i++){
        cin>>item_code[i];
    }
}
static int k;
void details_items(Item* a, const Customer& b,int& items,int& n){
    int i=0,j=0,f=0;
    for (i=0;i<items;i++){
        f=0;
        for (j=0;j<n;j++){
            if (a[i].code==b.item_code[j]){
                f=1;
                cout<<endl<<endl<<"Item "<<++k<<" is available"<<endl;
                a[i].display();
                break;
            }
        }
    }

}

int main(){
    int items,i=0;     //items = no of items to be updated
    cout<<endl<<"Enter the number of items to be updated : ";
    cin>>items;
    Item it[items];
    for(i=0;i<items;i++){
        it[i].input();
    }
    cout<<endl<<"Enter customer details : ";
    int n;
    cout<<endl<<"Enter the number of items purchased : ";
    cin>>n;
    Customer c(n);
    c.input(n);
    details_items(it,c,items,n);

}