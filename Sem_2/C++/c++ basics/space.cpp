#include <iostream>
int main()
{
  double earthWeight;
  int planet;
  l1:std::cout << "Enter the earth weight : ";
  std::cin >> earthWeight;
  std::cout << "\nPLANETS";
  std::cout << "\n-------";
  std::cout << "\n1. Mercury";
  std::cout << "\n2. Venus";
  std::cout << "\n3. Mars";
  std::cout << "\n4. Jupiter";
  std::cout << "\n5. Saturn";
  std::cout << "\n6. Uranus";
  std::cout << "\n7. Neptune";
  std::cout << "\nEnter the number of planet : ";
  std::cin >> planet;
  switch(planet)
  {
    case 1: earthWeight=earthWeight*0.38;
            break;
    case 2: earthWeight=earthWeight*0.91;
            break;
    case 3: earthWeight=earthWeight*0.38;
            break;
    case 4: earthWeight=earthWeight*2.34;
            break;
    case 5: earthWeight=earthWeight*1.06;
            break;
    case 6: earthWeight=earthWeight*0.92;
            break;
    case 7: earthWeight=earthWeight*1.19;
            break;
    default : std::cout << "\nInvalid input"<< "\nTry again\n";
              goto l1;
  }
  std::cout << "\nYour mass on the planet is "<<earthWeight;


}