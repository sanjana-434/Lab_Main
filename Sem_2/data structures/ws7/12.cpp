#include <iostream>
using namespace std;

class nodell{
public:
    int data;
    nodell* link;
};
class node{
public:
    int data;
    node* lchild;
    node* rchild;
};
class Queue{
    node* q[50];
    int f,r;
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
    void enqueue(node* n){
        r++;
        q[r]=n;
    }
    node* dequeue(){
        f++;
        return q[f];
    }
};

class BinarySearcrhTree{
    node* root;
public:
    friend class ll;
    BinarySearcrhTree(){
        root=NULL;
    }
    void createNode(int elt){
        node* n=new node;
        n->data=elt;
        n->lchild=NULL;
        n->rchild=NULL;
        root=n;
    }
    void dispaly(){
        cout<<endl<<"Inorder : ";
        cout<<root->data;
        display_(root);
    }
    void display_(node* n){
        if (n!=NULL){
            display_(n->lchild);
            cout<<n->data<<"  ";
            display_(n->rchild);
        }
    }
    void insertNode(int elt){
        if (root==NULL){
            createNode(elt);
        }
        else{
            Queue q1;
            node* n=new node;
            n->data=elt;
            n->lchild=NULL;
            n->rchild=NULL;
            node* temp=new node;
            q1.enqueue(root);
            while(!q1.isempty()){
                temp=q1.dequeue();
                if (temp->data >= elt){
                    if (temp->lchild==NULL){
                        temp->lchild=n;
                    }
                    else{
                        q1.enqueue(temp->lchild);
                    }
                }
                else{
                    if (temp->rchild==NULL){
                        temp->rchild=n;
                    }
                    else{
                        q1.enqueue(temp->rchild);
                    }
                }
            }
            
        }
    }
};


class ll{
    nodell* start,*ptr;
public:
    ll(){
        start=NULL;
    }
    void createNode(int elt){
        nodell* n=new nodell;
        n->data=elt;
        n->link=NULL;
        start=n;
    }
    void insertNode(int elt){
        if (start==NULL){
            createNode(elt);
        }
        else{
            nodell* n=new nodell;
            n->data=elt;
            n->link=NULL;
            ptr=start;
            while(ptr->link!=NULL){
                ptr=ptr->link;
            }
            ptr->link=n;
        }
    }
    void display(){
        cout<<endl<<"!!!";
        ptr=start;
        while(ptr!=NULL){
            cout<<endl<<" "<<ptr->data;
            ptr=ptr->link;
        }
    }
    int count(){
        int c=0;
        ptr=start;
        while ((ptr!=NULL))
        {
            c++;
            ptr=ptr->link;
        }
        return c;
    }
    void listelts(BinarySearcrhTree b){
        ptr=start;
        int A[7];
        int i=0;
        while(ptr!=NULL){
            A[i]=ptr->data;
            i++;
            ptr=ptr->link;
        }
        for (int i=0;i<7;i++){
            cout<<"@"<<A[i];
            b.insertNode(A[i]);
        }
        b.dispaly();
    }
    
};




int main(){
    ll l;
    BinarySearcrhTree b;
    l.insertNode(8);
    l.insertNode(10);
    l.insertNode(3);
    l.insertNode(2);
    l.insertNode(10);
    l.insertNode(1);
    l.insertNode(5);
    l.listelts(b);

}