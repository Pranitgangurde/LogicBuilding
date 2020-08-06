#include "header.h"

void DisplayRev(int iNo)
{
    int iDgit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo!=0)
    {
        iDgit = iNo %10;
        printf("%d",iDgit);
        iNo = iNo/10;
    }
    
}