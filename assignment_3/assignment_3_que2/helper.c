/*
Function Name:DisplayFactor
Input: int
Otput: None
Description: It accepts a number and prints even factors of that number
Author: Pranit R Gangurde
Date: August2,2020

*/
#include "header.h"

void DisplayFactor(int iNo)
{
    int icnt =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt=2;icnt<=iNo/2;icnt++)
    {
        if(icnt%2==0)
        {
            printf("%d\n",icnt);
        }
    }
}