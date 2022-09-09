#include <iostream>
using namespace std;
class CreateDestroy {
public: CreateDestroy()
{ cout<< "constructor called, "; }	
 ~CreateDestroy() { cout<< "destructor called, "; } 
}; 

	int main() { 

    CreateDestroy c2;
    CreateDestroy c2; 
return 0; 
}

