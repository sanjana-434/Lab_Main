#include <stdio.h>
#include <math.h>

int main()
{
    int num, totalGuess=1 , tooLow=0 ,tooHigh=0 ;
    int randomNum=(rand()%(10-1+1))+1;
    printf("\nEnter the guessed num : ");
    scanf("%d",&num);
    while (num!=randomNum)
    {
        if (num>randomNum)
        {
            tooHigh++;
            printf("\tThe number is too high");
        }
        else
        {
            tooLow++;
            printf("The number is too low");
        }
        printf("\nEnter the guessed num : ");
        scanf("%d",&num);
        totalGuess++;
    }
    printf("\nCongrats !!! You got it right");
    printf("\nTotal number of guesses : %d",totalGuess);
    printf("\ntotal no of toolow : %d",tooLow);
    printf("\ntotal no of toohigh : %d",tooHigh);
    
}