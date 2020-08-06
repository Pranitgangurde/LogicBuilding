/*
Function Name:MultFact
Input:   integr
Otput: integer
Description: It accepts a number and returns it multiplication of factors
Author: Pranit R Gangurde
Date: August2,2020

*/

#include "header.h"

int MultFact(int iNo)
{
    int mult =1;
    int i =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo/2; i++)
    {
        if(iNo%i == 0)
        {
            mult = mult*i;
        }


    }
    
    
    
}