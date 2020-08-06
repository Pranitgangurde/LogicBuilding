#include "header.h"

int main(void)
{
    int iVal =0;
    int iRet =0;

    printf("Enter a number\n");
    scanf("%d",&iVal);

    iRet = DiffFactor(iVal);

    printf("diff between sum. of factors is : %d\n",iRet);

    return 0;
}