//CODE WRITTEN BY SANJANA R ON 23/03/2022
//FUNCTION THAT RETURNS THE BIRTH RATE AND DEATH RATE
#include <iostream>
using namespace std;

float birth_rate(int birth,int pop);
float death_rate(int death,int pop);
int main()
{
    int birth; //birth
    int death; //death
    int pop ; //total population
    l1:cout<<endl<<"Enter the total population : ";
    cin>>pop;
    if (pop<1){
        cout<<endl<<"INVALID INPUT ! Enter again";
        goto l1;
    }
    l2:cout<<endl<<"Enter the total birth : ";
    cin>>birth;
    if (birth<0){
        cout<<endl<<"INVALID INPUT ! Enter again";
        goto l2;
    }
    l3:cout<<endl<<"Enter the toatal death : ";
    cin>>death;
    if (death<0){
        cout<<endl<<"INVALID INPUT ! Enter again";
        goto l3;
    }
    float br,dr; //birth and death rate
    br=birth_rate(birth,pop);
    dr=death_rate(death,pop);
    cout<<endl<<"Birth rate : "<<br;
    cout<<endl<<"Death rate : "<<dr;
}
float birth_rate(int birth,int pop){
    //return birth rate
    return float(birth)/float(pop);
}
float death_rate(int death,int pop){
    //returns death rate
    return float(death)/float(pop);
}
