#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0, j = 0; //k = 0;
     int iOdd =1;
     int iEven =0;
    for (i = 1; i <= iRow; i++)
    {
        iEven = i, iOdd = i;
        for (j = 1; j <= iCol; j++)

        {   
             if (i%2==0)
             {
                printf("%d\t",iEven);
                iEven++;
             }
             else
             {
                 printf("%d\t",(iOdd));
                 iOdd++;
             }
          
        }
        printf("\n");

    }
}

int main()
{
    int iNo1=0,iNo2=0;
    printf("mention the row and column size\n");
    scanf("%d %d",&iNo1,&iNo2);

    Pattern(iNo1,iNo2);

    return 0;
}