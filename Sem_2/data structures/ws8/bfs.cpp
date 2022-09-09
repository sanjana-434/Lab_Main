#include <iostream>
using namespace std;


class Queue{
    int q[50];
    int r,f;
public:
    Queue(){
        f=-1;
        r=-1;
    }
    int isempty(){
        if (f==r){
            return 1;
        }
        return 0;
    }
    int isfull(){
        if (r==49){
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
    bool* visited=new bool[n];
    for (int i=0;i<n;i++){
        visited[i]=false;
    }
    Queue q1;
    visited[src]=true;
    int vis;
    q1.enqueue(src);
    while(!q1.isempty()){
        vis=q1.dequeue();
        cout<<endl<<vis<<"  " ;
        for (int j=0;j<n;j++){
            if (!visited[j] && matrix[vis][j]==1){
                q1.enqueue(j);
                visited[j]=true;
            }
        }
    }
}

int main(){
    int n,e;
    cout<<endl<<"Enter the number of vertices : ";
    cin>>n;
    cout<<endl<<"Enter the number of edges : ";
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
    cout<<endl<<"Enter the source  : ";
    cin>>src;
    bfs(matrix,src,n);



}