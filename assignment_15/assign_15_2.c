#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0; //k = 0;
    int iOddChar =0;
    int iEveChar = 0;
    for (i = 0; i < iRow; i++)
    {
        iEveChar = 65;
        iOddChar = 97; //iOdd = 1;
        for (j = 1; j <= iCol; j++)

        {
            if(i%2 == 0)
            {
            printf("%c\t", iEveChar);
            iEveChar++;
            }
            else
            {
                printf("%c\t",iOddChar);
                iOddChar++;
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    printf("mention the row and column size\n");
    scanf("%d %d", &iNo1, &iNo2);

    Pattern(iNo1, iNo2);

    return 0;
}