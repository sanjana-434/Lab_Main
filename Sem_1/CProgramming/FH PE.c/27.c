/*Write a program in C that reads in input from the file &quot;data.txt&quot;. The first line of data.txt
has a single positive integer n. The following n lines have one integer each, each in
between 0 and 10, inclusive. Read in this data and store it in an array, freq, of size 11,
where freq[i] stores the number of times the value i was in the data. Then, print out (to
standard output) the data in a horizontal bar chart. For example, if the data was 3, 3, 3, 6,
8, 2, 9, 10, 0, 0 your program should print out what&#39;s below. You may assume that the no
number will appear in the data more than 10 times.
*/ //PE 
#include <stdio.h>
int main()
{
    FILE* p;
    int n;
    p=fopen("data.txt","r");
    int line;
    if (p==NULL)
    {
        printf("\nERROR !! File doesn't exist ");
    }

    int freq[11]={0};
    int i,j;
    fscanf(p,"%d",&line);
    
    for (i=0;i<line;i++)
    {
        fscanf(p,"%d",&n);
        freq[n]++;
    }
    fclose(p);
    for (i=0;i<11;i++)
    {
        printf("%d  ",freq[i]);
    }
    for (j=10;j>=0;j--)
    {
        printf("\n");
        for (int i=0;i<=10;i++)
        {
            if (freq[i]>j)
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }
        }
    }
    printf("\n 0  1  2  3  4  5  6  7  8  9  10");
}