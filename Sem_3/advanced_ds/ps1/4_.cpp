#include <iostream>
using namespace std;

int count=0;
int arr[10];
int arr2[10];

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
    void inorderTraversal_(node*);
    public:
        binaryTree(){
            root=NULL;
        }
        void insertNode(int elt);
        void inorderTraversal();
        void mirror_check_same();
        void mirror(node* n);
        void inorderTraversalMirror(node*);

        
};
void binaryTree::createBinaryTree(int elt){
    node* temp=new node;
    temp->data=elt;
    temp->lchild=NULL;
    temp->rchild=NULL;
    root=temp;
}
void binaryTree::insertNode(int elt){
    count++;
    if (root==NULL){
        createBinaryTree(elt);
    }
    else{
        Queue q1;
        q1.enqueue(root);
        while(!q1.isEmpty()){
            node* temp=new node;
            temp=q1.dequeue();
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
void binaryTree::inorderTraversal(){
    inorderTraversal_(root);
}
void binaryTree::inorderTraversal_(node* n){
    if (n!=NULL){
        inorderTraversal_(n->lchild);
        static int c=0;
        arr[c]=n->data;
        cout<<arr[c]<<"  ";
        c++;
        inorderTraversal_(n->rchild);
    }
}
void binaryTree::inorderTraversalMirror(node* n){
    if (n!=NULL){
        inorderTraversalMirror(n->lchild);
        static int c2=0;
        arr2[c2]=n->data;
        cout<<arr2[c2]<<"  ";
        c2++;
        inorderTraversalMirror(n->rchild);
    }
}
void binaryTree::mirror(node* n){
    if (n==NULL){
        return;
    }
    else{
        mirror(n->lchild);
        mirror(n->rchild);
        node* t=new node;
        t=n->lchild;
        n->lchild=n->rchild;
        n->rchild=t;
    }
}
void binaryTree::mirror_check_same(){
    //cout<<endl<<"Count : "<<count;
    mirror(root);
    inorderTraversalMirror(root);
    int flag=1;
    /*
    for (int i=0;i<count;i++){
        cout<<endl<<arr[i]<< "  "<<arr2[i];
    }
    */
    for (int i=0;i<count;i++){
        if (arr[i]!=arr2[i]){
            flag=0;
            cout<<endl<<"Mirror image is not same";
            break;
        }
    }
    if (flag==1){
        cout<<endl<<"Mirror Image is same !!";
    }

}

int main(){
    binaryTree b;
    b.insertNode(1);
    b.insertNode(2);
    b.insertNode(3);
    b.insertNode(4);

    /*
    b.insertNode(1);
    b.insertNode(2);
    b.insertNode(2);
    b.insertNode(4);
    b.insertNode(4);
    b.insertNode(4);
    b.insertNode(4);*/

    cout<<endl<<"Inorder Traversal : ";
    b.inorderTraversal();
    cout<<endl<<"Inorder Traversal of mirror image : ";
    b.mirror_check_same();
}