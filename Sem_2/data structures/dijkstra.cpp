/*
#include <iostream>
using namespace std;
int v=5;

int minDistAdjNode(int* graph[],int visited[],int node,int dist[]){
    int min=INT_MAX;
    int adjVertex=-1; 
    for (int i=0;i<v;i++){
        if (graph[node][i]!=0 && visited[i]==0){
            min=INT_MAX;
            adjVertex=i;
            break;
        }
    }
    for (int i=0;i<v;i++){
        if (graph[node][i]!=0 && visited[i]==0){
            if (min>dist[i]){
                adjVertex=i;
            }
        }
    }
    return adjVertex;
}
void dijkstra(int* graph[],int src){
    int dist[v];
    int visited[v];
    int previousNode[v];
    for (int i=0;i<v;i++){
        dist[i]=INT_MAX;
        visited[i]=0;
        previousNode[i]=i;
    }
    dist[src]=0;
    int node=src;
    int adjNode=minDistAdjNode(graph,visited,node,dist);
    if ((dist[node]+graph[node][adjNode])<dist[adjNode]){
        dist[adjNode]=(dist[node]+graph[node][adjNode]);
        previousNode[adjNode]=node;
    }

}

int main(){
    int graph[v][v]={{0,6,0,3,0},
                     {6,0,1,0,1},
                     {0,1,0,1,3},
                     {3,0,1,0,0},
                     {0,1,3,0,0}}
    dijkstra(graph,0);
}
*/
#include <iostream>
using namespace std;
#include <limits.h>
 
// Number of vertices in the graph
#define V 5
 
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[], bool sptSet[])
{
   
    // Initialize min value
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
 
    return min_index;
}
 
// A utility function to print the constructed distance array
void printSolution(int dist[])
{
    cout <<"Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++)
        cout  << i << " \t\t"<<dist[i]<< endl;
}
 
// Function that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int graph[V][V], int src)
{
    int dist[V]; // The output array.  dist[i] will hold the shortest
    // distance from src to i
 
    bool sptSet[V]; // sptSet[i] will be true if vertex i is included in shortest
    // path tree or shortest distance from src to i is finalized
 
    // Initialize all distances as INFINITE and stpSet[] as false
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
 
    // Distance of source vertex from itself is always 0
    dist[src] = 0;
 
    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum distance vertex from the set of vertices not
        // yet processed. u is always equal to src in the first iteration.
        int u = minDistance(dist, sptSet);
 
        // Mark the picked vertex as processed
        sptSet[u] = true;
 
        // Update dist value of the adjacent vertices of the picked vertex.
        for (int v = 0; v < V; v++)
 
            // Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
 
    // print the constructed distance array
    printSolution(dist);
}
 
// driver program to test above function
int main()
{
   
    /* Let us create the example graph discussed above */
    int graph[V][V] = {{0,6,0,3,0},
                      {6,0,1,0,1},
                      {0,1,0,1,3},
                      {3,0,1,0,0},
                      {0,1,3,0,0}};
 
    dijkstra(graph, 0);
 
    return 0;
}