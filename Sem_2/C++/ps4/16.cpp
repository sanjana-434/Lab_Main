#include <iostream>
using namespace std;

class item{
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    item();
    item(int itemNumber,int quantity,double cost);
    void setItemNumber(int it_no);
    void setQuantity(int q);
    void setCost(double c);
    void setTotalCost();
    int getItemNumber();
    int getQuantity();
    double getCost();
    double getTotalCost();

};
item::item(){
    itemNumber=0;
    quantity=0;
    cost=0;
    totalCost=0;
}
item::item(int itemNumber,int quantity,double cost){
    this->itemNumber=itemNumber;
    this->quantity=quantity;
    this->cost=cost;
    totalCost=this->quantity*this->cost;
}
void item::setItemNumber(int it_no){
    itemNumber=it_no;
}
void item::setQuantity(int q){
    quantity=q;
}
void item::setCost(double c){
    cost=c;
}
void item::setTotalCost(){
    totalCost=cost*quantity;
}
int item::getItemNumber(){
    return itemNumber;
}
int item::getQuantity(){
    return quantity;
}
double item::getCost(){
    return cost;
}
double item::getTotalCost(){
    return totalCost;
}

int main(){
    int i,q;   //item,quantity,cost
    double c;
    do{
        cout<<endl<<"Enter the item number : ";
        cin>>i;
        cout<<endl<<"Enter the quantity : ";
        cin>>q;
        cout<<endl<<"Enter the cost : ";
        cin>>c;
    }while(!(i>=0 && q>=0 && c>0));
    item i1(i,q,c);
    int ch;
    do{
        cout<<endl<<"MENU";
        cout<<endl<<"===="<<endl;
        cout<<endl<<"1) Set item number ";
        cout<<endl<<"2) Set quantity";
        cout<<endl<<"3) Set cost";
        cout<<endl<<"4) Set total cost";
        cout<<endl<<"5) Get item number";
        cout<<endl<<"6) Get cost";
        cout<<endl<<"7) Get total cost";
        cout<<endl<<"8) Get quantity";
        cout<<endl<<"9) EXIT";
        cout<<endl<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1: cout<<endl<<"Enter the item number : ";
                    cin>>i;
                    i1.setItemNumber(i);
                    break;
            case 2: cout<<endl<<"Enter the quantity : ";
                    cin>>q;
                    i1.setQuantity(q);
                    break;
            case 3: cout<<endl<<"Enter the cost : ";
                    cin>>c;
                    i1.setCost(c);
                    break;
            case 4: i1.setTotalCost();
                    break;
            case 5: cout<<endl<<"Item number  : "<<i1.getItemNumber();break;
            case 6: cout<<endl<<"Cost : "<<i1.getCost();break;
            case 7: cout<<endl<<"Total cost : "<<i1.getTotalCost();break;
            case 8: cout<<endl<<"Quantity : "<<i1.getQuantity();
        }
    }while(ch!=9);
}