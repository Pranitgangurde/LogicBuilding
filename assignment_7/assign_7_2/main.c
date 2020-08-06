#include "header.h"

int main()
{
    int iVal=0;
    int iRet = 0;
    printf("Enter a Number\n");
    scanf("%d",&iVal);
    iRet = CountOdd(iVal);

    printf("Frq of odd Number is %d\n",iRet);
    return 0;
}