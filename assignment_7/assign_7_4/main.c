#include "header.h"

int main()
{
    int iVal=0;
    int iRet = 0;
    printf("Enter a Number\n");
    scanf("%d",&iVal);
    iRet = CountDiff(iVal);

    printf("diff of sum of odd and even is %d\n",iRet);
    return 0;
}