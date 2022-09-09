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
int main(){
    ll ll1;
    int ch;
    int d,pos;
    do{
        cout<<endl<<"What do you wanna choose ? Enter 0 to exit";
        cout<<endl<<"1) Create node";
        cout<<endl<<"2) Insert at start";
        cout<<endl<<"3) Insert at middle";
        cout<<endl<<"4) Insert at end";
        cout<<endl<<"5) Delete at start";
        cout<<endl<<"6) Delete at end";
        cout<<endl<<"7) Delete at middle";
        cout<<endl<<"8) Sum of all elements";
        cout<<endl<<"9) Number of nodes";
        cout<<endl<<"10) Display"<<endl;
        cin>>ch;
        switch(ch){
            case 1: cout<<endl<<"Enter the data : ";
                    cin>>d;
                    ll1.createNode(d);
                    break;
            case 2: cout<<endl<<"Enter the data : ";
                    cin>>d;
                    ll1.insertBeg(d);
                    break;
            case 3: cout<<endl<<"Enter the data and the position : ";
                    cin>>d>>pos;
                    ll1.insertMid(d,pos);
                    break;
            case 4: cout<<endl<<"Enter the data : ";
                    cin>>d;
                    ll1.insertEnd(d);
                    break;
            case 5: ll1.deleteBeg();break;
            case 6: ll1.deleteEnd();break;
            case 7: cout<<endl<<"Enter the position of element to be deleted : ";
                    cin>>pos;
                    ll1.deleteMid(pos);break;
            case 8: cout<<endl<<"Sum : "<<ll1.sum();break;
            case 9: cout<<endl<<"Count : "<<ll1.count();break;
            case 10:cout<<endl<<"Displaying the elements";
                    cout<<endl<<"------------------------"<<endl;
                    ll1.display();
                    break;
        }
    }while(ch!=0);
}