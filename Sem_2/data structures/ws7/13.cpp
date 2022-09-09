#include <iostream>
using namespace std;

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
class BinarySearchTree{
    node* root;
public:
    BinarySearchTree(){
        root=NULL;
    }
    void createNode(int elt){
        node* n=new node;
        n->data=elt;
        n->lchild=NULL;
        n->rchild=NULL;
        root=n;
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
    void sum(){
        int s=sum_(root,0);
        cout<<endl<<"Sum : "<<s;
    }
    int sum_(node* n,int s){
        if (n!=NULL){
            s=sum_(n->lchild,s);
            s=s+(n->data);
            s=sum_(n->rchild,s);
        }
        return s;
    }
    void minmax(){
        int min=root->data;
        int max=root->data;
        node* temp=new node;
        temp=root;
        while(temp->lchild!=NULL){
            temp=temp->lchild;
        }
        min=temp->data;
        temp=root;
        while(temp->rchild!=NULL){
            temp=temp->rchild;
        }
        max=temp->data;
        cout<<endl<<"Max : "<<max;
        cout<<endl<<"Min : "<<min;

    }
    void display(){
        cout<<endl<<"inorder Traversal  :  ";
        display_inorder(root);
    }
    void display_inorder(node* n){
        if (n!=NULL){
            display_inorder(n->lchild);
            cout<<n->data<<"   ";
            display_inorder(n->rchild);
        }
    }
};

int main(){
    BinarySearchTree b;
    b.insertNode(5);
    b.insertNode(6);
    b.insertNode(2);
    b.insertNode(3);
    b.insertNode(4);
    b.insertNode(30);
    b.display();
    b.minmax();
    b.sum();
}
