//Datastructure - linear queue
#include <iostream>
using namespace std;


class queue{
    int front;
    int rear; 
    int q[5];
public:
    queue(){front=-1;rear=-1;}
    void enqueue(int);
    void dequeue();
    int isfull();
    int isempty();
    int peek();   //front elt
    /*
    int front_p();
    int rear_p();
    int front_e();
    int rear_e();
    */
};

void queue::enqueue(int elt){
    if (isfull()){
        cout<<endl<<"Queue is full!";
    }
    else{
        q[++rear]=elt;
    }
}
void queue::dequeue(){
    if (isempty()){
        cout<<"Queue is empty!";
    }
    else{
        front++;
    }
}
int queue::isfull(){
    if (rear==4){
        return 1;
    }
    return 0;
}
int queue::isempty(){
    if (rear==front){
        return 1;
    }
    return 0;
}
int queue::peek(){
    return q[front+1];
}
/*
int queue::front_e(){
    return q[front+1];
}
int queue::front_p(){
    return front;
}
int queue::rear_e(){
    return q[rear];
}
int queue::rear_p(){
    return rear;
}
*/

int main(){
    queue q;
    char con;   //con=to continue(y/n)
    do{
        int ch;    //choice
        cout<<endl<<"MENU";
        cout<<endl<<"===="<<endl;
        cout<<endl<<"1) Enqueue";
        cout<<endl<<"2) Dequeue";
        cout<<endl<<"3) Isempty";
        cout<<endl<<"4) Is full ";
        cout<<endl<<"5) Peek";
        /*
        cout<<endl<<"5) Front index";
        cout<<endl<<"6) Front element";
        cout<<endl<<"7) Rear index";
        cout<<endl<<"8) Rear element";
        */
        cout<<endl<<"Enter your choice : ";
        cin>>ch;
        int elt;
        switch(ch){
            case 1: cout<<endl<<"Enter the element to be enqueued  : ";
                    cin>>elt;
                    q.enqueue(elt);
                    break;
            case 2: q.dequeue();break;
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
            /*
            case 5: cout<<q.front_p();break;
            case 6: cout<<q.front_e();break;
            case 7: cout<<q.rear_p();break;
            case 8: cout<<q.rear_e();break;
            */
            }
        cout<<endl<<"Do u want to continue ? (y/n) : ";
        cin>>con;

    }while(con=='y');
}