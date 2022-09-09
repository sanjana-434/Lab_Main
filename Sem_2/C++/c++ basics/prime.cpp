//To print whether the entered numbe ris prime or not

#include <iostream>

int main()
{
    int n,i,f=0;
    std::cout << "Enter the number to be checked : ";
    std::cin >> n;
    if (n==1 || n==2 || n==3)
    {
       std::cout << "\nThe entered number "<< n<< " is a prime number "; 
       f=1;
    }
    for(i=2;i<=n/2 && f!=1;i++)
    {
        if (n%i==0)
        {
            std::cout << "\nThe entered number " <<  n << " is not a prime number ";
            f=1;
            break;
        }
    }
    if (f==0)
    {
        std::cout << "\nThe entered number " << n << " is a prime number ";
    }
}