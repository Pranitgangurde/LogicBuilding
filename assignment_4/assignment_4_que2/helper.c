/*
Function Name: FactRev
Input: int  
Otput: none
Description: it accepts a number and display its factors in reverse order
Author: Pranit R Gangurde
Date: August2,2020

*/
#include "header.h"

void FactRev(int iNo)
{
    int i = 0;
    if(iNo <0)
    {
        iNo = -iNo;
    }

    
    
    for ( i = iNo/2; i >=2; i--)
    {
        if (iNo % i == 0)
        {
            printf("%d\n", i);
        }
    }
    
   


}