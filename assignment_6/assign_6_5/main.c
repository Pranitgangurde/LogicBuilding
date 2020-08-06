#include "header.h"

int main()
{
    int iVal=0;
    int iRet = 0;
    printf("Enter a Number\n");
    scanf("%d",&iVal);
    
    iRet = Fre_six(iVal);

    printf("Freq of number less tahn 6 is : %d\n",iRet);
    return 0;
}