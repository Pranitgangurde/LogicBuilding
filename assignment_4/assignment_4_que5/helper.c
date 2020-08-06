/*
Function Name: FactDiff
Input:   integer
Otput:   integer
Description: It returns a difference between  sum.factors and non factors
Author: Pranit R Gangurde
Date: August2,2020

*/
#include "header.h"

int DiffFactor(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;

    int iRes = 0;

    iSumFact = SumFact(iNo);
    iSumNonFact = SumNonFact(iNo);

    iRes = iSumNonFact - iSumFact;

    return iRes;
}

int SumFact(int iVal)
{
    int i = 0;
    int iSum_fact = 1;

    for ( i = 2; i <= iVal/2; i++)
    {
        if(iVal%i == 0)
        {
            iSum_fact = iSum_fact+i;
        }
    }
   // printf("%d",iSum_fact);
    return iSum_fact;
}

int SumNonFact(int iVal)
{
    int i =0;
    int iSum_non_fact = 1;

    for ( i = 2; i < iVal; i++)
    {
        if (iVal%i != 0)
        {
            iSum_non_fact += i;
        }
        
    }
   //clea printf("%d",iSum_non_fact);
    return iSum_non_fact;
}