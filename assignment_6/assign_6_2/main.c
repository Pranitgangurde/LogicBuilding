#include "header.h"

int main()
{
    int iVal=0;
    BOOL bRet = FALSE;
    printf("Enter a Number\n");
    scanf("%d",&iVal);
    bRet = ChkZero(iVal);

    if (bRet == TRUE)
    {
        printf("It Contains ZERO\n");
    }

    else
    {
        printf("It does not Contain ZERO\n");
    }
    
    return 0;
}