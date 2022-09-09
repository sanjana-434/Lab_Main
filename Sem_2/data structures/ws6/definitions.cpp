#include <iostream>
#include "ll.h"
using namespace std;

ll::ll(){
    start=NULL;
}
void ll::deleteBeg(){
    ptr=start;
    start=ptr->link;
    delete ptr;
}
void ll::deleteEnd(){
    ptr=start;
    while(ptr->link->link!=NULL){
        ptr=ptr->link;
    }
    node *last=ptr->link;
    ptr->link=NULL;
    delete last;
}
void ll::deleteMid(int pos){
    ptr=start;
    int count=1;
    while(ptr!=NULL){
        if((count+1)==pos){
            node* mid=ptr->link;
            ptr->link=ptr->link->link;
            count++;
            delete mid;
        }
        ptr=ptr->link;
    }
}
int ll::count(){
    ptr=start;
    int c=1;
    while(ptr->link!=NULL){
        c++;
        ptr=ptr->link;
    }
    return c;
}
int ll::sum(){
    ptr=start;
    int s=0;
    while(ptr!=NULL){
        s+=ptr->data;
        ptr=ptr->link;
    }
    return s;
}
int ll::isempty(){
    if (start==NULL){
        return 1;
    }
    return 0;
}
void ll::createNode(int d){
    node* n= new node;
    n->data=d;
    n->link=NULL;
    start=n;
}
void ll::insertEnd(int d){
    if (isempty()){
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
void ll::insertBeg(int d){
    if(isempty()){
        createNode(d);
    }
    else{
        node* n=new node;
        n->data=d;
        n->link=start;
        start=n;
    }
}
void ll::insertMid(int d,int pos){
    if(isempty()){
        cout<<"ll is empty.So we cannot insert in middle";
        createNode(d);
    }
    else{
        node* n=new node;
        ptr=start;
        int count=1;
        while(ptr->link!=NULL){
            if (count+1==pos){
                n->link=ptr->link;
                ptr->link=n;
                n->data=d;
                count++;
                break;
            }
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
void ll::equalOrNot(ll& ll2){
    node* ptr2=ll2.start;
    ptr=start;
    int f=1;
    while(ptr!=NULL){
        if (ptr->data!=ptr2->data){
            cout<<endl<<"Not Equal";
            f=0;
            break;
        }
        ptr=ptr->link;
        ptr2=ptr2->link;
    }
    if(f==1){
        cout<<endl<<"Equal";
    }
}
int ll::findMiddle(){
    //hare and tortoise
    node* h=start;
    node* t=start;
    int d; 
    while(h->link->link!=NULL && h->link!=NULL){
        h=h->link->link;
        t=t->link;
        d=t->data;
        cout<<d;
    }
    return d;
}