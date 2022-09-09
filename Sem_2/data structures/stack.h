#include <iostream>
using namespace std;

class stack{
    int top;
    int s[10];
public:
    int isfull();
    int isempty();
    void push(int);
    int pop();
    int top_e();
    int top_p();
};

int stack::isfull(){
    if (top==9){
        return 1;
    }
    return 0;
}
int stack::isempty(){
    if (top==-1){
        return 1;
    }
    return 0;
}
void stack::push(int elt){
    if(isfull()){
        cout<<endl<<"Overflow! ";
    }
    else{
        top++;
        s[top]=elt;
    }
}
int stack::pop(){
    if (isempty()){
        cout<<"Underflow!";
    }
    else{
        int cpy=s[top];
        top--;
        return cpy;
    }
}
int stack::top_e(){
    return s[top];
}
int stack::top_p(){
    return top;
}