#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* link;
};

class ll{
    node* start,* ptr;
public:
    ll(){
        start=NULL;
    }
    void createNode(int);
    void addNode(int);
    void display();
    void swap(int ,int);
    void reverse();

};
void ll::createNode(int elt){
    node* n=new node;
    n->data=elt;
    n->link=NULL;
    start=n;
}
void ll::addNode(int elt){
    if (start==NULL){
        createNode(elt);
    }
    else{
        node* n=new node;
        n->data=elt;
        n->link=NULL;
        ptr=start;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=n;
    }
}
void ll::display(){
    cout<<endl;
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<"---->";
        ptr=ptr->link;
    }
}
void ll::swap(int d1,int d2){
    node* prev1=new node;
    node* ptr1=new node;
    node* prev2=new node;
    node* ptr2=new node;
    node* temp=new node;
    ptr=start;
    node* prev=NULL;
    while(ptr!=NULL && ptr->data!=d1){
        cout<<"*";
        prev=ptr;
        ptr=ptr->link;
    }
    ptr1=ptr;
    prev1=prev;
    ptr=start;
    prev=NULL;
    while(ptr!=NULL && ptr->data!=d2){
        cout<<"&";
        prev=ptr;
        ptr=ptr->link;
    }
    ptr2=ptr;
    prev2=prev;
    
        /*if (ptr->data==d1){
            ptr1=ptr;
            prev1=prev;
        }
        if (ptr->data==d2)
        {
            ptr2=ptr;
            prev2=prev;
        }
        prev->link=ptr;
        ptr=ptr->link;*/
    if (prev1==NULL){
        temp=ptr1->link;
        ptr1->link=ptr2->link;
        ptr2->link=temp;
        prev2->link=ptr1;
        start=ptr2;
    }
    if (prev2==NULL){
        temp=ptr2->link;
        ptr2->link=ptr1->link;
        ptr1->link=temp;
        prev1->link=ptr2;
        start=ptr1;
    }
    if (prev1!=NULL && prev2!=NULL){
        temp=ptr1->link;
        ptr1->link=ptr2->link;
        ptr2->link=temp;
        prev2->link=ptr1;
        prev1->link=ptr2;

    }
}
void ll::reverse(){
    node* prev=NULL;
    ptr=start;
    node* next=ptr->link;
    while(next!=NULL){
        ptr->link=prev;
        prev=ptr;
        ptr=next;
        next=next->link;
    }
    ptr->link=prev;
    start=ptr;
}
int main(){
    ll l;
    l.addNode(10);
    l.addNode(20);
    l.addNode(30);
    l.addNode(40);
    l.addNode(50);
    l.addNode(60);
    l.addNode(70);
    l.addNode(80);
    l.display();
    l.swap(10,50);
    l.display();
    l.swap(10,50);
    l.display();
    l.swap(40,80);
    l.display();
    l.reverse();
    l.display();
}