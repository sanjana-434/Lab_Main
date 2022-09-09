#include <stdio.h>
int main()
{
    int m=29;
    int* ab=&m;
    printf("\nAddress of m : %p",&m);
	printf("\nValue of m : %d",m);                                                                                          

	//Now ab is assigned with the address of m. 

	printf("\nAddress of pointer ab : %p",ab);                                                                       
	printf("\nContent of pointer ab : %d",*ab);                                                                                   

	//The value of m assigned to 34 now. 
    m=34;                                                                          
	printf("\nAddress of pointer ab : %p",ab );                                                                     
	printf("\nContent of pointer ab : %d",*ab);                                                                                   

	//The pointer variable ab is assigned with the value 7 now.    
    m=7;                                                
	printf("\nAddress of m : %p",ab);                                                                               
	printf("\nValue of m : %d",*ab); 

}