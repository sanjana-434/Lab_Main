#include <iostream>
using namespace std;

class HeartRates;
class date{
    int year;
    int month;
    int day;
public:
    date(int d,int m,int y){
        year=y;
        month=m;
        day=d;
    } 
    friend class HeartRates;

};
class HeartRates{
    string firstName;
    string lastName;
    date dob;  
    int age;         
    int max_hr;
    int target_hr[2];
public:
    HeartRates(string& f,string& l,date& dob);
    int getAge(date&);
    int getMaximumHeartRate();
    int* getTargetHeartRate();

};
HeartRates::HeartRates(string& f,string& l,date& d){
    firstName=f;
    lastName=l;
    dob=d;
}
int HeartRates::getMaximumHeartRate(){
    max_hr=220-age;
    return max_hr;
}
int* HeartRates::getTargetHeartRate(){
    target_hr[0]=max_hr*0.5;
    target_hr[1]=max_hr*0.85;
    return target_hr;
}

int HeartRates::getAge(date& d1){
    int cd,cm,cy;  //current day,month,year
    cout<<endl<<"Enter the current year : ";
    cin>>cy;
    cout<<endl<<"Enter the current month : ";
    cin>>cm;
    cout<<endl<<"Enter the current day : ";
    cin>>cd;
    if (cm>=d1.month){
        age= cy-d1.year;
        return age;
    }
    else{
        age= cy-d1.year-1;
        return age;
    }
}
int main(){
    string f;
    string l;
    int d,y,m; //d=day,m=month,y=year (date of birth)
    cout<<endl<<"Enter your first name : ";
    cin>>f;
    cout<<endl<<"Enter your last name  : ";
    cin>>l;
    cout<<endl<<"Enter your date of birth (d/m/y) : ";
    cin>>d>>m>>y;
    date d1(d,m,y);
    HeartRates person1(f,l,d1);
    cout<<endl<<"Age of the person  : "<<person1.getAge(d1);
    cout<<endl<<"Maximum Heart Rate : "<<person1.getMaximumHeartRate();
    int* t_hr=person1.getTargetHeartRate();  //target heart rate
    cout<<endl<<"Traget Heart Rate  : "<<t_hr[0]<<" - "<<t_hr[1];

}