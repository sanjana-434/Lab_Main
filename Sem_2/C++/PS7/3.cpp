#include <iostream>
using namespace std;

class worker{
protected:
    string name;
    float salaryRate;
    int hoursWorked;
public:
    void getName(){
        cin.ignore(1000,'\n');
        cout<<endl<<"Enter Name : ";
        getline(cin,name,'\n');
    }
    void getSalaryRate(){
        cout<<endl<<"Enter Salary Rate : ";
        cin>>salaryRate;
    }
    void putName(){
        cout<<endl<<"Name : "<<name;
    }
    void putSalaryRate(){
        cout<<endl<<"Salary Rate : "<<salaryRate;
    }
    void getHours(){
        cout<<endl<<"Enter hours worked : ";
        cin>>hoursWorked;
    }
    void putHours(){
        cout<<endl<<"Hours worked : "<<hoursWorked;
    }
};
class hourlyWorker:public worker{
private:
    float amount;
public:
    void getdata(){
        getName();
        getHours();
        getSalaryRate();
    }
    void putdata(){
        putName();
        putHours();
        putSalaryRate();
        cout<<endl<<"Amount : "<<amount;
    }
    void calculateAmount();
};
void hourlyWorker::calculateAmount(){
    if (hoursWorked<=40){
        amount=salaryRate*40;
    }
    else{
        amount=(salaryRate*40)+((hoursWorked-40)*(salaryRate*0.75+salaryRate));
    }
}

class salariedWorker:public worker{
private:
    float amount;
public:
    void getdata(){
        getName();
        getHours();
        getSalaryRate();
    }
    void putdata(){
        putName();
        putHours();
        putSalaryRate();
        cout<<endl<<"Amount : "<<amount;
    }
    void calculateAmount();
};
void salariedWorker::calculateAmount(){
    if (hoursWorked<=40){
        amount=salaryRate*hoursWorked;
    }
    else{
        amount=(salaryRate*40)+((hoursWorked-40)*(salaryRate*0.50+salaryRate));
    }
}
int main(){
    salariedWorker s1;
    hourlyWorker h1;
    cout<<endl<<"Enter the details of hourly worker ";
    cout<<endl<<"-----------------------------------";
    h1.getdata();
    cout<<endl<<"Enter the details of salaried worker ";
    cout<<endl<<"-----------------------------------";
    s1.getdata();
    h1.calculateAmount();
    s1.calculateAmount();
    cout<<endl<<"Details of Hourly worker";
    cout<<endl<<"------------------------";
    h1.putdata();
    cout<<endl<<endl<<"Details of Salaried worker";
    cout<<endl<<"------------------------";
    s1.putdata();

}
