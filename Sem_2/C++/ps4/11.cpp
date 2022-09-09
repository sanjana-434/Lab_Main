#include <iostream>
using namespace std;

class CAccount{
    int accountNumber;
    float accountBalance;
    static int count;

public:
    CAccount();
    CAccount(int ,float);
    void getdata();
    void change(int accNo);
    void inputtransaction();
    void printBalance();
    static void updateCount(){
        count++;
    }
    static int returnCount(){
        return count;
    }
};
int CAccount::count=0;
CAccount::CAccount(){
    accountBalance=0;
    accountNumber=0;
}
CAccount::CAccount(int a,float b){
    accountNumber=a;
    accountBalance=b;
}
void CAccount::getdata(){
    cout<<endl<<"Enter account number  : ";
    cin>>accountNumber;
    cout<<endl<<"Enter account balance : ";
    cin>>accountBalance;
}
void CAccount::change(int accNo){
    if(accNo==accountNumber){
        inputtransaction();
    }
}
void CAccount::inputtransaction(){
    int i=0;
    char transactionType;
    float TransactionAmount;
    do{
        if(i!=0){
            cout<<endl<<"Invalid input! Enter again";
        }
        i++;
        cout<<endl<<"Enter the typr of transaction : ";
        cin>>transactionType;
    }while(!(transactionType=='D' || transactionType=='W'));
    i=0;
    do{
        if(i!=0){
            cout<<endl<<"Invalid input! Enter again";
        }
        i++;
        cout<<endl<<"Transaction Amount : "; 
        cin>>TransactionAmount;
    }while(TransactionAmount<=0);
    if (transactionType=='D'){
        accountBalance+=TransactionAmount;
    }
    else{
        accountBalance-=TransactionAmount;
    }
}
void CAccount::printBalance(){
    cout<<endl<<"Account Number  : "<<accountNumber;
    cout<<endl<<"Account Balance : "<<accountBalance;
}
int main(){
    CAccount account[20];
    int ch;
    do{
        cout<<endl<<"MENU";
        cout<<endl<<"----";
        cout<<endl<<"1) Add account";
        cout<<endl<<"2) Print Balance ";
        cout<<endl<<"3) Input transaction";
        cout<<endl<<"4) Display Total number of customer";
        cout<<endl<<"5) EXIT";
        cout<<endl<<endl<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                    account[CAccount::returnCount()].getdata();
                    CAccount::updateCount();
                    break;
            case 2:
                    for (int i=0;i<CAccount::returnCount();i++){
                        cout<<endl<<"Account "<<i+1;
                        account[i].printBalance();
                    }
                    break;
            case 3:
                    int accNo;
                    cout<<endl<<"Enter account number  : ";
                    cin>>accNo;
                    for (int i=0;i<CAccount::returnCount();i++){
                        account[i].change(accNo);
                    }
                    break;
            case 4:
                    cout<<endl<<"Total number of customers : "<<CAccount::returnCount();
                    break;
        }
    }while (ch!=5);
    
}