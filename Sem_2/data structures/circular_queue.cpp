#include <iostream>
using namespace std;

class cir_queue{
    int rear;
    int front;
    int q[6];
public:
    cir_queue(){rear=0;front=0;}
    int front_e();
    int front_p();
    int rear_e();
    int rear_p();
    void enqueue(int);
    void dequeue();
    int len();
    int isfull();
    int isempty();
};
int cir_queue::isempty(){
    if (rear==front){
        return 1;
    }
    return 0;
}
int cir_queue::isfull(){
    if (((rear+1)%6)==front){
        return 1;
    }
    return 0;
}
int cir_queue::front_p(){
    return front+1;
}
int cir_queue::rear_p(){
    return rear;
}
int cir_queue::front_e(){
    if (isempty()){
        cout<<"front elt is not available!";
    }
    else{
        return q[front+1];
    }
}
int cir_queue::rear_e(){
    if (isempty()){
        cout<<endl<<"Rear elt is not available!";
    }
    else{
        return q[rear];
    }
}
int cir_queue::len(){
    if (rear>=front){
        return rear-front;
    }
    else{
        return (6-front+rear);
    }
}
void cir_queue::enqueue(int elt) {
    if (isfull()){
        cout<<endl<<"Circular Queue is full";
    }
    else{
        rear=(rear+1)%6;
        q[rear]=elt;
    }
}
void cir_queue::dequeue(){
    if (isempty()){
        cout<<endl<<"Circular queue is empty";
    }
    else{
        front=(front+1)%6;
    }
}

int main(){
    cir_queue q;
    char con;   //con=to continue(y/n)
    do{
        int ch;    //choice
        cout<<endl<<"MENU";
        cout<<endl<<"===="<<endl;
        cout<<endl<<"1) Enqueue";
        cout<<endl<<"2) Dequeue";
        /*
        cout<<endl<<"3) Isempty";
        cout<<endl<<"4) Isfull ";
        cout<<endl<<"5) Front index";
        cout<<endl<<"6) Front element";
        cout<<endl<<"7) Rear index";
        cout<<endl<<"8) Rear element";
        cout<<endl<<"9) Lnegth of the queue";
        */
        cout<<endl<<endl<<"Enter your choice : ";
        cin>>ch;
        int elt;
        switch(ch){
            case 1: cout<<endl<<"Enter the element to be enqueued  : ";
                    cin>>elt;
                    q.enqueue(elt);
                    break;
            case 2: q.dequeue();break;
            /*
            case 3: if (q.isempty()==0){
                        cout<<endl<<"Queue is not empty";
                    }
                    else{
                        cout<<endl<<"Queue is empty";
                    }
                    break;
            case 4: if (q.isfull()==0){
                        cout<<endl<<"Queue is not full";
                    }
                    else{
                        cout<<endl<<"Queue is full";
                    }
                    break;
            case 5: 
                    if (!q.isempty()){
                        cout<<"Peek elt : "<<q.peek();
                    }
                    else{
                        cout<<"Peek elt is not available..Queue is empty!";
                    }
            
            case 5: cout<<q.front_p();break;
            case 6: cout<<q.front_e();break;
            case 7: cout<<q.rear_p();break;
            case 8: cout<<q.rear_e();break;
            */
            }
        cout<<endl<<"Rear  : "<<q.rear_p()<< "  : "<<q.rear_e();
        cout<<endl<<"Front : "<<q.front_p()<<"  : "<<q.front_e();
            
        cout<<endl<<"Do u want to continue ? (y/n) : ";
        cin>>con;

    }while(con=='y');
}