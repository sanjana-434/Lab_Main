#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* lchild;
    node* rchild;
};

class Queue{
    node* q[30];
    int f,r;
public:
    Queue(){
        f=-1;
        r=-1;
    }
    int isempty();
    int isfull();
    void enqueue(node*);
    node* dequeue();
};
int Queue::isempty(){
    if (r==f){
        return 1;
    }
    return 0;
}
int Queue::isfull(){
    if (r==29){
        return 1;
    }
    return 0;
}
void Queue::enqueue(node* n){
    if (isfull()){
        cout<<endl<<"Overflow!";
    }
    else{
        r++;
        q[r]=n;
    }
}
node* Queue::dequeue(){
    if (isempty()){
        cout<<endl<<"Underflow!";
    }
    else{
        node* temp=q[f+1];
        f++;
        return temp;
    }
}

class BinaryTree{
    node* root;
public:
    BinaryTree(){
        root=NULL;
    }
    void createNode(int);
    void insertNode(int,Queue&);
    void display(Queue&);
    void display_preorder(node* n,Queue& q1);   //PREORDER
    void display_inorder(node* n,Queue& q1);    //INORDER
    void display_postorder(node* n,Queue& q1);  //POSTORDER
    void search_inorder(node* n,Queue& q1);     //search using inorder traversal
};
void BinaryTree::createNode(int elt){
    node* n=new node;
    n->data=elt;
    n->lchild=NULL;
    n->rchild=NULL;
    root=n;
}
void BinaryTree::insertNode(int elt,Queue& q1){
    if (root==NULL){
        createNode(elt);
    }
    else{
        node* temp;
        q1.enqueue(root);
        while(!q1.isempty()){
            temp=q1.dequeue();
            if (temp->lchild!=NULL){
                q1.enqueue(temp->lchild);
            }
            else{
                node* n=new node;
                n->lchild=NULL;
                n->rchild=NULL;
                n->data=elt;
                temp->lchild=n;
                break;
            }
            if (temp->rchild!=NULL){
                q1.enqueue(temp->rchild);
            }
            else{
                node* n=new node;
                n->lchild=NULL;
                n->rchild=NULL;
                n->data=elt;
                temp->rchild=n;
                break;
            }
        }
    }
}
void BinaryTree::display(Queue& q1){
    cout<<endl<<"Pre-order ";
    cout<<endl<<"---------";
    display_preorder(root,q1);
    cout<<endl<<"In-order ";
    cout<<endl<<"---------";
    display_inorder(root,q1);
    cout<<endl<<"Post-order ";
    cout<<endl<<"---------";
    display_postorder(root,q1);
}
void BinaryTree::display_preorder(node* n,Queue& q1){
    if (n!=NULL){
        cout<<endl<<n->data;
        display_preorder(n->lchild,q1);
        display_preorder(n->rchild,q1);
    }
}
void BinaryTree::display_inorder(node* n,Queue& q1){
    if (n!=NULL){
        display_inorder(n->lchild,q1);
        cout<<endl<<n->data;
        display_inorder(n->rchild,q1);
    }
}
void BinaryTree::display_postorder(node* n,Queue& q1){
    if (n!=NULL){
        display_postorder(n->lchild,q1);
        display_postorder(n->rchild,q1);
        cout<<endl<<n->data;
    }
}
/*
void BinaryTree::search_inorder(node* n,Queue* q1,int elt){
    search_inorder(n->lchild,q1);
    if ()

}
*/
int main(){
    Queue q1;
    BinaryTree b1;
    //b1.createNode(34);
    b1.insertNode(1,q1);
    b1.insertNode(2,q1);
    b1.insertNode(3,q1);
    b1.insertNode(4,q1);
    b1.insertNode(5,q1);
    b1.insertNode(6,q1);
    b1.insertNode(7,q1);
    b1.insertNode(8,q1);
    b1.insertNode(9,q1);
    b1.insertNode(0,q1);
    b1.display(q1);

}