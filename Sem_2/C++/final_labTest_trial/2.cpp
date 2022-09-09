#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class date{
public:
    int d;
    int m;
    int y;
};
ostream& operator<<(ostream& out,date d){
    out<<d.d<<"/"<<d.m<<"/"<<d.y;
}

class student{
    int studentID;
    string name;
    string branch;
    string dept;
    date dateOfJoining;
public:
    void display(){
        cout<<endl<<setw(20)<<studentID<<setw(20)<<name<<setw(20)<<branch<<setw(20)<<dept<<setw(20)<<dateOfJoining;
    }
    void setData(){
        cout<<endl<<"Enter the following details : ";
        cout<<endl<<"----------------------------";
        cout<<endl<<"Student ID : ";
        cin>>studentID;
        cout<<endl<<"Name       : ";
        cin>>name;
        cout<<endl<<"Branch     : ";
        cin>>branch;
        cout<<endl<<"Dept       : ";
        cin>>dept;
        cout<<endl<<"Date of joining  :  ";
        cin>>dateOfJoining.d>>dateOfJoining.m>>dateOfJoining.y;
    }
    int getStudentID(){
        return studentID;
    }
    void modify_branch(string b){
        branch=b;
    }
    void modify_dept(string d){
        dept=d;
    }
};
student s;
fstream f;

void addRecord();
void generateReport();
void searchRecord();
void updateRecord();
void updateRecord_branch();
void updateRecord_dept();
void deleteRecord();
int count();
void sort();

int main(){
    int ch;
    int id;
    do{
        system("cls");
        cout<<endl<<"What do you want to choose ? Enter 0 to exit";
        cout<<endl<<"--------------------------------------------";
        cout<<endl<<"1) Add new record";
        cout<<endl<<"2) Search for a record ";
        cout<<endl<<"3) Update record by student ID";
        cout<<endl<<"4) Generate Report";
        cout<<endl<<"5) Delete Record by student ID";
        cout<<endl<<"6) Sort records by student ID"<<endl;
        cin>>ch;
        switch(ch){
            case 1 : addRecord();
                     cout<<endl<<"Press any key for main menu !";
                     getch();
                     break;
            case 2 : searchRecord();
                     cout<<endl<<"Press any key for main menu !";
                     getch();
                     break;
            case 3 : updateRecord();
                     cout<<endl<<"Press any key for main menu !";
                     getch();
                     break;
            case 4 : generateReport();
                     cout<<endl<<"Press any key for main menu !";
                     getch();
                     break;
            case 5 : deleteRecord(); 
                     cout<<endl<<"Press any key for main menu !";
                     getch();
                     break;
            case 6 : sort();
                     cout<<endl<<"Press any key for main menu !";
                     getch();
                     break;

        }
        
    }while(ch!=0);

}

void sort(){
    int c=count();
    int index=0;
    student temp;
    student* s1=new student[c];
    f.open("student.bin",ios::binary|ios::in);
    if(!f){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        while(f.read((char*)&s,sizeof(s))){
            s1[index++]=s;
        }
    }
    f.close();
    for (int i=0;i<c-1;i++){
        if (s1[i].getStudentID()>s1[i+1].getStudentID()){
            temp=s1[i];
            s1[i]=s1[i+1];
            s1[i+1]=temp;
            i=-1;
        }
    }
    f.open("student.bin",ios::binary|ios::out);
    f.write((char*)s1,sizeof(s)*c);
    f.close();
}
int count(){
    int c=0;
    f.open("student.bin",ios::binary|ios::in);
    if(!f){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        while(f.read((char*)&s,sizeof(s))){
            c++;
        }
    }
    f.close();
    return c;
}

void deleteRecord(){
    int flag=0;
    f.open("student.bin",ios::binary|ios::in);
    fstream f2("temp.bin",ios::binary|ios::out);
    if (!f && !f2){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        int id;
        cout<<endl<<"Enter Student Id to be deleted  : ";
        cin>>id;
        while(f.read((char*)&s,sizeof(s))){
            if (id!=s.getStudentID()){
                f2.write((char*)&s,sizeof(s));
            }
            else{
                flag=1;
            }
        }
    }
    f.close();
    f2.close();
    remove("student.bin");
    rename("temp.bin","student.bin");
    if (flag==0){
        cout<<endl<<"No such record is found !";
    }
}
void addRecord(){
    f.open("student.bin",ios::binary|ios::app|ios::out);
    if (!f){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        s.setData();
        f.write((char*)&s,sizeof(s));
    }
    f.close();
}
void generateReport(){
    f.open("student.bin",ios::binary|ios::in);
    if(!f){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------";
        cout<<endl<<setw(20)<<"student ID" <<setw(20)<<"name"<<setw(20)<<"branch"<<setw(20)<<"dept"<<setw(20)<<"date Of Joining";
        cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------";
        while(f.read((char*)&s,sizeof(s))){
            s.display();
        }
        cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------";
    }
    f.close();
}
void searchRecord(){
    int flag=0;
    f.open("student.bin",ios::binary|ios::in);
    if(!f){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        int id;
        cout<<endl<<"Enter the student ID to be searched : ";
        cin>>id;
        
        while(f.read((char*)&s,sizeof(s))){
            if (s.getStudentID()==id){
                flag=1;
                cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------";
                cout<<endl<<setw(20)<<"student ID" <<setw(20)<<"name"<<setw(20)<<"branch"<<setw(20)<<"dept"<<setw(20)<<"date Of Joining";
                cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------";
                s.display();
                cout<<endl<<"------------------------------------------------------------------------------------------------------------------------------";
            }
        }
    }
    f.close();
    if (flag==0){
        cout<<endl<<"No such record is found!"<<endl;
    }
}
void updateRecord(){
    int ch1;
    cout<<endl<<"What do you want to update ? ";
    cout<<endl<<"--------------------------";
    cout<<endl<<"1) Branch";
    cout<<endl<<"2) Dept"<<endl;
    cin>>ch1;
    switch(ch1){
        case 1 : updateRecord_branch();break;
        case 2 : updateRecord_dept();break;
    }
}
void updateRecord_branch(){
    int id,size;
    string b;
    f.open("student.bin",ios::binary|ios::in|ios::out);
    if(!f){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        cout<<endl<<"Enter the Student ID to be updated : ";
        cin>>id;
        cout<<endl<<"Enter the branch name : ";
        cin>>b;
        while(!f.eof()){
            size=f.tellg();
            f.read((char*)&s,sizeof(s));
            if (f){
                if (id==s.getStudentID()){ 
                    s.modify_branch(b);
                    f.seekp(size);
                    f.write((char*)&s,sizeof(s));
                    break;
                }
            }
        }
    }
    f.close();
}
void updateRecord_dept(){
    int id,size;
    string d;
    f.open("student.bin",ios::binary|ios::in|ios::out);
    if(!f){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    else{
        cout<<endl<<"Enter the Student ID to be updated : ";
        cin>>id;
        while(!f.eof()){
            size=f.tellg();
            f.read((char*)&s,sizeof(s));
            if (f){
                if (s.getStudentID()==id){
                    cout<<endl<<"Enter the branch name : ";
                    cin>>d;
                    s.modify_branch(d);
                    f.seekp(size);
                    f.write((char*)&s,sizeof(s));
                    break;
                }
            }
        }
    }
    f.close();
}