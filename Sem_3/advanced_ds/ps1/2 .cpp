#include <iostream>
using namespace std;

static int currStage=2;
static int currPos=-1;
int dancersPosition(int pen,int prev,int stages){
    if (stages==currStage){
        return currPos;
    }
    else{
        currStage++;
        currPos+=(prev-pen);
        int temp=prev;
        prev=temp-pen;
        pen=temp;
        dancersPosition(pen,prev,stages);
    }
}


int main(){
    int stage;
    cout<<endl<<"Enter the number of stages : " ;
    cin>>stage;
    cout<<endl<<"Current position : "<<dancersPosition(1,-2,stage);

}
