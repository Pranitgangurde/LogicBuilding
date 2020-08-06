/*
Function Name: NonFact
Input:   int
Otput:  none
Description: It prints all non factors of the number
Author: Pranit R Gangurde
Date: August2,2020

*/
#include "header.h"

void NonFact(int iNo)
{
    int i=0;
    for ( i = 2; i < iNo; i++)
    {
        if (iNo % i ==0)
        continue;

        printf("%d\n", i);
    }
    
    
}