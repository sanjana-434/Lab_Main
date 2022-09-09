#include <iostream>
using namespace std;

int week=0;
int timePeriod(int rm){
    //rm - remaining money
    if (rm<=0){
        return week;
    }
    else{
        rm=rm-20;
        week++;
        timePeriod(rm);
    }
}

int main(){
    cout<<endl<<"Number of weeks required : "<<timePeriod(250);
}
