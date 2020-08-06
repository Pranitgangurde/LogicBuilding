#include "header.h"

int man()
{
    int iVal1=0;
    int iVal2=0;
    float fRet = 0.0;

    
    printf("Enter total marks\n");
    scanf("%d",&iVal1);

    printf("Enter obtained marks\n");
    scanf("%d", &iVal2);

    fRet = Percentage(iVal1,iVal2);

    printf("%f\n",fRet);

    return 0;
    
    
}