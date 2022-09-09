//CODE WRITTEN BY SANJANA R ON 14/04/2022

#include <iostream>
#include <iomanip>
using namespace std;

static int k;

class Employee{
    int employee_id;
    string name;
    string department;
    float salary;
    string designation;
public:
    void display();
    void input();
    friend void display(Employee& a);
    friend int count(Employee& a,int& c);
    friend void sort(Employee* arr);
};
void Employee::input(){
    cout<<endl<<"Enter details of employee "<<++k<<" : ";
    cout<<endl<<"--------------------------";
    cout<<endl<<"Employee id : ";
    cin>>employee_id;
    cout<<endl<<"Name : ";
    cin>>name;
    cout<<endl<<"Department : ";
    cin>>department;
    cout<<endl<<"Salary : ";
    cin>>salary;
    cout<<endl<<"Designation : ";
    cin>>designation;
}
void display(Employee& a){
    cout<<endl<<endl<<setw(15)<<a.employee_id<<setw(15)<<a.name<<setw(15)<<a.department<<setw(15)<<a.salary<<setw(15)<<a.designation;
}
int count(Employee& a,int& c){
    if (a.salary>50000){
        c++;
    }
}
void sort(Employee* arr){
    string temp1;
    int temp2;
    float temp3;
    for (int i=0;i<3;i++){
        if (arr[i].department>arr[i+1].department){
            temp1=arr[i].department;
            arr[i].department=arr[i+1].department;
            arr[i+1].department=temp1;
            temp1=arr[i].designation;
            arr[i].designation=arr[i+1].designation;
            arr[i+1].designation=temp1;
            temp1=arr[i].name;
            arr[i].name=arr[i+1].name;
            arr[i+1].name=temp1;
            temp2=arr[i].employee_id;
            arr[i].employee_id=arr[i+1].employee_id;
            arr[i+1].employee_id=temp2;
            temp3=arr[i].salary;
            arr[i].salary=arr[i+1].salary;
            arr[i+1].salary=temp3;
            i=-1;
        }
    }
    cout<<endl<<"Displaying the details of all the employees department wise";
    cout<<endl<<"===========================================================";
    cout<<endl<<endl<<setw(15)<<"Employee id"<<setw(15)<<"Name"<<setw(15)<<"Department"<<setw(15)<<"Salary"<<setw(15)<<"Designation";
    for (int i=0;i<4;i++){
        display(arr[i]);
    }
}
int main(){
    int i=0;
    Employee e[4];
    for (i=0;i<4;i++){
        e[i].input();
    }
    //displaying details
    cout<<endl<<"Displaying the details of all the employees";
    cout<<endl<<"===========================================";
    cout<<endl<<endl<<setw(15)<<"Employee id"<<setw(15)<<"Name"<<setw(15)<<"Department"<<setw(15)<<"Salary"<<setw(15)<<"Designation";
    for (i=0;i<4;i++){
        display(e[i]);
    }

    //sorting - department wise
    sort(e);

    //count = no of employees - salary>50000
    int c=0;
    for (i=0;i<4;i++){
        count(e[i],c);
    }
    cout<<endl<<endl<<"Number of employees getting salary more than 50,000 : "<<c;


}