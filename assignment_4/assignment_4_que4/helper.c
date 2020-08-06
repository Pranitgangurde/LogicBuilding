/*
Function Name: SumNonFact
Input:   integer
Otput:  integer
Description: it accepts a number and returns sum of all its non factors 
Author: Pranit R Gangurde
Date: August2,2020

*/
#include "header.h"

int SumNonFact(int iNo)
{
    int rSum = 1;
    int i =0;

    for ( i = 2; i < iNo ; i++)
    {
        if(iNo%i != 0)
        {
            rSum = rSum+i;
        }
     
    }
    return rSum;
}