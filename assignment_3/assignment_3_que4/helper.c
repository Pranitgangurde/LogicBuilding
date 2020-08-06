/*
Function Name:DisplayConvert
Input:   char
Otput:  void
Description: it converts a lower case input char into upper case char and vice versa
Author: Pranit R Gangurde
Date: August2,2020

*/
#include "header.h"
void DisplayConvert(char cVal)
{
    if(cVal>=65 && cVal<=90)
    {
        printf("%c",cVal+32);
    }
    else if(cVal>=97 && cVal<=122)
    {
        printf("%c",cVal-32);
    }
}