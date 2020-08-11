#include <iostream>
using namespace std;
void Display_grid(int,int);
int main()
{   
   int iRow=0, iCol = 0;
   cout<<"enter no of row and col." ;
   cin>>iRow>>iCol;

   Display_grid(iRow,iCol);


    return 0;
}

void Display_grid(int iRow,int iCol)
{
    int i=0;
    int j = 0;
    int k =1;
    //int k = 1;
    for (i = 1; i <= iRow; i++)
    {
        
        for ( j = 1; j <= iCol; j++)
        
            {
            if (k==10) {
                k=1;
            }
            cout<<k<<'\t';
                k++;
            }
        cout<<'\n';
        
    }
    
    //cout<<k;
}