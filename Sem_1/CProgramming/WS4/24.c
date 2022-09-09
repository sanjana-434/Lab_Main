#include <stdio.h>
#include <ctype.h>

int main()
{
    char lower_case;
    printf("Enter a lower case character : ");
    scanf("%c",&lower_case);
    printf("\nUpper case of the letter %c is %c\n",lower_case, toupper(lower_case));
}
