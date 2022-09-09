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
        return  q[f];
    }

};

class binaryTree{
    node* root,*temp;
public:
    binaryTree(){
        root=NULL;
        temp=new node;
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
            node* temp=new node;
            q1.enqueue(root);
            while(!q1.isempty()){
                temp=q1.dequeue();
                if (temp->lchild!=NULL){
                    q1.enqueue(temp->lchild);
                }
                else{
                    node* n=new node;
                    n->data=elt;
                    n->lchild=NULL;
                    n->rchild=NULL;
                    temp->lchild=n;
                    break;
                }
                if (temp->rchild!=NULL){
                    q1.enqueue(temp->rchild);
                }
                else{
                    node* n=new node;
                    n->data=elt;
                    n->lchild=NULL;
                    n->rchild=NULL;
                    temp->rchild=n;
                    break;
                }
            }
        }
    }
    int count(){
        int c=count_(root);
        return c;
    }
    int count_(node* n){
        int c=1;
        node* temp=new node;
        Queue q2;
        q2.enqueue(root);
        while(!q2.isempty()){
            temp=q2.dequeue();
            if (temp->lchild!=NULL){
                c++;
                q2.enqueue(temp->lchild);
            }
            else{
                break;
            }
            if (temp->rchild!=NULL){
                c++;
                q2.enqueue(temp->rchild);
            }
            else{
                break;
            }
        }
        return c;
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
    void heap(){
        int c=count();
        int temp;
        int A[c];
        Queue q1;
        q1.enqueue(root);
        int i=0;
        node* temp_=new node;
        while(!q1.isempty()){
            temp_=q1.dequeue();
            A[i++]=temp_->data;
            if (temp_->lchild!=NULL){
                q1.enqueue(temp_->lchild);
            }
            if (temp_->rchild!=NULL){
                q1.enqueue(temp_->rchild);
            }
        }
        
        int B[c];
        int j;
        i=0;
        int x;
        while(i<c){
            x=A[i];
            B[i]=x;
            j=i;
            while(j>0){
                if (B[j]<B[j/2]){
                    temp=B[j];
                    B[j]=B[j/2];
                    B[j/2]=temp;
                }
                j=j/2;
            }
            i++;
        }
        binaryTree b1;
        for (i=0;i<c;i++){
            b1.insertNode(B[i]);
        }
        b1.display();

    }
    void display(){
        cout<<endl<<"Preorder : ";
        display_preorder(root);
        cout<<endl<<"Postorder : ";
        display_postorder(root);
        cout<<endl<<"Inorder : ";
        display_inorder(root);
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
            display_postorder(n->lchild);
            display_postorder(n->rchild);
            cout<<n->data<<"  ";
        }
    }
    void display_inorder(node* n){
        if (n!=NULL){
            display_inorder(n->lchild);
            cout<<n->data<<"  ";
            display_inorder(n->rchild);
        }
    }
};
int main(){
    binaryTree b;
    b.insertNode(1);
    b.insertNode(6);
    b.insertNode(8);
    b.insertNode(4);
    b.insertNode(5);
    b.insertNode(2);
    b.insertNode(7);
    b.insertNode(3);
    b.insertNode(9);
    b.display();
    b.heap();  //max

}