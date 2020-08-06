#include "header.h"

int main(void)
{
    char cVal = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character\n");
    scanf("%c",&cVal);

    bRet = ChkVowel(cVal);

    if(bRet == TRUE)
    {
        printf("char is vowel\n");
    }

    else
    {
        printf("char is not vowel\n");
    }
    
    return 0;
}