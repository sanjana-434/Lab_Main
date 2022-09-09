#include <iostream>
#include <iomanip>
using namespace std;

class Students{
    int rollNo;
    string name;
    string course;
    string branch;
    int semester;
public:
    void read();
    void sortNameWise(Students*,int);
    void sortCourseWise(Students*,int);
    void sortSemesterWise(Students*,int);
    void sortBranchWise(Students*,int);
    void display(Students*,int);
};
void Students::read(){
    int i=0;
    do{
        if (i!=0)
            cout<<endl<<"INVALID INPUT! ENTER AGAIN";
        i++;
    cout<<endl<<"Enter rollno : ";
    cin>>rollNo;
    }while(rollNo<=0);
    cin.ignore(1000,'\n');
    cout<<endl<<"Enter name : ";
    getline(cin,name,'\n');
    cout<<endl<<"Enter course : ";
    getline(cin,course,'\n');
    cout<<endl<<"Enter branch : ";
    getline(cin,branch,'\n');
    i=0;
    do{
        if (i!=0)
            cout<<endl<<"INVALID INPUT! ENTER AGAIN";
        i++;
    cout<<endl<<"Enter semester : ";
    cin>>semester;
    }while(!(semester>=1 && semester<=10));
}
void Students::sortNameWise(Students* s,int n){
    int i=0;
    Students temp;
    for (i=0;i<n-1;i++){
            if(s[i].name>s[i+1].name){
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i=-1;
            }
    }
}
void Students::sortCourseWise(Students* s,int n){
    int i=0;
    Students temp;
    for (i=0;i<n-1;i++){
            if(s[i].course>s[i+1].course){
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i=-1;
            }
    }
}
void Students::sortSemesterWise(Students* s,int n){
    int i=0;
    Students temp;
    for (i=0;i<n-1;i++){
            if(s[i].semester>s[i+1].semester){
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i=-1;
            }
    }
}
void Students::sortBranchWise(Students* s,int n){
    int i=0;
    Students temp;
    for (i=0;i<n-1;i++){
            if(s[i].branch>s[i+1].branch){
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i=-1;
            }
    }
}
void Students::display(Students* s,int n){
    cout<<endl<<"----------------------------------------------------------------------";
    cout<<endl<<"|"<<setw(10)<<"rollNo"<<" | "<<setw(15)<<"Name"<<" | "<<setw(10)<<"Course"<<" | "<<setw(10)<<"Branch"<<" | "<<setw(10)<<"Semester"<<" | ";
    cout<<endl<<"----------------------------------------------------------------------";
    for (int i=0;i<n;i++){
        cout<<endl<<"|"<<setw(10)<<s[i].rollNo<<" | "<<setw(15)<<s[i].name<<" | "<<setw(10)<<s[i].course<<" | "<<setw(10)<<s[i].branch<<" | "<<setw(10)<<s[i].semester<<" | ";
    }
    cout<<endl<<"----------------------------------------------------------------------";
}
int main(){
    int i;
    int n;
    cout<<endl<<"Enter total number of students : ";
    cin>>n;
    Students students[n];
    for (i=0;i<n;i++){
        students[i].read();
    }
    int ch;
    do{
        cout<<endl<<"What do you want to choose? Enter 0 to exit!";
        cout<<endl<<"1) Sorted list of students in the ascending order of Name";
        cout<<endl<<"2) Course wise student list";
        cout<<endl<<"3) Semester wise student list";
        cout<<endl<<"4) Branch wise student list"<<endl;
        cin>>ch;
        switch(ch){
            case 1: 
                    students[0].sortNameWise(students,n);
                    students[0].display(students,n);
                    break;
            case 2: 
                    students[0].sortCourseWise(students,n);
                    students[0].display(students,n);
                    break;
            case 3:
                    students[0].sortSemesterWise(students,n);
                    students[0].display(students,n);
                    break;
            case 4:
                    students[0].sortBranchWise(students,n);
                    students[0].display(students,n);
                    break;
        }
    }while(ch!=0);

}