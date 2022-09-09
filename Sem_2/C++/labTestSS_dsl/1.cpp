#include <iostream>
using namespace std;

class stack{
    int top;
    char s[50];
public:
    stack(){top=-1;}
    int isempty();
    int isfull();
    void push(char elt);
    void pop();
    char top_e();
    int top_p();
};
int stack::isempty(){
    if (top==-1){
        return 1;
    }
    return 0;
}
int stack::isfull(){
    if (top==50){
        return 1;
    }
    return 0;
}
void stack::push(char elt){
    if (isfull()){
        cout<<"Overflow";
    }
    else{
        top++;
        s[top]=elt;
    }
}
void stack::pop(){
    if (isempty()){
        cout<<"Underflow";
    }
    else{
        top--;
    }
}
char stack::top_e(){
    return s[top];
}
int stack::top_p(){
    return top;
}

int main(){
    int i=0;
    string str;
    stack s;
    cout<<"Enter string : ";
    getline(cin,str);
    int len=str.size();

    for (i=0;i<len;i++){
        s.push(str[i]);
    }
    int count=0;
    while( s.top_e()=='<'){
        count++;
        s.pop();
    }

    cout<<"%%"<<count;
    for (i=0;i<count;i++){
        s.pop();
    }


    stack s2;
    while(s.top_p()!=-1){
        s2.push(s.top_e());
        s.pop();
    }
    cout<<endl<<"Output : "<<endl;
    while (s2.top_p()!=-1){
        cout<<s2.top_e();
        s2.pop();
    }
}