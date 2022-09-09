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
