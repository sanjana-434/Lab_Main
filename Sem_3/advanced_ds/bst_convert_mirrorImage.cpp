//problem::it is also altering the input tree!!

#include <iostream>
using namespace std;

class node{
public:
    int key;
    node* left;
    node* right;
};

class Queue{
    node* arr[20];
    int f,r;
public:
    Queue(){
        f=-1;
        r=-1;
    }
    int isempty(){
        if (f==r){
            return 1;
        }
        return 0;
    }
    int isFull(){
        if (r==20){
            return 1;
        }
        return 0;
    }
    void enqueue(node* n){
        if (!isFull()){
            r++;
            arr[r] = n;
        }
        else{
            cout<<endl<<"Overflow!";
        }
    }
    node* dequeue(){
        if (!isempty()){
            f++;
            node* temp = arr[f];
            return temp;
        }
        else{
            cout<<endl<<"Underflow!";
        }
    }

};
class bst{
    node* root,*root2,*ptr;
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
    int count_(node* n,int& c){
        if (n!=NULL){
            count_(n->left,c);
            c++;
            count_(n->right,c);
        }
    }
    int count(){
        int c=0;
        count_(root,c);
        return c;
    }
    void mirrorImage(){
        cout<<endl<<"Mirror Image : ";
        Queue q1;
        root2 = root;
        ptr = root;
        int c=0;
        int elts = count();
        q1.enqueue(root2);
        node* temp= new node;
        ptr = q1.dequeue();
        while(elts != c){
            cout<<ptr->key<<"  ";
            temp = ptr->left;
            ptr->left = ptr->right;
            ptr->right = temp;
            if (ptr->left!=NULL)
                q1.enqueue(ptr->left);
            if (ptr->right!=NULL)
                q1.enqueue(ptr->right);
            if (ptr!=NULL){
                c++;
            }
            if (elts!=c)
                ptr = q1.dequeue();
            
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
        cout<<endl<<"root1 : ";
        inorder(root);
        cout<<endl<<"root2 : ";
        inorder(root2);
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
    b.mirrorImage();
    b.display();
}