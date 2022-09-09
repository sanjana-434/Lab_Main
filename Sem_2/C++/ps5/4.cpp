//CODE WRITTEN BY SANJANA R ON 14/04/2022

#include <iostream>
using namespace std;

class Sports;
class Academic{
    int rollNo;
    string name;
    float marks[5];
public:
    void input();
    void display();
    friend void total(const Academic& a,const Sports& b);
};
void Academic::input(){
    int i=0;
    cout<<endl<<"Enter roll no : ";
    cin>>rollNo;
    cout<<endl<<"Enter name : ";
    cin>>name;
    cout<<endl<<"Enter marks in 5 subjects : ";
    for (i=0;i<5;i++){
        cin>>marks[i];
    }
}
void Academic::display(){
    cout<<endl<<"Displaying the Details of the student (Academic) ";
    cout<<endl<<"------------------------------------------------";
    cout<<endl<<"Roll No : "<<rollNo;
    cout<<endl<<"Name : "<<name;
    for (int i=1;i<6;i++){
        cout<<endl<<"Mark "<<i<<" : "<<marks[i];
    }
}

class Sports{
    int rollNo;
    float mark;
public:
    void input();
    void display();
    friend void total(const Academic& a,const Sports& b);
};
void Sports::input(){
    int i=0;
    cout<<endl<<"Enter roll no : ";
    cin>>rollNo;
    cout<<endl<<"Enter sport's Score : ";
    cin>>mark;
    
}
void Sports::display(){
    cout<<endl<<"Displaying the Details of the student (Sports) ";
    cout<<endl<<"----------------------------------------------";
    cout<<endl<<"Roll No : "<<rollNo;
    cout<<endl<<"Sports score :"<<mark;
}

void total(const Academic& a,const Sports& b){
    float m=0;
    if (a.rollNo==b.rollNo){
        cout<<endl<<"Roll number are matching";
        for (int i=0;i<5;i++){
            m+=a.marks[i];
        }
        m=m+b.mark;
        cout<<endl<<"Total score : "<<m;
    }
    else{
        cout<<endl<<"Roll number doesn't match";
    }
}

int main(){
    Academic a1;
    Sports s1;
    a1.input();
    s1.input();
    a1.display();
    s1.display();
    total(a1,s1);

}