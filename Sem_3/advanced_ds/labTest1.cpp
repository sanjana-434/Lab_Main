//code written by SANJANA R (21pd31)
//closest Ancestor to two nodes 
//elt not found case is inored

#include <iostream>
using namespace std;

class node{
public:
    int key;
    node* lchild;
    node* rchild;
};

class binarySearchTree{
private:
    node* ptr,*root;
public:
    binarySearchTree(){
        root=NULL;
    }
    void createNode(int elt){
        node* n=new node;
        n->key = elt;;
        n->lchild = NULL;
        n->rchild = NULL;
        root=n;
    }
    node* insertNode(int elt){
        if (root==NULL){
            createNode(elt);
        }
        else{
            node* q=new node;
            ptr=root;
            while (ptr!=NULL){
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
            node* n=new node;
            n->key=elt;
            n->lchild=NULL;
            n->rchild=NULL;
            if (q->key > elt){
                q->lchild=n;
            }
            else{
                q->rchild=n;
            }
        }
    }
    void display(){
        cout<<endl<<"Inorder Traversal : ";
        inorderTraversal(root);
    }
    void inorderTraversal(node* n){
        if (n!=NULL){
            inorderTraversal(n->lchild);
            cout<<n->key<<"  ";
            inorderTraversal(n->rchild);
        }
    }
    int* searchNode(int &l,int elt,int* arr){
        ptr=root;
        while (ptr!=NULL)
        {
            if (ptr->key > elt){
                arr[l++]=ptr->key;
                ptr=ptr->lchild;
            }
            else if(ptr->key < elt){
                arr[l++]=ptr->key;
                ptr=ptr->rchild;
            }
            else{
                arr[l++]=ptr->key;
                break;
            }
        }
        return arr;
        
    }
    int closestAncestorOfTwoNodes(int elt1,int elt2){
        int arr[20];
        int arr_[20];
        int l1=0,l2=0;
        int* arr1=searchNode(l1,elt1,arr);
        int* arr2=searchNode(l2,elt2,arr_);
        int i,j;
        int closestElt=root->key;
        cout<<endl<<"arr1 : ";
        for (i=0;i<l1;i++){
            cout<<arr1[i]<<"  ";
        }
        cout<<endl<<"arr2 : ";
        for (i=0;i<l2;i++){
            cout<<arr2[i]<<"  ";
        }
        for (i=0,j=0;i<l1 && j<l2;i++,j++){
            if (arr1[i]==arr2[j]){
                closestElt=arr1[i];
            }
            else{
                break;
            }
        }
        return closestElt;

    }
};
int main(){
    binarySearchTree b;
    b.insertNode(8);
    b.insertNode(3);
    b.insertNode(10);
    b.insertNode(1);
    b.insertNode(6);
    b.insertNode(14);
    b.insertNode(4);
    b.insertNode(7);
    b.insertNode(13);
    int elt1,elt2;
    cout<<endl<<"Enter the two elts : ";
    cin>>elt1>>elt2;
    int closestElt = b.closestAncestorOfTwoNodes(elt1,elt2);
    b.display();
    cout<<endl<<"Closest Ancestor to both the elements : "<<closestElt;
}