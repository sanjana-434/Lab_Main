#include <iostream>
using namespace std;

class node{
public:
    int key;
    node* lchild;
    node* rchild;
};

class bst{
    node* root,*ptr;
    node* curr,*parent,* child;
    void createNode(int elt);
    void inorder(node*);
    int searchNode_(int elt,int& flag,node* n);
    node* searchNodeForDeletion(int elt);
    int getMin(node* n);
public:
    bst(){
        root=NULL;
        curr = NULL;
        parent = NULL;

    }
    
    node* insertNode(int elt);
    void display();
    void searchNode(int elt);
    void deleteNode(int elt);
};
void bst::createNode(int elt){
    node* n = new node;
    n->key = elt;
    n->lchild = NULL;
    n->rchild = NULL;
    root = n;
}
node* bst::insertNode(int elt){
    if (root == NULL){
        createNode(elt);
    }
    else{
        node * q = new node;
        ptr = root;
        
        while(ptr!=NULL){
            q = ptr;
            if (ptr->key == elt){
                return ptr;
            }
            else if (ptr->key > elt){
                ptr = ptr->lchild;
            }
            else{
                ptr = ptr->rchild;
            }
        }
        node* n = new node;
        n->key = elt;
        n->lchild = NULL;
        n->rchild = NULL;
        if (q->key > elt){
            q->lchild = n;
        }
        else{
            q->rchild = n;
        }
    }
}
void bst::display(){
    cout<<endl<<"Displaying in inorder : ";
    inorder(root);
}
void bst::inorder(node* n){
    if (n!=NULL){
        inorder(n->lchild);
        cout<<endl<<n->key<<"  ";
        inorder(n->rchild);
    }
}
int bst::searchNode_(int elt,int& flag,node* n){
    if (n!=NULL){
        if (n->key == elt){
            flag=1;
            return 0;
        }
        searchNode_(elt,flag,n->lchild);
        searchNode_(elt,flag,n->rchild);
    }
}
void bst::searchNode(int elt){
    int flag=0;
    searchNode_(elt,flag,root);
    if (flag==1){
        cout<<endl<<"Element Found!";
    }
    else{
        cout<<endl<<"Element not Found";
    }
}
int bst::getMin(node* n){
    ptr = n;
    node* q= new node;
    while(ptr!=NULL){
        q=ptr;
        ptr = ptr->lchild;
    }
    return q->key;
}
node* bst::searchNodeForDeletion(int elt){
    ptr = root;
    while(ptr!=NULL){
        if (ptr->key == elt){
            return ptr;
        }
        parent = ptr;
        if (ptr->key > elt){
            ptr = ptr->lchild;
        }
        else{
            ptr = ptr->rchild;
        }
    }
    return ptr;
}
void bst::deleteNode(int elt){
    //check whether the elt exist
    curr = searchNodeForDeletion(elt);
    if (curr==NULL){
        cout<<endl<<"Element not Found!";
    }
    else{
        //case 1) no child
        if (curr->lchild==NULL && curr->rchild==NULL){
            if (curr==root){
                root = NULL;
            }
            else{
                if (parent->lchild == curr){
                    parent->lchild = NULL;
                }
                else{
                    parent->rchild = NULL;
                }
            }
            delete curr;
        }
        //case 3) two childs
        else if (curr->lchild!=NULL && curr->rchild!=NULL){
            int val = getMin(curr->rchild);
            node* temp = curr;
            deleteNode(val);
            temp->key = val;

        }
        //case 2) one child
        else{
            if (curr->lchild ==NULL){
                child = curr->rchild;
            }
            else{
                child = curr->rchild;
            }
            if (curr==root){
                root = child;
            }
            else{
                if (parent->lchild == curr){
                    parent->lchild=child;
                }
                else{
                    parent->rchild=child;
                }
            }
            delete curr;
        }
    }
}
int main(){
    bst b;
    int ch;
    int elt;
    do{
        cout<<endl<<"What do you want to choose ?Enter 0 to exit!";
        cout<<endl<<"1) Insert node"<<endl<<"2) Search node"<<endl<<"3) Delete Node"<<endl<<"4) Display inoder";
        cout<<endl<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1: cout<<endl<<"Enter element to be inserted : ";
                    cin>>elt;  
                    b.insertNode(elt); 
                    break;
            case 2: cout<<endl<<"Enter element to be selected : ";
                    cin>>elt;
                    b.searchNode(elt);
                    break;
            case 3: cout<<endl<<"Enter element to be Deleted : ";
                    cin>>elt;
                    b.deleteNode(elt);
                    break;
            case 4: b.display();
                    break;
        }
    }while((ch!=0));
}
