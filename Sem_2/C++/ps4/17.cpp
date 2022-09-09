#include <iostream>
using namespace std;

class TestScores{
    float mark1;
    float mark2;
    float mark3;

    public:
        TestScores();
        TestScores(float,float,float);
        void input();
        void display();
        float average();

};
TestScores::TestScores(){
    mark1=0;
    mark2=0;
    mark3=0;
}
TestScores::TestScores(float m1,float m2,float m3){
    mark1=m1;
    mark2=m2;
    mark3=m3;
}
void TestScores::input(){
    cout<<endl<<"Enter mark1 : ";
    cin>>mark1;
    cout<<endl<<"Enter mark2 : ";
    cin>>mark2;
    cout<<endl<<"Enter mark3 : ";
    cin>>mark3;
}
float TestScores::average(){
    return (mark1+mark2+mark3)/3.0;
}
void TestScores::display(){
    cout<<endl<<endl<<"Mark1 : "<<mark1;
    cout<<endl<<"Mark2 : "<<mark2;
    cout<<endl<<"Mark3 : "<<mark3;
    cout<<endl<<"Average : "<<average();
}
int main(){
    TestScores t1,t2,t3;
    t1.input();
    t2.input();
    t3.input();
    t1.display();
    t2.display();
    t3.display();
}