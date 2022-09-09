#include <iostream>
using namespace std;

class node{
public:
    int key;
    node* left;
    node* right;
};

class bst{
    node* root,* ptr,*parent,*curr,*child;
public:
    bst(){
        root = NULL;
        parent = NULL;
        curr = NULL;
        child = NULL;
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
    int searchNode(int key){
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
    void min_(node* n,int & min){
        if (n!=NULL){
            min_(n->left,min);
            if (min > n->key){
                min = n->key;
            }
            min_(n->right,min);
        }
    }
    int min(node* n ){
        int min=n->key;
        min_(n,min);
        return min;
    }
    int deleteNode(int key){
        searchNode(key);
        if (curr ==NULL){
            cout<<endl<<"No such key is Found!";
            return 0;
        }
        else{
            if (curr->left ==NULL && curr->right ==NULL){
                if (curr==root){
                    delete curr;
                }
                else{
                    if (curr == parent->right){
                        parent->right = NULL;
                        delete curr;
                    }
                    else{
                        parent->left = NULL;
                        delete curr;
                    }
                }
            }
            else if (curr->left!=NULL && curr->right!=NULL){
                int val = min(curr->right);
                node* temp = curr;
                deleteNode(val);
                temp->key = val;
            }
            else{
                if (curr->right!=NULL){
                    child = curr->right;
                }
                else{
                    child = curr->left;
                }
                if (curr==root){
                    root = child;
                }
                else{
                    if (parent->left == curr){
                        parent->left = child;
                    }
                    else{
                        parent->right = child;
                    }
                }
                
            }
        }
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
    b.insertNode(7);
    b.display();
    b.deleteNode(3);
    b.display();

}