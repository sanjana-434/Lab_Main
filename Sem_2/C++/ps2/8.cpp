#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int i,j;
    int lottery[5];
    int user[5];
    cout<<"Enter the 5 elements  : ";
    for (i;i<5;i++)
    {
        cin>>lottery[i];
        user[i]=rand()%9;
    }
    int match=0;
    cout<<endl<<"Lottery : ";   //printing lottery and checking the matches
    for (i=0;i<5;i++)
    {
        cout<<" "<<lottery[i];
        if (lottery[i]==user[i])
        {
            match++;
        }
    }
    cout<<endl<<"No of matches : "<<match;
    if (match==5)
        cout<<endl<<"You are a grand prize winner...CONGRATS!!";
    else
        cout<<endl<<"SORRY !! not this time";
    


}