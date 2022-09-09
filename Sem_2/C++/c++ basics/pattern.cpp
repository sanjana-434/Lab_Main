#include <iostream>
int main()
{
  int k=1;
  for (int i=0;i<=3;i++)
  {
    for (int j=0;j<=3;j++)
    {
      if (i+j>=3)
      {
        std::cout<<k<<" ";
        k++;
      }
      else
      {
        std::cout<<"  ";
      }
    }
    std::cout<<"\n";
  }
}