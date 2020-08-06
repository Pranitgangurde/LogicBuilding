#include "header.h"
int main()
{
    int iVal =0;
    BOOL bRet = FALSE;
    printf("Enter a number\n");
    scanf("%d",&iVal);
    bRet = ChkGreater(iVal);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    
}