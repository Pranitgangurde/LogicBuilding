#include "header.h"

int CountDiff(int iNo)
{
    int iDgit = 0;
    int iSum_Even = 0;
    int iSum_Odd = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo!=0)
    {
        iDgit = iNo %10;
            if(iDgit%2 == 0)
            {
                iSum_Even+=iDgit;
            }
            else
            {
                iSum_Odd+=iDgit;
            }
            
        
        iNo = iNo/10;
    }

    return (iSum_Odd - iSum_Even);
    
}