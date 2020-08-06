#include "header.h"

int CountEven(int iNo)
{
    int iDgit = 0;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo!=0)
    {
        iDgit = iNo %10;
        
        if (iDgit > 3 && iDgit<7)
        {
            iCnt+=1;
        }

        
        iNo = iNo/10;
    }

    return iCnt;
    
}