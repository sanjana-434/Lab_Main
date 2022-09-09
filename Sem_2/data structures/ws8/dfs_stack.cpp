#include <iostream>
using namespace std;

class stack{
    int s[20];
    int t;
public:
    stack(){
        t=-1;
    }
    int isempty(){
        if (t<0){
            return 1;
        }
        return 0;
    }
    int isfull(){
        if (t==19){
            return 1;
        }
        return 0;
    }
    void push(int elt){
        if (isfull()){
            cout<<endl<<"Overflow!" ;
        }
        else{
            t++;
            s[t]=elt;
        }
    }
    int pop(){
        if (isempty()){
            cout<<endl<<"Underflow!" ;
        }
        else{
            int item=s[t];
            t--;
            return item;
        }
    }

};

void dfs(int** matrix,int src,int n){
    int* visited=new int[n];
    for (int i=0;i<n;i++){
        visited[i]=0;
    }
    stack s;
    cout<<endl<<"***"<<src;
    s.push(src);
    visited[src]=1;
    int vis;
    while(!s.isempty()){
        vis=s.pop();
        cout<<"###"<<vis<< "  ";
        for (int i=0;i<n;i++){
            if(!visited[i] && matrix[vis][i]){
                s.push(i);
                visited[i]=1;
            }
        }
    }

}

int main(){
    int n,e;
    cout<<endl<<"Enter n : ";
    cin>>n;
    cout<<endl<<"Enter e : ";
    cin>>e;
    int** matrix=new int*[n];
    for (int i=0;i<n;i++){
        matrix[i]=new int[n];
        for (int j=0;j<n;j++){
            matrix[i][j]=0;
        }
    }
    int f,s;
    for (int i;i<e;i++){
        cin>>f>>s;
        matrix[f][s]=1;
        matrix[s][f]=1;
    }
    int src;
    cout<<endl<<"Enter src : ";
    cin>>src;
    dfs(matrix,src,n);
}