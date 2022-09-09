//C program to delete a specified file using remove() function
#include <stdio.h>

int main()
{
    int n;
    n=remove("new2.txt");
    if (n==0)
    {
        printf("\nFile is deleted successfully");
    }
    else
    {
        printf("\nFile is not deleted");
    }
}