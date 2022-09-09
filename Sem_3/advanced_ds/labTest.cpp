#include <iostream>
using namespace std;

class node{
public:
    int key;
    node* lchild;
    node* rchild;
};

class binarySearchtree{
    node* ptr,*root;
    void inorderTraversal(node* n){
        if (n!=NULL){
            inorderTraversal(n->lchild);
            cout<<n->key<<"  ";
            inorderTraversal(n->rchild);
        }
    }
    void preorderTraversal(node* n){
        if (n!=NULL){
            cout<<n->key<<"  ";
            preorderTraversal(n->lchild);
            preorderTraversal(n->rchild);
        }
    }

public:
    binarySearchtree(){
        root=NULL;
    }
    void createNode(int elt){
        node* n=new node;
        n->key=elt;
        n->lchild=NULL;
        n->rchild=NULL;
        root=n;
    }
    
    node* insertNode(int elt){
        if (root==NULL){
            createNode(elt);
        }
        else{
            node* q=new node;
            ptr=root;
            while(ptr!=NULL){
                q=ptr;
                if (ptr->key==elt){
                    return ptr;
                }
                else if (ptr->key > elt){
                    ptr=ptr->lchild;
                }
                else{
                    ptr=ptr->rchild;
                }
            }
            node* temp=new node;
            temp->key=elt;
            temp->lchild=NULL;
            temp->rchild=NULL;
            if (q->key > elt){
                q->lchild = temp;
            }
            else{
                q->rchild = temp;
            }
        }
    }
    void display(){
        inorderTraversal(root);
        preorderTraversal(root);
    }
    node* closestAncestor(int elt){
        node* q=new node;
        ptr=root;
        if (root->key==elt){
            return NULL;
        }
        while(ptr!=NULL){
            if (ptr->key==elt){
                return q;
            }
            q=ptr;
            if (ptr->key > elt){
                ptr=ptr->lchild;
            }
            if (ptr->key < elt){
                ptr=ptr->rchild;
            }
        }
        return NULL;
    }
};
int main(){
    binarySearchtree b;
    b.insertNode(5);
    b.insertNode(3);
    b.insertNode(10);
    b.insertNode(4);
    b.insertNode(1);
    b.insertNode(15);
    b.insertNode(20);
    b.insertNode(12);
    b.insertNode(14);
    b.insertNode(13);
    b.display();
    int elt;
    cout<<endl<<"Enter the elt for which ancestor is to be found : ";
    cin>>elt;
    node* nearestAncestor = b.closestAncestor(elt);
    cout<<endl<<"Nearest Ancestor : "<<nearestAncestor->key;

}