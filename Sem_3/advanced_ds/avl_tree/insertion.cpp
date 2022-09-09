#include <iostream>
using namespace std;

class node{
public:
    int key;
    node* lchild;
    node* rchild;
    int height;
};

class avl{
    node* root;
    node* newNode(int);
    int max(int,int);
    int height(node* );
    int getBalanceFactor(node*);
    node* ll(node*);
    node* rr(node*);
    node* insertNode_(node* n,int key);
    void inorder(node* );
    void preorder(node*);
    void postorder(node*);
    node * deleteNode_(node* , int);
    
public:
    avl(){
        root = NULL;
    }
    void insertNode(int key);
    void display();
    int searchNode(int key);
    void deleteNode(int);
};
node* avl::newNode(int key){
    node* n =new node;
    n->height = 1;
    n->key = key;
    n->lchild = NULL;
    n->rchild = NULL;
    return n;
}
int avl::max(int a,int b){
    return (a>b ? a : b);
}
int avl::height(node* n){
    if (n==NULL){
        return 0;
    }
    return n->height;
}
int avl::getBalanceFactor(node * n){
    if (n==NULL){
        return 0;
    }
    return height(n->lchild)-height(n->rchild);
}
void avl::inorder(node* n ){
    if (n!=NULL){
        inorder(n->lchild);
        cout<<n->key<<"   ";
        inorder(n->rchild);
    }
}
void avl::preorder(node* n ){
    if (n!=NULL){
        cout<<n->key<<"   ";
        preorder(n->lchild);
        preorder(n->rchild);
    }
}
void avl::postorder(node* n ){
    if (n!=NULL){
        postorder(n->lchild);
        postorder(n->rchild);
        cout<<n->key<<"   ";
    }
}
node* avl::rr(node* x){
    node* y = x->rchild;
    node* t = y->lchild;
    y->lchild = x;
    x->rchild = t;
    x->height = 1+max(height(x->lchild),height(x->rchild));
    y->height = 1+max(height(y->lchild),height(y->rchild));
    return y;
}
node* avl::ll(node*x){
    node* y = x->lchild;
    node* t = y->rchild;
    y->rchild = x;
    x->lchild = t;
    x->height = 1+max(height(x->lchild),height(x->rchild));
    y->height = 1+max(height(y->lchild),height(y->rchild));
    return y;
}
void avl::display(){
    cout<<endl<<"Inorder Traversal : ";
    inorder(root);
    cout<<endl<<"Preorder Traversal : ";
    preorder(root);
    cout<<endl<<"Postorder Traversal : ";
    postorder(root);

}
void avl::insertNode(int key){
    root = insertNode_(root,key);
}
node* avl::insertNode_(node* n,int key){
    if (n==NULL){
        return newNode(key);
    }
    else if (key < n->key){
        n->lchild = insertNode_(n->lchild,key);
    }
    else if (key > n->key){
        n->rchild = insertNode_(n->rchild,key);
    }
    else{
        return n;
    }
    n->height = 1+max(height(n->lchild),height(n->rchild));

    int balance = getBalanceFactor(n);

    if (balance < -1 && key < n->rchild->key){
        n->rchild = ll(n->rchild);
        return rr(n);
    }
    else if (balance < -1 && key > n->rchild->key){
        return rr(n);
    }
    else if (balance > 1 &&  key < n->lchild->key){
        return ll(n);
    }
    else if (balance > 1 &&  key > n->lchild->key){
        n->lchild = rr(n->lchild);
        return ll(n);
    }
    return n;
}
int avl::searchNode(int key){
    node* ptr = root;
    int flag=0;
    while(ptr!=NULL){
        if (ptr->key == key){
            flag=1;
            break;
        }
        else if (ptr->key > key){
            ptr = ptr->lchild;
        }
        else if(ptr->key < key){
            ptr = ptr->rchild;
        }
    }
    return flag;
}
void avl::deleteNode(int key){
    root = deleteNode_(root,key);
}
int main(){
    avl avl1;
    int ch;
    int elt,flag;
    do{
        cout<<endl<<"What do you wanna choose ? Enter 0 to exit";
        cout<<endl<<"1) Insert Element"<<endl<<"2) Delete Node"<<endl<<"3) Search Node"<<endl<<"4) Display tree";
        cout<<endl<<"Enter your choice : ";
        cin>>ch;
        if (!(ch==1||ch==0||ch==2||ch==3||ch==4)){
            cout<<endl<<"Invalid choice ! Enter Again";
        }
        switch(ch){
            case 1: cout<<endl<<"Enter the element to be inserted : ";
                    cin>>elt;
                    avl1.insertNode(elt);
                    break;
            case 2: 
                    break;
            case 3: cout<<endl<<"Enter the element to be searched : ";
                    cin>>elt;
                    flag = avl1.searchNode(elt);
                    flag ? cout<<endl<<"Element Found\n" : cout<<endl<<"Element not found\n" ; 
                    break;

            case 4: avl1.display();
                    break;
        }
    }while(ch!=0);
}