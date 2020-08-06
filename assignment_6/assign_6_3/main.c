#include "header.h"

int main()
{
    int iVal=0;
    int iRet = 0;
    printf("Enter a Number\n");
    scanf("%d",&iVal);
    
    iRet = CountTwo(iVal);

    printf("Freq of 2 : %d\n",iRet);
    return 0;
}