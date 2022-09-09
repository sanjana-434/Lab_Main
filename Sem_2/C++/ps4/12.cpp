#include <iostream>
using namespace std;

class MovieData{
    string title;
    string director;
    int year;
    int runningTime;
    double prodCost;   //production cost
    double fyr;        //first year revenue
public:
    MovieData();
    MovieData(string,string,int,int,double,double);
    void getdata();
    void display();
};
MovieData::MovieData(){
    title='\0';
    director='\0';
    year=0;
    runningTime=0;
    prodCost=0;
    fyr=0;
}
MovieData::MovieData(string t,string d,int y,int r,double p,double f){
    title=t;
    director=d;
    year=y;
    runningTime=r;
    prodCost=p;
    fyr=f;
}
void MovieData::getdata(){
    int i=0;
    cin.ignore(1000,'\n');
    cout<<endl<<"Tiltle : ";
    getline(cin,title,'\n');
    //cin.ignore(1000,'\n');
    cout<<endl<<"Director : ";
    getline(cin,director,'\n');
    do{
        if(i!=0){
            cout<<endl<<"Invalid input!! Enter again";
        }
        i++;
        cout<<endl<<"Year : ";
        cin>>year;
    }while(year<1700 || year>2022);
    i=0;
    do{
        if(i!=0){
            cout<<endl<<"Invalid input!! Enter again";
        }
        i++;
        cout<<endl<<"Running time : ";
        cin>>runningTime;
    }while(runningTime<0);
    i=0;
    do{
        if(i!=0){
            cout<<endl<<"Invalid input!! Enter again";
        }
        i++;
        cout<<endl<<"Production cost : ";
        cin>>prodCost;
    }while(prodCost<0);
    i=0;
    do{
        if(i!=0){
            cout<<endl<<"Invalid input!! Enter again";
        }
        i++;
        cout<<endl<<"First year revenue : ";
        cin>>fyr;
    }while(fyr<0);
    
}
void MovieData::display(){
    cout<<endl<<endl<<"Title : "<<title;
    cout<<endl<<"Director : "<<director;
    cout<<endl<<"Year : "<<year;
    cout<<endl<<"Running time : "<<runningTime;
    cout<<endl<<"Production Cost : "<<prodCost;
    cout<<endl<<"First year revenue : "<<fyr;
    if(fyr>prodCost){
        cout<<endl<<"PROFIT!!";
    }
    else{
        cout<<endl<<"LOSS!!";
    }
}
int main(){
    int i=0;
    MovieData m1,m2;
    cout<<endl<<"Enter the details of movie "<<++i;
    cout<<endl<<"-----------------------------";
    m1.getdata();
    cout<<endl<<"Enter the details of movie "<<++i;
    cout<<endl<<"-----------------------------";
    m2.getdata();
    m1.display();
    m2.display();

}
