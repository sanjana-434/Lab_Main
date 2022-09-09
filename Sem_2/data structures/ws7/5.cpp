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
        f=-1,r=-1;
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
class BinaryTree{
    node* root;
public:
    BinaryTree(){
        root=NULL;
    }
    void createNode(int elt){
        node* n=new node;
        n->data=elt;
        n->rchild=NULL;
        n->lchild=NULL;
        root=n;
    }
    void insertNode(int elt){
        if (root==NULL){
            createNode(elt);
        }
        else{
            node* n=new node;
            n->data=elt;
            n->lchild=NULL;
            n->rchild=NULL;
            Queue q1;
            q1.enqueue(root);
            node* temp=new node;
            while (!q1.isempty())
            {
                temp=q1.dequeue();
                if (temp->lchild!=NULL){
                    q1.enqueue(temp->lchild);
                }
                else{
                    temp->lchild=n;
                    break;
                }
                if (temp->rchild!=NULL){
                    q1.enqueue(temp->rchild);
                }
                else{
                    temp->rchild=n;
                    break;
                }
            }
        }
    }
    void heapify(int*A,int size){
        int B[size];
        int i=0;
        int j,x;
        int temp;
        while(i<size){
            x=A[i];
            B[i]=x;
            j=i;
            while(j>0){
                if(B[j]<B[j/2]){
                    temp=B[j];
                    B[j]=B[j/2];
                    B[j/2]=temp;
                }
                j=j/2;
            }
            i++;
        }
        for (i=0;i<size;i++){
            insertNode(B[i]);
        }
    }
    void display(){
        /*
        cout<<endl<<"Preorder";
        display_preorder(root);
        cout<<endl<<"Postorder";
        display_postorder(root);
        cout<<endl<<"Inorder";
        display_inorder(root);
        */
        cout<<endl<<"Level order : ";
        display_level(root);
    }
    void display_preorder(node* n){
        if (n!=NULL){
            cout<<n->data<<"  ";
            display_preorder(n->lchild);
            display_preorder(n->rchild);
        }
    }
    void display_postorder(node* n){
        if (n!=NULL){
            cout<<n->data<<"  ";
            display_postorder(n->lchild);
            display_postorder(n->rchild);
        }
    }
    void display_inorder(node* n){
        if (n!=NULL){
            cout<<n->data<<"  ";
            display_inorder(n->lchild);
            display_inorder(n->rchild);
        }
    }
    void display_level(node* n){
        Queue q1;
        node* temp=new node;
        q1.enqueue(root);
        while(!q1.isempty()){
            temp=q1.dequeue();
            cout<<temp->data<<"  ";
            if (temp->lchild!=NULL){
                q1.enqueue(temp->lchild);
            }
            if (temp->rchild!=NULL){
                q1.enqueue(temp->rchild);
            }
        }
        
    }
    int root_(){
        return root->data;
    }
    void clear(){
        root=NULL;
    }
};
int main(){
    BinaryTree b;
    int A[10]={2,3,1,7,6,10,4,9,7,5};
    int size=10;
    b.heapify(A,size);
    b.display();
    int k=7;
    int min;
    for (int i=0;i<k;i++){
        b.heapify(A,size);
        b.display();
        min=b.root_();
        b.clear();
        for (int j=0;j<size;j++){
            if (A[j]==min && j==size-1){
                size--;
                break;
            }
            if (A[j]==min){
                for (int k=j;k<size-1;k++){
                    A[k]=A[k+1];
                }
                size--;
                break;
            }
        }
        
    }
    cout<<endl<<"kth smallest element : "<<min;



}