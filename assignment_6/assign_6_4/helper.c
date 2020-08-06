#include "header.h"

int CountFour(int iNo)
{
    int iDgit = 0;
    int iCnt =0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo!=0)
    {
        iDgit = iNo %10;
        if (iDgit == 4)
        {
            iCnt++;
        }
        
        iNo = iNo/10;
    }

    return iCnt;
    
}