#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* link;
};

class ll{
    node* start,*ptr;
public:
    ll(){
        start=NULL;
    }
    void createNode(int);
    void insertEnd(int);
    void display();
    void palindrome();
    int count();
    int giveDataByPos(int);
};
void ll::createNode(int elt){
    node* n=new node;
    n->data=elt;
    n->link=NULL;
    start=n;
}
void ll::insertEnd(int elt){
    if (start == NULL){
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
int ll::count(){
    int c=0;
    ptr=start;
    while(ptr!=NULL){
        c++;
        ptr=ptr->link;
    }
    return c;
}
int ll::giveDataByPos(int pos){
    int c=1;
    ptr=start;
    while(ptr!=NULL){
        if (c==pos){
            return ptr->data;
        }
        c++;
        ptr=ptr->link;
    }
}
void ll::palindrome(){
    int p1=1;
    int p2=count();
    int flag=1;
    for (int i=0;i<(int)(count()/2);i++){
        if (giveDataByPos(p1)!=giveDataByPos(p2)){
            flag=0;
            break;
        }
        p1++;
        p2--;
    }
    if (flag==1){
        cout<<endl<<"Palindrome";
    }
    else{
        cout<<endl<<"Not palindrome";
    }
}
int main(){
    ll p;
    p.insertEnd(1);
    p.insertEnd(2);
    p.insertEnd(3);
    p.insertEnd(4);
    p.insertEnd(4);
    p.insertEnd(3);
    p.insertEnd(2);
    p.insertEnd(1);
    p.palindrome();

}