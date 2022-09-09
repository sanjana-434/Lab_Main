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
    string str1,str2;
    string o;
    cout<<"Enter input : ";
    cin>>str1>>str2;
    stack s;
    int j=0,f=1;
    int len=str1.size();
    for(int i=0;i<len;i++){
        s.push(str1[i]);
        if (s.top_e()==str2[j]){
            o+=str2[j];
            s.pop();
            j++;
        }
    }
    while(s.top_p()!=-1){
        if (s.top_e()==str2[j]){
            o+=str2[j];
            s.pop();
            j++;
        }
        else{
            cout<<endl<<"OUTPUT  :  Not possible ";
            f=0;
            break;
        }
    }
    if (f==1){
        cout<<endl<<"OUTPUT  :  "<<o;
    }
}