//CODE WRITTEN BY SANJANA R ON 14/04/2022

#include <iostream>
using namespace std;

static int k;
class PASSENGER;
class AIR{
    string name;
    string source;
    string destination;
    int capacity;
public:
    void input();
    friend int check_s_d(const AIR& a,const PASSENGER& b);
    friend int check_tickets(AIR& a,const PASSENGER& b);

};
void AIR::input(){
    cout<<endl<<"Enter Details "<<++k<<" : ";
    cout<<endl<<"Name : ";
    cin>>name;
    cout<<endl<<"Source : ";
    cin>>source;
    cout<<endl<<"Destination : ";
    cin>>destination;
    cout<<endl<<"Capacity : ";
    cin>>capacity;

}
class PASSENGER {
    string source;
    string destination;
    int tickets;    //number of tickets
public:
    void input();
    friend int check_s_d(const AIR& d,const PASSENGER& b);
    friend int check_tickets(AIR& d,const PASSENGER& b);
};

void PASSENGER::input(){
    cout<<"Enter Passenger's details : ";
    cout<<endl<<"Source : ";
    cin>>source;
    cout<<endl<<"Destination : ";
    cin>>destination;
    cout<<endl<<"Number of tickets : ";
    cin>>tickets;
}
int check_s_d(const AIR& d,const PASSENGER& b){
    //funtion that checks the source and destination
    if (d.source==b.source && d.destination==b.destination){
        return 1;
    }
    return 0;
}
int check_tickets(AIR& d,const PASSENGER& b){
    //function that ckecks the availability of tickets
    if (b.tickets<=d.capacity){
        return 1;
    }
    return 0;
}
int main(){
    AIR a[3];
    int i=0,f=0,q=0;
    int index=-1;      //index if s and d are found
    for (i=0;i<3;i++){
        a[i].input();
    }
    PASSENGER b;
    b.input();
    for (i=0;i<3;i++){
        f=check_s_d(a[i],b);
        if (f==1)
            cout<<endl<<"Source and destination are available";
            index=i;
            break;
    }
    if (f==0){
        cout<<endl<<"Source and destination are not available";
    }
    if (f==1){
        q=check_tickets(a[index],b);
        if (q==1){
            cout<<endl<<"Tickets are available";
        }
        else{
            cout<<endl<<"Tickets are not available";
            cout<<endl<<"Failure!!";
        }
    }
}