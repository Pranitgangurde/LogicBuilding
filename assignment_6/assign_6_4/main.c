#include "header.h"

int main()
{
    int iVal=0;
    int iRet = 0;
    printf("Enter a Number\n");
    scanf("%d",&iVal);
    
    iRet = CountFour(iVal);

    printf("Freq of 4 : %d\n",iRet);
    return 0;
}