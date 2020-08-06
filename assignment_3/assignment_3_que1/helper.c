/*
Function Name:PrintEven
Input:int   
Otput: None
Description: Prints even no utpo given number
Author: Pranit R Gangurde
Date: August2,2020

*/
#include "header.h"
void PrintEven(int iNo)
{
    int icnt=1;
    if(iNo <= 0)
    {
        return;
    }
    
    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d\n",icnt*2);
    }
}