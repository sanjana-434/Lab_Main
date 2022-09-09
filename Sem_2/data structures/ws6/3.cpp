#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* link;
};
class ll{
    node* start;
    node* ptr;
    public:
        ll(){
            start=NULL;
        }
        void createNode(int);
        void insertNode(int);
        void display();
        void reversekNodes(int);
};
void ll::createNode(int d){
    node* n= new node;
    n->data=d;
    n->link=NULL;
    start=n;
}
void ll::insertNode(int d){
    if (start==NULL){
        createNode(d);
    }
    else{
        node* n=new node;
        ptr=start;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=n;
        n->data=d;
        n->link=NULL;
    }
}
void ll::display(){
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<"---->";
        ptr=ptr->link;
    }
}
void ll::reversekNodes(int k){
    ptr=start;
    node* prev=new node;
    node* next=new node;
    node* temp1=new node;
    node* temp2=new node;
    prev=NULL;
    next=ptr->link;
    int j=0;
    while(next!=NULL){
        cout<<"((";
        temp1=ptr;
        temp2=prev;
        for (int i=0;i<k;i++){
            cout<<"1";
            ptr->link=prev;
            cout<<"2";
            prev=ptr;
            cout<<"3";
            ptr=next;
            cout<<"4";
            next=next->link;
            cout<<"#";
        }
        if (j==0){
            start=prev;
        }
        else{
            temp2->link=prev;
        }
        temp1->link=ptr;
        cout<<"&&&";
        for (int i=0;i<k;i++){
            if (next==NULL){
                break;
            }
            prev=ptr;
            ptr=next;
            next=next->link;
            cout<<"%";
        }
        j++;
        cout<<endl;
        display();
        
    }
}
int main(){
    ll l;
    l.insertNode(10);
    l.insertNode(20);
    l.insertNode(30);
    l.insertNode(40);
    l.insertNode(50);
    l.insertNode(60);
    l.insertNode(70);
    l.insertNode(80);
    l.insertNode(90);
    l.insertNode(100);
    l.insertNode(76);
    l.display();
    l.reversekNodes(2);
    l.display();
}