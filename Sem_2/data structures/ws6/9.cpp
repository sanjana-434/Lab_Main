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
        void insertEnd(int);
        void display();
        void swap(int p1,int p2);
        void sort();
        int count();
};
void ll::swap(int p1,int p2){
    node* ptr1=new node;
    node* ptr2=new node;
    node* temp=new node;
    node* prev1=new node;
    node* prev2=new node;
    node* next1=new node;
    node* next2=new node;
    ptr=start;
    int c1,c2;
    c1=1,c2=1;
    while(ptr!=NULL){
        c1++;
        c2++;
        if (c1==p1){
            prev1=ptr;
            ptr1=ptr->link;
            next1=ptr1->link;
        }
        if (c2==p2){
            prev1=ptr;
            ptr2=ptr->link;
            next2=ptr2->link;
        }
        ptr=ptr->link;
    }
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;
    prev1->link=ptr1;
    ptr1->link=next1;
    prev2->link=ptr2;
    ptr2->link=next2;
}
/*
void ll::swap(int p1,int p2){
    node* ptr1=new node;
    node* ptr2=new node;
    node* temp=new node;
    node* prev1=new node;
    node* prev2=new node;
    ptr=start;
    int c1,c2;
    c1=1,c2=1;
    while(ptr!=NULL){
        c1++;
        c2++;
        if (c1==p1){
            prev1=ptr;
            ptr1=ptr->link;
            temp=ptr1->link;
        }
        if (c2==p2){
            prev2=ptr;
            ptr2=ptr->link;
        }
        ptr=ptr->link;
    }
    ptr1->link=ptr2->link;
    ptr2->link=temp;
    prev1->link=ptr2;
    prev2->link=ptr1;
}
*/
void ll::createNode(int d){
    node* n= new node;
    n->data=d;
    n->link=NULL;
    start=n;
}
int ll::count(){
    int c=0;
    ptr=start;
    while(ptr!=NULL){
        c++;
        ptr=ptr->link;
    }
    return c;
}
void ll::insertEnd(int d){
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
void ll::sort(){
    ptr=start;
    int i=1;
    while(ptr->link!=NULL){
        if ((ptr->data) > (ptr->link->data)){
            swap(i,i+1);
            i=0;
            ptr=start;
        }
        else{
            i++;
            ptr=ptr->link;
        }
    }
}
void ll::display(){
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<"---->";
        ptr=ptr->link;
    }
}

int main(){
    ll s;
    s.insertEnd(20);
    s.insertEnd(13);
    s.insertEnd(65);
    s.insertEnd(32);
    s.insertEnd(9);
    s.insertEnd(43);
    s.insertEnd(12);
    s.display();
    cout<<endl;

    s.swap(2,7);
    s.display();
    cout<<endl;
    s.swap(2,3);
    s.display();
    cout<<endl;
    s.swap(3,4);
    s.display();
    cout<<endl;
    s.swap(6,7);
    s.display();
    cout<<endl;
    s.swap(6,7);
    s.display();
    s.swap(4,5);
    s.display();
}