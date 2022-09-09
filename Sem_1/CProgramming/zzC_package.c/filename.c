#include <stdio.h>
#include <string.h>

int filename_function(char* code,int d)
{
    if (strCmp(code,"20XD11")==0)
    {
        if (d==1)
            return 0;
        else if (d==2)
            return 1;
        else
            return 2;
    }
    else if(strCmp(code,"20XD12")==0)
    {
        if (d==1)
            return 3;
        else if (d==2)
            return 4;
        else
            return 5;
    }
    else if(strCmp(code,"20XD13")==0)
    {
        if (d==1)
            return 6;
        else if (d==2)
            return 7;
        else
            return 8;
    }
    else
    {
        if (d==1)
            return 9;
        else if (d==2)
            return 10;
        else
            return 11;
    }
}