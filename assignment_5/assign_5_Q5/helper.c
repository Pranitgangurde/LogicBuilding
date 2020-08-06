#include "header.h"

float Percentage(int iNo1,int iNo2)
{
    float fRes =0.0;
    if (iNo2 == 0)
    {
        return ;
    }
    
    else
    {
        fRes = (iNo1/iNo2)*100;
        return fRes;
    }
    
}