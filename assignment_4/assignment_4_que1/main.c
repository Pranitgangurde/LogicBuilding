#include "header.h"
int main(void)
{
    int iVal =0;
    int iRet = 0;

    printf("Enter a Number");
    scanf("%d",&iVal);

    iRet = MultFact(iVal);
    printf("%d",iRet);

    return 0;
}