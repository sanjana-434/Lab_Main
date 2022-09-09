#include <iostream>
using namespace std;

class Cricket{
    string playerName;
    string teamName;
    float battingAverage;
public:
    void read();
    void display();
    void display(Cricket* c,int n);
};
void Cricket::read(){
    cin.ignore(1000,'\n');
    cout<<endl<<"Enter Player name : ";
    getline(cin,playerName,'\n');
    cout<<endl<<"Enter team name : ";
    getline(cin,teamName,'\n');
    int i=0;
    do{
        if (i!=0){
            cout<<endl<<"INVALID INPUT! ENTER AGAIN";
        }
        i++;
        cout<<endl<<"Enter batting average : ";
        cin>>battingAverage;
    }while(battingAverage<0);
}
void Cricket::display(){
    cout<<endl<<endl<<"Player name      : "<<playerName;
    cout<<endl<<"Team name        : "<<teamName;
    cout<<endl<<"Batting Average  : "<<battingAverage;
}
void Cricket::display(Cricket* c,int n){
    for (int i=0;i<n;i++){
        cout<<endl<<endl<<"Player name      : "<<c[i].playerName;
        cout<<endl<<"Team name        : "<<c[i].teamName;
        cout<<endl<<"Batting Average  : "<<c[i].battingAverage;
    }
}
int main(){
    int i;
    int n;
    cout<<endl<<"Enter number of players : ";
    cin>>n;
    Cricket cricket[n];
    cout<<endl<<"Enter the details of cricket players";
    cout<<endl<<"------------------------------------";
    for (i=0;i<n;i++){
        cricket[i].read();
    }
    int ch;
    do{
        cout<<endl<<"What do you want to choose? Enter 0 to exit";
        cout<<endl<<"1) Display by passing one object at a time ";
        cout<<endl<<"2) Display by passing array of objects";
        cout<<endl;
        cin>>ch;
        switch(ch){
            case 1: for (i=0;i<n;i++){
                        cricket[i].display();
                    }
                    break;
            case 2: cricket[i].display(cricket,n);
                    break;
        }
    }while(ch!=0);
}