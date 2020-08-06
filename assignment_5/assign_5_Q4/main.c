#include "header.h"
int main()
{
    int iVal1=0;
    int iVal2 = 0;
    int iVal3 = 0;

    printf("Enter three Numbers\n");
    scanf("%d %d %d",&iVal1,&iVal2,&iVal3);

    Multiply(iVal1, iVal2, iVal3);
}