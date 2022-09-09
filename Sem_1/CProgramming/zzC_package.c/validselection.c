#include <stdio.h>


int  validCode(char* c)
{
    if ((strCmp(c,"20XD11") ==0) || (strCmp(c,"20XD12") ==0) || (strCmp(c,"20XD13") ==0) || (strCmp(c,"20XD14") ==0))
        return 1;
    return 0;
}
int validDiff(int d)
{
    if (d==1 || d==3 || d==2 )
        return 1;
    return 0;
}