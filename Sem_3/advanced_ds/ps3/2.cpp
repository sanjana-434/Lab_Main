#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>

using namespace std;

ifstream fin;
ofstream fout;

class node{
public :
    string word;
    node* left;
    node* right;
    int height;
};

class avl{
    node*parent,*child,*curr;
public:
    int max(int a,int b){
        if(a>b) return a;
        return b;
    }
    int getHeight(node* n){
        if (n==NULL){
            return 0;
        }
        return n->height;
    }
    int getBalance(node* n ){
        if (n==NULL){
            return 0;
        }
        return getHeight(n->left) - getHeight(n->right);
    }
    node* newNode(string word){
        node* n = new node;
        n->word = word;
        n->left = NULL;
        n->right = NULL;
        n->height = 1;
        return n;
    }
    node* LL(node* x){
        node* y = x->left;
        node* t = y->right;
        x->right = y;
        y->left = t;
        y->height = 1+max(getHeight(y->left),getHeight(y->right));
        x->height = 1+max(getHeight(x->left),getHeight(x->right));
        return x;
    }
    node* RR(node* x){
        node* y = x->right;
        node* t = y->left;
        x->left = y;
        y->right = t;
        y->height = 1+max(getHeight(y->left),getHeight(y->right));
        x->height = 1+max(getHeight(x->left),getHeight(x->right));
        return x;
    }
    node* insertNode_(node* n,string word){
        if (n==NULL){
            return newNode(word);
        }
        else if (n->word>word){
            n->left = insertNode_(n->left,word);
        }
        else{
            n->right = insertNode_(n->right,word);
        }
        n->height = 1+ max(getHeight(n->left),getHeight(n->right));
        int b = getBalance(n);
        if (b>1 && n->left->word>word){
            return LL(n);
        }
        else if (b>1 && n->left->word<word){
            n->left = RR(n->left);
            return LL(n);
        }
        else if (b<-1 && n->right->word<word){
            return RR(n);
        }
        else if (b<-1 && (n->right->word>word)){
            n->right = RR(n->right);
            return LL(n);
        }
        return n;
    }

    void inorder(node* n){
        if (n!=NULL){
            inorder(n->left);
            cout<<n->word<<"    &&    ";
            inorder(n->right);
        }
    }
   
    node* getNode_(node* n){
        if (n!=NULL){
            getNode_(n->left);
            return n;
            getNode_(n->right);
        }
    }
    string getWord(node* n){
        return n->word;
    }
    void writeIntoFile_(node* n){
        if (n!=NULL){
            writeIntoFile_(n->left);
            fout.open("dict.txt",ios::app);
            fout<<n->word<<"\n";
            fout.close();
            writeIntoFile_(n->right);
        }
    }
    void writeIntoFile(node* root){
        
        writeIntoFile_(root);
        
    }


};

avl a;
node* z = new node;
int insertWord_f(string word);
int display();

int main(){
    int ch;
    string word ;
    do{
        cout<<endl<<"What do youn want to do? Enter 0 to exit";
        cout<<endl<<"1) Insert a Node";
        cout<<endl<<"2) Delete a Node";
        cout<<endl<<"3) Display all nodes";
        cout<<endl<<"4) Count Nodes";
        cout<<endl<<"5) Search a word";
        cout<<endl<<"Enter your choice : ";
        cin>>ch;
        
        switch(ch){
            case 1: cout<<endl<<"Enter a word to be inserted : ";
                    cin.ignore(1000,'\n');
                    //cout<<endl<<"$$8";
                    cin>>word;
                    //cout<<endl<<"$$"<<word;
                    insertWord_f(word);
                    break;
            case 3: cout<<endl<<"Displaying the contents : ";
                    display();
                    break;
        }
    }while (ch!=0);
}
string str;
int insertWord_f(string word){
    node* root= new node;
    root = NULL;
    fin.open("dict.txt");
    if (!fin){
        cout<<endl<<"Error in opening file";
    }
    else{
        while(getline(fin,str)){
            root = a.insertNode_(root ,str);
        }   
    }
    fin.close();
    //cout<<endl<<"##3";
//write into file
    root = a.insertNode_(root,word);
    //cout<<endl<<"$";
    fout.open("dict.txt",ios::trunc);
    fout.close();
    //a.inorder(root);
    a.writeIntoFile(root);
    //cout<<endl<<"@#@#$";
    //a.inorder(root);
}
int display(){
    fin.open("dict.txt",ios::in);
    if (!fin){
        cout<<endl<<"Error opening file";
        return 0;
    }
    node* root = new node;
    root = NULL;
    //cout<<endl<<"111111111";
    while(getline(fin,str)){
        root = a.insertNode_(root ,str);
    }
    a.inorder(root);
    fin.close();
}