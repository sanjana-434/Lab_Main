#include <iostream>
using namespace std;

class population{
    int currentPopulation;
    int births;  //annual normal number of births
    int deaths;  //annual normal number of deaths
public:
    population();
    population(int,int,int);
    void setData();
    float getBirthRate();
    float getDeathRate();
};
population::population(){
    currentPopulation=0;
    births=0;
    deaths=0;
}
population::population(int cp,int b,int d){
    currentPopulation=cp;
    births=b;
    deaths=d;
}
void population::setData(){
    cout<<endl<<"Enter the Current population : ";
    cin>>currentPopulation;
    if (currentPopulation<2){
        currentPopulation=2;
    }
    cout<<endl<<"Enter annual normal number of births : ";
    cin>>births;
    if(births<0){
        births=0;
    }
    cout<<endl<<"Enter annual normal number of deaths : ";
    cin>>deaths;
    if(deaths<0){
        deaths=0;
    }
}
float population::getBirthRate(){
    float br=float(births)/float(currentPopulation);        //birth rate
    return br; 
}
float population::getDeathRate(){
    float dr=float(deaths)/float(currentPopulation);        //birth rate
    return dr;
}
int main(){
    population p;
    p.setData();
    cout<<endl<<"Birth rate : "<<p.getBirthRate();
    cout<<endl<<"Death rate : "<<p.getDeathRate();
}
