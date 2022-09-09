#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("\nThe rightmost bit of the number %d : %d",num,num&1);
    printf("\nThe 3 rightmost bits of the number %d : %d%d%d",num, (num>>2)&1,(num>>1)&1,num&1);
    printf("\nThe leftmost bit of the number %d : %d",num ,num& 0x80000000);
    printf("\nThe 3 leftmost bit of the number %d : %d%d%d",num,(num>>31)&1,(num>>30)&1,(num>>29)&1);
    
    printf("\nThe number after removing the right most bit of the number %d : %d",num,num>>1);
    printf("\nThe number after removing the 3 right most bit of the number %d : %d",num,num>>3);
    printf("\nThe number after removing the left most bit of the number %d : %d",num,num<<1);
    printf("\nThe number after removing the 3 left most bit of the number %d : %d",num,num<<3);

    printf("\nThe 4 right most bits of th number %d : %d%d%d%d\nThe number after removing the last bit : %d",num,(num>>31)&1,(num>>30)&1,(num>>29)&1,(num>>28)&1,num>>1);
    
    int removedBit=(num>>31)&1;
    num=num<<1;
    num+=removedBit;    
    printf("\nThe number after removing the first bit and after adding it to the right : %d\n",num);
    
}