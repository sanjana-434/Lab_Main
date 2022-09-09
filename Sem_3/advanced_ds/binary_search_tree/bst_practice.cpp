#include <iostream>
using namespace std;

class node{
public:
    int key;
    node* lchild;
    node* rchild;
};

class bst{
private:
    node* root,*parent,*child,*curr;

    void createNode(int key){
        node* n = new node();
        n->key = key;
        n->lchild = NULL;
        n->rchild = NULL;
        root = n;
    }

public:
    bst(){
        root = NULL;
        parent = NULL;
        child = NULL;
        curr = NULL;
    }

    node* insertNode(int key){
        if (root == NULL){
            createNode(key);
        }
        else{
            node* p = new node;
            node* q = new node;
            p = root;
            while(p!=NULL){
                q = p;
                if (p->key == key){
                    return p;
                }
                else if (p->key > key){
                    p = p->lchild;
                }
                else{
                    p = p->rchild;
                }
            }
            node* n = new node;
            n->key = key;
            n->lchild = NULL;
            n->rchild = NULL;
            if (q->key > key){
                q->lchild = n;
            }
            else{
                q->rchild = n;
            }
        }
    }
    void inorder(node* n){
        if (n!=NULL){
            inorder(n->lchild);
            cout<<n->key << "   ";
            inorder(n->rchild);
        }
    }
    void display(){
        cout<<endl<<"Inorder Traversal : ";
        inorder(root);
    }
    //search
    node* searchNode(int key){
        curr = root;
        int flag = 0;
        while(curr!=NULL){
            if (curr->key > key ){
                curr = curr->lchild;
            }
            else if (curr ->key < key){
                curr = curr->rchild;
            }
            parent = curr;
            if (curr->key == key){
                return curr;
            }
        }
    }
    void search(int key){

        if (NULL != searchNode(key)){
            cout<<endl<<"Found!!";
        }
        else{
            cout<<endl<<"No such element is found!";
        }
    }

};
int main(){
    bst b;
    int ch;
    int elt1;
    int elt2;
    do{
        cout<<endl<<"What do you want to choose ? Enter 0 to exit";
        cout<<endl<<"1) Insert new node ";
        cout<<endl<<"2) Delete a node";
        cout<<endl<<"3) Search a node";
        cout<<endl<<"4) Display tree";
        cout<<endl<<"5) Display common ancestor of two nodes";
        cin>>ch;
        switch (ch)
        {
            case 1: 
                    cout<<endl<<"Enter the element to be inserted : ";
                    cin>>elt1;
                    b.insertNode(elt1);
                    break;
            
            case 2:
                    break;
            case 3: cout<<endl<<"Enter a node to be searched : ";
                    cin>>elt1;
                    b.search(elt1);
                    
                    break;
            case 4: b.display();
                    break;
            case 5: break;
        }
    }while(ch!=0);
}