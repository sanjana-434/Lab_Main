#include <stdio.h>
int main()
{
    int m=10,n,o;
    int* z;
    z=&m;
    printf("\nz stores the address of m  = %p",z);                                                                  
    printf("\n*z stores the value of m = %d",*z);                                                                              
    printf("\n&m is the address of m = %p",&m );                                                                   
    printf("\n&n stores the address of n = %p",&n);                                                                 
    printf("\n&o  stores the address of o = %p",&o);                                                                
    printf("\n&z stores the address of z = %p",&z);


}