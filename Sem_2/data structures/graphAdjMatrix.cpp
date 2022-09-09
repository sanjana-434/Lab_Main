//We can store max-50 vertices
#include <iostream>
using namespace std;

class Graph{
private:
    int V[50][50];

public:
    Graph(){
        for (int i=0;i<50;i++){
            for (int j=0;j<50;j++){
                V[i][j]=0;
            }
        }
    }
    Graph(int v){
        for (int i=0;i<v;i++){
            for (int j=0;j<v;j++){
                V[i][j]=0;
            }
        }
    }
    void display(int v){
        for (int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                cout<<V[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void addEdge(int v1,int v2){
        V[v1][v2]=1;
        V[v2][v1]=1;
    }
};
int main(){
    int v;
    cout<<endl<<"Enter the number of vertices : ";
    cin>>v;
    Graph g(v);
    g.addEdge(1,4);
    g.addEdge(1,0);
    g.addEdge(1,5);
    g.addEdge(1,4);
    g.addEdge(5,4);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.addEdge(0,2);
    g.addEdge(5,2);
    g.addEdge(2,3);
    g.display(v);
}