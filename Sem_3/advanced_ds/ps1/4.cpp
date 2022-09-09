#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* lchild;
    node* rchild;
};

class Queue{
    int f;
    int r;
    node* q[20];
public:
    Queue(){
        f=-1;
        r=-1;
    }
    int isEmpty();
    int isFull();
    void enqueue(node* elt);
    node* dequeue();
};
int Queue::isEmpty(){
    if (f==r){
        return 1;
    }
    return 0;
}
int Queue::isFull(){
    if (r==19){
        return 1;
    }
    return 0;
}
void Queue::enqueue(node* elt){
    if (isFull()){
        cout<<endl<<"OverFlow!";
    }
    else{
        r++;
        q[r]=elt;
    }
}
node* Queue::dequeue(){
    if (isEmpty()){
        cout<<endl<<"UnderFlow!";
    }
    else{
        f++;
        return q[f];
    }
}


class binaryTree{
    node* ptr,*root;
    void createBinaryTree(int elt);
    public:
        binaryTree(){
            root=NULL;
        }
        void insertNode(int elt);
        vector<int> lLevelOrderTraversal();


};
void binaryTree::createBinaryTree(int elt){
    node* temp;
    temp->data=elt;
    temp->lchild=NULL;
    temp->rchild=NULL;
    root=temp;
}
void binaryTree::insertNode(int elt){
    if (root==NULL){
        createBinaryTree(elt);
    }
    else{
        Queue q1;
        q1.enqueue(root);
        while(!q1.isEmpty()){
            node* temp=q1.dequeue();
            if (temp->lchild==NULL){
                node* n=new node;
                n->data=elt;
                n->lchild=NULL;
                n->rchild=NULL;
                temp->lchild=n;
                break;
            }
            else{
                q1.enqueue(temp->lchild);
            }
            if (temp->rchild==NULL){
                node* n=new node;
                n->data=elt;
                n->lchild=NULL;
                n->rchild=NULL;
                temp->rchild=n;
                break;
            }
            else{
                q1.enqueue(temp->rchild);
            }
        }
    }
}
vector<int> binaryTree::lLevelOrderTraversal(){
    vector<int> v1;
        Queue q1;
        q1.enqueue(root);
        while(!q1.isEmpty()){
            node* temp=q1.dequeue();
            v1.push_back(temp->data);
            if (temp->lchild==NULL){
                break;
            }
            else{
                q1.enqueue(temp->lchild);
            }
            if (temp->rchild==NULL){
                break;
            }
            else{
                q1.enqueue(temp->rchild);
            }
        }
    return v1;
}
int main(){
    binaryTree b;
    b.insertNode(1);
    b.insertNode(2);
    b.insertNode(3);
    b.insertNode(4);
    b.insertNode(5);
    b.insertNode(6);
    b.insertNode(7);
    vector<int>::iterator ptr;
    vector<int> v1=b.lLevelOrderTraversal();
    for(ptr=v1.begin();ptr<v1.end();ptr++){
        cout<<*ptr<<"  ";
    }

}
