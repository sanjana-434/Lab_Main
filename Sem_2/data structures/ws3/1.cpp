#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            arr[i][j]=0;
        }
    }

    arr[0][1]=1;
    int r=0,c=1;
    for (int i=2;i<=9;i++){
        int cpy1=r;
        int cpy2=c;
        r--;
        c++;
        if(r==-1){
            r=2;
        }
        if(c==3){
            c=0;
        }
        
        if(arr[r][c]==0){
            arr[r][c]=i;
        }
        else{
            r=cpy1;
            c=cpy2;
            r++;
            if(r==3){
                r=0;
            }
            arr[r][c]=i;
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<< "  ";
        }
        cout<<endl;
    }
}
