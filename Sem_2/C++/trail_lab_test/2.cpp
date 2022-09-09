//Polynomials
#include <iostream>
#include <cmath>
using namespace std;

int n=5;
class Polynomial
{
private:
    int* coeff;
public:
    Polynomial(){
        coeff=new int[n];
        for (int i=0;i<n;i++){
            coeff[i]=0;
        }
    }
    Polynomial(int input[]){
        coeff=new int[n];
        for (int i=0;i<n;i++){
            coeff[i]=input[i];
        }
    }
    void display();
    int degree();
    friend void add(const Polynomial&,const Polynomial&);
    friend void subtract (const Polynomial& a,const Polynomial& b);
    void MultiplyConstant();
    friend bool equal(const Polynomial& a,const Polynomial& b);
    int coeff_term();
    void evaluate_x();
    friend void multiply(const Polynomial& a,const Polynomial& b);
    //~Polynomial();
};
void multiply(const Polynomial& a,const Polynomial& b){
    int * result=new int[n+n];
    int i,j;
    for (i=0;i<n+n;i++){
        result[i]=0;
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            result[i+j]+=a.coeff[i]*b.coeff[j];
        }
    }
    for (int i=2*n-1;i>=0;i--){
        if (result[i]!=0){
            cout<<result[i]<<"x^"<<i<<" ";
            if (i!=0 && result[i-1]>=0){
                cout<<"+";
            }            
        }
    }
}
void Polynomial::display(){
    for (int i=n-1;i>=0;i--){
        if (coeff[i]!=0){
            cout<<coeff[i]<<"x^"<<i<<" ";
            if (i!=0 && coeff[i-1]>=0){
                cout<<"+";
            }
        }
    }
}
int Polynomial::degree(){
    for (int i=n-1;i>=0;i--){
        if (coeff[i]!=0){
            return i;
        }
    }
    return 0;
}
void add(const Polynomial& a,const Polynomial& b){
    int* addCoeff=new int[n];
    for (int i=0;i<n;i++){
        addCoeff[i]=a.coeff[i]+b.coeff[i];
    }
    for (int i=n-1;i>=0;i--){
        if (addCoeff[i]!=0){
            cout<<addCoeff[i]<<"x^"<<i<<" ";
            if (i!=0 && addCoeff[i-1]>=0){
                cout<<"+";
            }
        }
    } 
}
void subtract (const Polynomial& a,const Polynomial& b){
    int* addCoeff=new int[n];
    for (int i=0;i<n;i++){
        addCoeff[i]=a.coeff[i]-b.coeff[i];
    }
    for (int i=n-1;i>=0;i--){
        if (addCoeff[i]!=0){
            cout<<addCoeff[i]<<"x^"<<i<<" ";
            if (i!=0 && addCoeff[i-1]>=0){
                cout<<"+";
            }
        }
    } 
}
void Polynomial::MultiplyConstant(){
    int constant;
    cout<<endl<<"Enter the constant by which polynomial should be multiplied : ";
    cin>>constant;
    int* addCoeff=new int[n];
    for (int i=0;i<n;i++){
        addCoeff[i]=coeff[i]*constant;
    }
    cout<<endl<<"Polynomial after multiplication : ";
    for (int i=n-1;i>=0;i--){
        if (addCoeff[i]!=0){
            cout<<addCoeff[i]<<"x^"<<i<<" ";
            if (i!=0 && coeff[i-1]>=0){
                cout<<"+";
            }
        }
    } 
}
bool equal(const Polynomial& a,const Polynomial& b){
    for (int i=0;i<n;i++){
        if (a.coeff[i]!=b.coeff[i]){
            return false;
        }
    }
    return false;
}
int Polynomial::coeff_term(){
    int p;        //power
    cout<<endl<<"Enter x^? (to find coefficent) : ";
    cin>>p;
    cout<<endl<<"Coefficient of x^"<<p<< " is "<<coeff[p];

}
void Polynomial::evaluate_x(){
    for (int i=-1000;i<1000;i++){
        int value=0;
        for (int j=0;j<n;j++){
            value+=(coeff[j]*pow(i,j));
        }
        if (value==0){
            cout<<endl<<"Solution of the equation  : "<<i;
            break;
        }
    }
}

int main(){
    int i,j;
    int* coefficient=new int[n];
    cout<<endl<<"Enter the coefficients of Polynomial 1 : ";
    for (j=0;j<n;j++){
        cout<<endl<<"Enter the coeff of x^"<<j<<" : ";
        cin>>coefficient[j];
    }
    Polynomial p1(coefficient);
    cout<<endl<<"Enter the coefficients of Polynomial 2 : ";
    for (j=0;j<n;j++){
        cout<<endl<<"Enter the coeff of x^"<<j<<" : ";
        cin>>coefficient[j];
    }
    Polynomial p2(coefficient);
    
    int ch;
    do{
        cout<<endl<<"MENU";
        cout<<endl<<"====";
        cout<<endl<<"1) Degree of the polynomial ";
        cout<<endl<<"2) Add Polynomials ";
        cout<<endl<<"3) Subtract Polynomials ";
        cout<<endl<<"4) Multiply p1 by a constant ";
        cout<<endl<<"5) Multiply p2 by a constant";
        cout<<endl<<"6) Multiply two Polynomial";
        cout<<endl<<"7) Evaluate value of x (only works for integer roots)(-1000 < root < 1000) ";
        cout<<endl<<"8) Display the Polynomial p1";
        cout<<endl<<"9) Display the Polynomial p2";
        cout<<endl<<"10) Equal or not";
        cout<<endl<<"11) Coefficient of a particular term of p1";
        cout<<endl<<"12) Coefficient of a particular term of p2";
        cout<<endl<<"13) Exit";
        cout<<endl<<endl<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1:cout<<endl<<"Degree of polynomial p1 is "<<p1.degree();
                   cout<<endl<<"Degree of polynomial p2 is "<<p2.degree();
                   break;
            case 2:cout<<endl<<"Addition of Polynomials : ";
                   add(p1,p2);
                   break;
            case 3:cout<<endl<<"Subtract of Polynomials : ";
                   subtract(p1,p2);
                   break;
            case 4:p1.MultiplyConstant();
                   break;
            case 5:p2.MultiplyConstant();
                   break;
            case 6:multiply(p1,p2);break;
            case 8:p1.display();break;
            case 9:p2.display();break;
            case 10:cout<<endl<<"Equal : "<<bool(equal(p1,p2));break;
            case 11:p1.coeff_term();break;
            case 12:p2.coeff_term();break;

        }       
    }while (ch!=13);
}

