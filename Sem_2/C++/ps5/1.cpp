//CODE WRITTEN BY SANJANA R ON 14/04/2022

#include <iostream>
using namespace std;

static int k;
class SavingsAccount{
    static float annualInterestRate;
    float savingsBalance;

public:
    SavingsAccount(float s){
        //constructor
        savingsBalance=s;
    }
    void calculateMonthlyInterest(){
        float monthlyInterestrate=savingsBalance*annualInterestRate/12.0;
        cout<<endl<<"Monthly interest rate of saver "<<++k<<" : "<<monthlyInterestrate;
        savingsBalance+=monthlyInterestrate;
    }
    static void modifyInterestRate(float x){
        annualInterestRate=x;
    }
    void display_balance(){
        cout<<endl<<"Savings Balance of saver "<<++k<<" : "<<savingsBalance;
    }
};
float SavingsAccount::annualInterestRate;
int main(){
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);
    SavingsAccount::modifyInterestRate(3.0);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    k=0;
    saver1.display_balance();
    saver2.display_balance();

}