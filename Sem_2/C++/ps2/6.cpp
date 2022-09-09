#include <iostream>
using namespace std;

int main()
{
    int n,f2,i,j=0;//f is a flag variable
    float limit,f1,max=0;//max=max coln
    cout<<"\nEnter n and limit : ";
    cin>>n>>limit;

    float** loan=new float*[n];
    float* balance=new float[n];
    for (i=0;i<n;i++)
    {
        cin>>f1;
        cin>>f2;
        if (f2>max)
            max=f2;
        balance[i]=f1;
        loan[i]=new float[((f2*2)+2)];
        loan[i][0]=f1;
        loan[i][1]=f2;
        for (j=2;j<f2*2+2;j++)
        {
            cin>>loan[i][j];
            if (j%2!=0){
                balance[i]+=loan[i][j];
            }
        }
    }
    int col=max*2+2;

    for (i=0;i<n;i++){
        for (j=0;j<loan[i][1]*2+2;j++){
            cout<<loan[i][j]<< " ";
        }
        cout<<endl;
    }

    //checking the banks that are unsafe
    int unsafe;
    for (i=0;i<n;i++){
        if (balance[i]<limit){
            cout<<"bank "<<i<<" is unsafe";
            unsafe=i;
        }
    }
    for (i=0;i<n;i++){
        for (j=2;j<col;j++){
            if (loan[i][j]==unsafe && j%2==0){
                loan[i][j]=0,loan[i][j+1]=0;
            }
        }
    }

}
