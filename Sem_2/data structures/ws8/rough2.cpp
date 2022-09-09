#include <iostream>
using namespace std;

void dfs(int** matrix,int* visited,int src,int n){
    cout<<endl<<src;
    visited[src]=1;
    for (int i=0;i<n;i++){
        if (!visited[i] && matrix[src][i]){
            dfs(matrix,visited,i,n);
            visited[src]=1;
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
        for ( int j=0;j<n;j++){
            matrix[i][j]=0;
        }
    }
    int s,f;
    for (int i=0;i<e;i++){
        cin>>f>>s;
        matrix[s][f]=1;
        matrix[f][s]=1;
    }
    int src;
    cout<<endl<<"Enter src : ";
    cin>>src;
    int* visited=new int[n];
    for (int i=0;i<n;i++){
        visited[i]=0;
    }
    dfs(matrix,visited,src,n);
}