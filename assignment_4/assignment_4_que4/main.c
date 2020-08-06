#include "header.h"

int main(void)
{
    int iVal=0, iRet=0;

    printf("Enter a Number");
    scanf("%d",&iVal);

    iRet = SumNonFact(iVal);

    printf("summation : %d\n",iRet);

    return 0;

}