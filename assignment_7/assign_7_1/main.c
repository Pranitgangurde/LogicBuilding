#include "header.h"

int main()
{
    int iVal=0;
    int iRet = 0;
    printf("Enter a Number\n");
    scanf("%d",&iVal);
    iRet = CountEven(iVal);

    printf("Frq of even Number is %d\n",iRet);
    return 0;
}