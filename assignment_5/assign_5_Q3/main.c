#include "header.h"

int man()
{
    int iVal1=0;
    int iVal2=0;

    BOOL bRet = FALSE;
    printf("Enter two numbers\n");
    scanf("%d %d",&iVal1,&iVal2);

    bRet = ChkEqual(iVal1,iVal2);

    if (bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not EQual");
    }
    
    
}