#include <iostream>
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
    node* root;
    public:
        binaryTree(){
            root=NULL;
        }
        node* createNode(int elt);
        node* constructBinaryTree(int inorder[],int preorder[],int start, int end);
        int search(int arr[], int start, int end, int value);
        void constructBinaryTree_(int inorder[],int preorder[],int len);
        void preorderTraversal(node* n);
};
static int flag=0;
node* binaryTree::createNode(int elt){
    node* temp=new node;
    temp->data=elt;
    temp->lchild=NULL;
    temp->rchild=NULL;
    return temp;
}
node* binaryTree::constructBinaryTree(int inorder[],int preorder[],int start, int end)
{
    static int preIndex = 0;
    if (start > end)
        return NULL;

    node* n=createNode(preorder[preIndex++]);
    //node* tNode = newNode(pre[preIndex++]);
    
    if (start == end)
        return n;
 
    int inIndex = search(inorder,start,end,n->data);
    n->lchild = constructBinaryTree(inorder, preorder, start, inIndex-1);
    n->rchild = constructBinaryTree(inorder, preorder, inIndex + 1, end);
 
    return n;
}
void binaryTree::preorderTraversal(node* n){
    if (n!=NULL){
        cout<<endl<<n->data;
        preorderTraversal(n->lchild);
        preorderTraversal(n->rchild);
    }
}
int binaryTree::search(int arr[], int start, int end, int value){
    for (int i= start; i <= end; i++){
        if (arr[i] == value)
            return i;
    }
}
void binaryTree::constructBinaryTree_(int inorder[],int preorder[],int len){
    root = constructBinaryTree(inorder, preorder, 0, len - 1);
    cout<<"*";
    preorderTraversal(root);
}

int main(){
    binaryTree b;
    int inorder[] ={8,4,10,9,11,2,5,1,6,3,7};
    int preorder[] ={1,2,4,8,9,10,11,5,3,6,7};
    int len = sizeof(inorder) / sizeof(inorder[0]);
    b.constructBinaryTree_(inorder,preorder,len);
}