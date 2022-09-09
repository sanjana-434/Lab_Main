//CODE WRITTEN BY SANJANA R ON 23/03/2022
//function that outputs number of miles per galloon
#include <iostream>
using namespace std;

float m_per_g(float l,float miles);
float l_g=0.264179; //1 liltres in galloons
int main(){
    float m_g; //miles per galloon
    float l; //litres consumed by the user's car
    float miles; //miles
    char cont; //continue
    do {
        cout<<endl<<"Enter the number of litres : ";
        cin>>l;
        cout<<endl<<"Enter the number of miles the car travelled :";
        cin>>miles;
        m_g=m_per_g(l,miles);
        cout<<endl<<"The number of miles per gallon : ";
        cout<<m_g;
        cout<<endl<<"\nDo you want to continue : ";
        cin>>cont;
    }while (cont=='y');


}
float m_per_g(float l,float miles){
    return l_g*miles*l;
}