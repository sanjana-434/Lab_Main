#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* bwd;
    node* fwd;
};
class dll{
    node* ptr,*start;
public:
    dll(){
        start=NULL;
    }
    void createNode(int elt){
        node* n=new node;
        n->data=elt;
        n->bwd=NULL;
        n->fwd=NULL;
        start=n;
    }
    void insertNode_end(int elt){
        if (start==NULL){
            createNode(elt);
        }
        else{
            ptr=start;
            while(ptr->fwd!=NULL){
                ptr=ptr->fwd;
            }
            node* n=new node;
            n->data=elt;
            n->fwd=NULL;
            n->bwd=ptr;
            ptr->fwd=n;
        }
    }
    void insertNode_beg(int elt){
        if (start==NULL){
            createNode(elt);
        }
        else{
            node* n=new node;
            n->data=elt;
            n->fwd=start;
            n->bwd=NULL;
            start=n;
        }
    }
    void insertNode_mid(int elt,int afterWhich){
        if (start==NULL){
            createNode(elt);
        }
        else{
            ptr=start;
            while(ptr!=NULL){
                if(ptr->data==afterWhich){
                    node* n=new node;
                    n->data=elt;
                    n->fwd=ptr->fwd;
                    n->bwd=ptr;
                    ptr->fwd->bwd=n;
                    ptr->fwd=n;
                    break;
                }
                ptr=ptr->fwd;
            }
        }
    }
    void delete_end(){
        ptr=start;
        node* temp=new node;
        while(ptr->fwd->fwd!=NULL){
            ptr=ptr->fwd;
        }
        temp=ptr->fwd;
        ptr->fwd=NULL;
        delete temp;
    }
    void delete_beg(){
        node* temp=new node;
        temp=start;
        start=start->fwd;
        delete temp;
    }
    void delete_mid(int d){
        ptr=start;
        while(ptr->fwd!=NULL){
            if (ptr->fwd->data==d){
                node* temp=ptr->fwd;
                ptr->fwd=temp->fwd;
                temp->fwd->bwd=ptr;
                break;
            }
            ptr=ptr->fwd;
        }
    }
    void display(){
        ptr=start;
        cout<<endl<<"Elements  : " ;
        while(ptr!=NULL){
            cout<<ptr->data<<"   ";
            ptr=ptr->fwd;
        }
    }

};

int main(){
    int ch;
    int elt,afterWhich;
    dll d;
    do{
        cout<<endl<<"What do you wanna choose ? Enter 0 to exit";
        cout<<endl<<"1) Insert end";
        cout<<endl<<"2) Insert beg";
        cout<<endl<<"3) Insert mid";
        cout<<endl<<"4) Delete end";
        cout<<endl<<"5) Delete mid";
        cout<<endl<<"6) Delete beg";
        cout<<endl<<"7) Display"<<endl;
        cin>>ch;
        switch(ch){
            case 1: cout<<endl<<"Enter elt : ";
                    cin>>elt;
                    d.insertNode_end(elt);
                    break;
            case 2: cout<<endl<<"Enter elt : ";
                    cin>>elt;
                    d.insertNode_beg(elt);
                    break;
            case 3: cout<<endl<<"Enter elt : ";
                    cin>>elt;
                    cout<<endl<<"Enter after which elt u wanna insert : ";
                    cin>>afterWhich;
                    d.insertNode_mid(elt,afterWhich);
                    break;
            case 4: d.delete_end();break;
            case 5: cout<<endl<<"Enter elt : ";
                    cin>>elt;
                    d.delete_mid(elt);
                    break;
            case 6: d.delete_beg();break;
            case 7: d.display();break;

        }
    }while(ch!=0);
}