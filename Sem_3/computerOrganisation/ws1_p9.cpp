#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int precedance(char op){
    if (op=='^'){
        return 5;
    }
    else if (op=='*' || op=='/'){
        return 4;
    }
    else if(op=='+' || op=='-'){
        return 3;
    }
}

class Stack{
    char s[30];
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
    void push(char elt){
        if (!isFull()){
            top++;
            s[top]=elt;
        }
        else{
            cout<<endl<<"Stack Overflow!";
        }
    }
    char pop(){
        if (!isEmpty()){
            char temp;
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
    char topElement(){
        return s[top];
    }
};

int main(){
    char infix[20]="(A/(B-C)*D+E)";
    Stack s1;
    int index=0;
    char postfix[20];
    char temp;
    s1.push('(');
    for (int i=0;i<strlen(infix);i++){
        if (infix[i]=='('){
            s1.push('(');
        }
        else if(isalpha(infix[i])){
            postfix[index]=infix[i];
            index++;
        }
        else if(infix[i]==')'){
            while(s1.topElement()!='('){
                postfix[index++]=s1.pop();
            }
            s1.pop();
        }
        else{
            while(s1.topElement()!='('){
                if (precedance(s1.topElement()) >= precedance(infix[i])){
                    postfix[index++]=s1.pop();
                }
                else{
                    break;
                }
            }
            s1.push(infix[i]);
        }
    }
    while(s1.top_()!=0){
        postfix[index++]=s1.pop();
    }
    cout<<endl<<"Postfix :  ";
    for (int i=0;i<index;i++){
        cout<<postfix[i]<<"  ";
    }
}