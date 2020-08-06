/*
Function Name: ChkVowel
Input:   char
Otput: BOOL
Description: it checks weather char is vowel or not
Author: Pranit R Gangurde
Date: August2,2020

*/

#include "header.h"
BOOL ChkVowel(char cVal)
{
    if((cVal== 65 || cVal==69 || cVal==73 || cVal==79 || cVal==85) || (cVal ==97 || cVal==101 || cVal==105 || cVal==111 || cVal==117))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}