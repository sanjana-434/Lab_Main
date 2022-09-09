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
        int isempty();
        void insertEnd(int);
        void insertBeg(int);
        void insertMid(int,int);
        void display();
        int sum();
        int count();
        void deleteBeg();
        void deleteMid(int);
        void deleteEnd();
        friend void segregateAlternate(ll& c,ll& ll2,ll& ll3,int);
};
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
void segregateAlternate(ll& c,ll& a,ll& b,int n){
    c.ptr=c.start;
    int count=0;
    while(c.ptr!=NULL){
        if(count%2==0){
            a.insertEnd(c.ptr->data);
        }
        else{
            b.insertEnd(c.ptr->data);
        }
        c.ptr=c.ptr->link;
        count++;
    }
}
int main(){
    ll ll1,ll2,ll3;
    int n,i,d;
    cout<<endl<<"Enter the number of elements : ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<endl<<"Enter data elt "<<i+1<<" : ";
        cin>>d;
        ll1.insertEnd(d);
    }
    ll1.display(); 
    segregateAlternate(ll1,ll2,ll3,n);
    cout<<endl<<"Displaying the two segregated linked list : ";
    cout<<endl<<"------------------------------------------";
    cout<<endl;
    ll2.display();
    cout<<endl;
    ll3.display();
}