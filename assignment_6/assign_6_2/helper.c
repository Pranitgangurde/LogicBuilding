#include "header.h"

BOOL ChkZero(int iNo)
{
    int iDgit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo!=0)
    {
        iDgit = iNo %10;
        if (iDgit == 0)
        {
            break;
        }
        
        iNo = iNo/10;
    }
    if (iDgit == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}