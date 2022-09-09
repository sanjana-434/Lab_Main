#include <iostream>
#include <cstring>
using namespace std;

int value(char ch){
    switch(ch){
        case 'A':return 3;
        case 'B':return 4;
        case 'C':return 2;
        case 'D':return 5;
    }
}

class Stack{
    int s[30];
    int top;
public:
    Stack(){
        top=-1;
    }
    int isEmpty(){
        if (top==-1){
            return 1;
        }
        return 0;
    }
    int isFull(){
        if (top==29){
            return 1;
        }
        return 0;
    }
    void push(int elt){
        if (!isFull()){
            top++;
            s[top]=elt;
        }
        else{
            cout<<endl<<"Stack Overflow!";
        }
    }
    int pop(){
        if (!isEmpty()){
            int temp;
            temp=s[top];
            top--;
            return temp;
        }
        else{
            cout<<endl<<"Stack Underflow!";
        }
    }
    int top_(){
        return top;
    }
    int topElement(){
        return s[top];
    }
};

int main(){
    char postfix[20]="AB*CD*+";
    Stack s1;
    for (int i=0;i<strlen(postfix);i++){
        if (isalpha(postfix[i])){
            s1.push(value(postfix[i]));
        }
        else{
            int temp;
            int a=s1.pop();
            int b=s1.pop();
            if (postfix[i]=='+'){
                temp=a+b;
            }
            else if (postfix[i]=='-'){
                temp=a-b;
            }
            else if (postfix[i]=='*'){
                temp=a*b;
            }
            else if (postfix[i]=='/'){
                temp=a/b;
            }
            else if(postfix[i]=='^'){
                temp=a^b;
            }
            s1.push(temp);
        }
    }
    cout<<endl<<"Result : "<<s1.pop();

}