#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<right<<setfill('0')<<setw(20)<<"Hello";
    cout<<fixed<<10000000.00;
    cout<<fixed<<6.0221413e23;
}