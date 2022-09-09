#include <iostream>
using namespace std;

class node{
public:
    int key;
    node* left;
    node* right;
};

class bst{
    node* root,* ptr;
public:
    bst(){
        root = NULL;
    }
    void create(int key){
        node*  n = new node;
        n->key = key;
        n->left = NULL;
        n->right = NULL;
        root = n;
    }
    node* insertNode(int key){
        if (root==NULL){
            create(key);
        }
        else{
            node* q = new node;
            node* p = new node;
            p = root;
            while(p!=NULL){
                q=p;
                if (p->key == key){
                    return p;
                }
                else if (p->key > key){
                    p = p->left;
                }
                else{
                    p = p->right;
                }
            }
            node* n = new node;
            n->key = key;
            n->left = NULL;
            n->right = NULL;
            if (q->key > key){
                q->left = n;
            }
            else{
                q->right = n;
            }
        }
    }  
    void search_(node* n,int & flag,int key){
        if (n!=NULL){
            search_(n->left,flag,key);
            if (key == n->key){
                flag=1;
            }
            search_(n->right,flag,key);
        }
    }
    void search(int key){
        int flag=0;
        search_(root,flag,key);
        if (flag==1){
            cout<<endl<<"Key Found!";
        }
        else{
            cout<<endl<<"Not Found!";
        }
    }
    void max_(node* n,int & max){
        if (n!=NULL){
            max_(n->left,max);
            if (max < n->key){
                max = n->key;
            }
            max_(n->right,max);
        }
    }
    void max(){
        int max=root->key;
        max_(root,max);
        cout<<endl<<"Max : "<<max;
    }
    void leftNode(int key){
        int flag=0;
        node* p = root;
        while(p!=NULL){
            if (p->key==key){
                flag=1;
                if (p->left ==NULL){
                    cout<<endl<<"Left Node of key is NULL";
                }
                else{
                    cout<<endl<<"Left Node : "<<p->left->key;
                }
                break;
            }
            else if (p->key > key){
                p=p->left;
            }
            else{
                p=p->right;
            }
        }
        if(flag==0){
            cout<<endl<<"key not found!";
        }
    }
    void rightNode(int key){
        int flag=0;
        node* p = root;
        while(p!=NULL){
            if (p->key==key){
                flag=1;
                if (p->right ==NULL){
                    cout<<endl<<"Right Node of key is NULL";
                }
                else{
                    cout<<endl<<"Right Node : "<<p->right->key;
                }
                break;
            }
            else if (p->key > key){
                p=p->left;
            }
            else{
                p=p->right;
            }
        }
        if(flag==0){
            cout<<endl<<"key not found!";
        }
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
    
};
int main(){
    bst b;
    b.insertNode(3);
    b.insertNode(1);
    b.insertNode(6);
    b.insertNode(2);
    b.insertNode(4);
    b.insertNode(5);
    b.display();
    b.search(3);
    b.search(0);
    b.leftNode(2);
    b.rightNode(4);
    b.max();

}