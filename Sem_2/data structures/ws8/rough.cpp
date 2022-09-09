//bfs

#include <iostream>
using namespace std;

class Queue{
    int q[50];
    int f,r;
public:
    Queue(){
        f=-1;
        r=-1;
    }
    int isempty(){
        if(f==r){
            return 1;
        }
        return 0;
    }
    int isfull(){
        if(r==49){
            return 1;
        }
        return 0;
    }
    void enqueue(int elt){
        r++;
        q[r]=elt;
    }
    int dequeue(){
        f++;
        return q[f];
    }
};

void bfs(int** matrix,int src,int n){
    int* visited=new int[n];
    for (int i=0;i<n;i++){
        visited[i]=0;
    }
    Queue q1;
    q1.enqueue(src);
    visited[src]=1;
    int vis;
    while(!q1.isempty()){
        vis=q1.dequeue();
        cout<<vis<<"  ";
        for (int i=0;i<n;i++){
            if (!visited[i] && matrix[vis][i]){
                q1.enqueue(i);
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
    for (int i=0;i<e;i++){
        cin>>f>>s;
        matrix[f][s]=1;
        matrix[s][f]=1;
    }
    int src;
    cout<<endl<<"Enter source : ";
    cin>>src;
    bfs(matrix,src,n);
}
