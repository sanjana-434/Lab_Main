#include <iostream>
#include <iomanip>
using namespace std;

class Class{
    float height;
    int numberOfPupils;
public:
    void getData(int);
    void display();
};
void Class::getData(int n){
    cout<<endl<<"Entry "<<n;
    cout<<endl<<"------";
    do{
        cout<<endl<<"Heigth  : ";
        cin>>height;
    }while(!(height<200) && (height>50));
    do{
        cout<<endl<<"Number of pupils : ";
        cin>>numberOfPupils;
    }while(!(numberOfPupils>0));
}
void Class::display(){
    cout<<endl<<setw(7)<<height<<setw(5)<<"|"<<setw(10)<<numberOfPupils;
}
int main(){
    int e1,e2,e3,e4,e5;      //total number of entries in each class
    cout<<endl<<"Enter the total number of entries for class A : ";
    cin>>e1;
    cout<<endl<<"Enter the total number of entries for class B : ";
    cin>>e2;
    cout<<endl<<"Enter the total number of entries for class C : ";
    cin>>e3;
    cout<<endl<<"Enter the total number of entries for class D : ";
    cin>>e4;
    cout<<endl<<"Enter the total number of entries for class E : ";
    cin>>e5;
    int i=0;
    Class A[e1],B[e2],C[e3],D[e4],E[e5];
    //getData
    cout<<endl<<"Enter the details of class A";
    cout<<endl<<"============================";
    for (i=0;i<e1;i++){
        A[i].getData(i+1);
    }
    cout<<endl<<"Enter the details of class B";
    cout<<endl<<"============================";
    for (i=0;i<e2;i++){
        B[i].getData(i+1);
    }
    cout<<endl<<"Enter the details of class C";
    cout<<endl<<"============================";
    for (i=0;i<e3;i++){
        C[i].getData(i+1);
    }
    cout<<endl<<"Enter the details of class D";
    cout<<endl<<"============================";
    for (i=0;i<e4;i++){
        D[i].getData(i+1);
    }
    cout<<endl<<"Enter the details of class E";
    cout<<endl<<"============================";
    for (i=0;i<e5;i++){
        E[i].getData(i+1);
    }
    cout<<endl<<endl;
    cout<<endl<<"CLASS A";
    cout<<endl<<"=======";
    cout<<endl<<setw(7)<<"Height"<<setw(5)<<"|"<<setw(10)<<"Number of pupils";
    cout<<endl<<"----------------------------";
    for (i=0;i<e1;i++){
        A[i].display();
    }
    cout<<endl<<endl<<"CLASS B";
    cout<<endl<<"=======";
    cout<<endl<<setw(7)<<"Height"<<setw(5)<<"|"<<setw(10)<<"Number of pupils";
    cout<<endl<<"----------------------------";
    for (i=0;i<e2;i++){
        B[i].display();
    }
    cout<<endl<<endl<<"CLASS C";
    cout<<endl<<"=======";
    cout<<endl<<setw(7)<<"Height"<<setw(5)<<"|"<<setw(10)<<"Number of pupils";
    cout<<endl<<"----------------------------";
    for (i=0;i<e3;i++){
        C[i].display();
    }
    cout<<endl<<endl<<"CLASS D";
    cout<<endl<<"=======";
    cout<<endl<<setw(7)<<"Height"<<setw(5)<<"|"<<setw(10)<<"Number of pupils";
    cout<<endl<<"----------------------------";
    for (i=0;i<e4;i++){
        D[i].display();
    }
    cout<<endl<<endl<<"CLASS E";
    cout<<endl<<"=======";
    cout<<endl<<setw(7)<<"Height"<<setw(5)<<"|"<<setw(10)<<"Number of pupils";
    cout<<endl<<"----------------------------";
    for (i=0;i<e5;i++){
        E[i].display();
    }
}
