#include <iostream>
using namespace std;

class node{
public:
    int key;
    node* left;
    node* right;
    int height;
};

class avl{
    node* root,*ptr,* curr,*parent,*child;
public:
    avl(){
        root = NULL;
        parent  =NULL;
        child = NULL;
        curr = NULL;
    }
    int max(int a,int b){
        if(a>b){
            return a;
        }
        return b;
    }
    int getHeight(node* n){
        if (n==NULL)
            return 0;
        return n->height;
    }
    int getBalance(node* n){
        if (n==NULL){
            return 0;
        }
        return getHeight(n->left)-getHeight(n->right);
    }
    node* newNode(int key){
        node * n =new node;
        n->key = key;
        n->left = NULL;
        n->right =NULL;
        n->height = 1;
        return n;
    }
    node* LL(node*x){
        node* y = x->left;
        node* t = y->right;
        y->right = x;
        x->left = t;
        x->height = 1+ max(getHeight(x->left),getHeight(x->right));
        y->height = 1+ max(getHeight(y->left),getHeight(y->right));
        return y;
    }
    node* RR(node*x){
        node* y = x->right;
        node* t = y->left;
        y->left = x;
        x->right = t;
        x->height = 1+ max(getHeight(x->left),getHeight(x->right));
        y->height = 1+ max(getHeight(y->left),getHeight(y->right));
        return y;
    }
    node* insertNode_(node* n,int key){
        if (n==NULL){
            return newNode(key);
        }
        else if (n->key > key){
            n->left = insertNode_(n->left,key);
        }
        else{
            n->right = insertNode_(n->right,key);
        }
        n->height = 1+ max(getHeight(n->left),getHeight(n->right));
        int balance = getBalance(n);
        if (balance > 1 && n->left->key > key){
            return LL(n);
        }
        else if (balance > 1 && n->left->key < key){
            n->left = RR(n->left);
            return LL(n);
        }
        else if (balance < -1 && n->right->key < key){
            return RR(n);
        }
        else if(balance < -1 && n->right->key > key){
            n->right = LL(n->right);
            return RR(n);
        }
        return n;
    }
    void inorder(node* n){
        if (n!=NULL){
            cout<<n->key<<"  ";
            inorder(n->left);
            inorder(n->right);
        }
    }
    void display(){
        cout<<endl<<"Display : ";
        inorder(root);
    }
    void insertNode(int key){
        root = insertNode_(root,key);
    }
    int min(node* n){
        ptr = n;
        int min;
        while(ptr->left!=NULL){
            ptr=ptr->left;
        }
        return ptr->key;
    }
    int searchNode(int key){
        parent = NULL;
        curr = root;
        while(curr!=NULL){
            if (curr->key == key){
                return 1;
            }
            parent = curr;
            if (curr->key > key){
                curr = curr->left;
            }
            else{
                curr = curr->right;
            }
        }
    }
    int  deleteNode1(int key){
        searchNode(key);
        if (curr == NULL){
            return 0;
        }
        if (curr->left ==NULL && curr->right ==NULL){
            if (curr==root){
                curr=NULL;
                delete curr;
            }
            else{
                if (parent->left==curr){
                    parent->left = NULL;
                    delete curr;
                }
                else{
                    parent->right = NULL;
                }
            }
        }
        else if (curr->left!=NULL && curr->right!=NULL){
            int val = min(curr->right);
            node* temp = curr;
            deleteNode1(val);
            temp->key = val;
        }
        else{
            if (curr->left!=NULL){
                child = curr->left;
            }
            else{
                child = curr->right;
            }
            if (curr = root){
                root = child;
            }
            else{
                if (parent->right == curr){
                    parent->right = child;
                }
                else{
                    parent->left = child;
                }
            }
        }

    }
    node* deleteNode2(node* n,int key){
        if (n==NULL){
            return NULL;
        }
        else if (n->key > key){
            n->left = deleteNode2(n->left,key);
        }
        else{
            n->right = deleteNode2(n->right,key);
        }
        n->height = 1+ max(getHeight(n->left),getHeight(n->right));
        int balance = getBalance(n);
        if (n->key < key && getBalance(n->left)==-1 && (balance>1 || balance<-1)){
            cout<<endl<<"((";
            n->left = RR(n->left);
            return LL(n);
        }
        else if (n->key < key && getBalance(n->left)==0 && (balance>1 || balance<-1)){
            return LL(n);
        }
        else if (n->key < key && getBalance(n->left)==1 && (balance>1 || balance<-1)){
            return LL(n);
        }
        else if(n->key > key && getBalance(n->right)==-1 && (balance>1 || balance<-1)){
            return RR(n);
        }
        else if(n->key > key && getBalance(n->right)==0 && (balance>1 || balance<-1)){
            return RR(n);
        }
        else if(n->key > key && getBalance(n->right)==1 && (balance>1 || balance<-1)){
            n->right = LL(n->right);
            return RR(n);
        }
        return n;
    }
    void deleteNode(int key){
        deleteNode1(key);
        display();
        root = deleteNode2(root,key);
    }
};



int main(){
    avl a;
    a.insertNode(35);
    //a.display();
    a.insertNode(21);
    //a.display();
    a.insertNode(46);
    //a.display();
    a.insertNode(16);
    //a.display();
    a.insertNode(30);
    //a.display();
    a.insertNode(40);
    //a.display();
    a.insertNode(29);
    //a.display();
    a.insertNode(33);
   
    a.display();
    a.deleteNode(40);

    a.display();


}
