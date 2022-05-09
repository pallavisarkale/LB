//Accept input from user and print below output
//Non linear

//Input: row=4  col=4
/*output :  $   *   *   *
            *   $   *   *
            *   *   $   *
            *   *   *   $
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;
    
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i==j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
    
}

int main()
{
    int iRows=0;
    int iCol=0;

    printf("Enter How many rows \n");
    scanf("%d",&iRows);

    printf("Enter How many cols \n");
    scanf("%d",&iCol);

    Display(iRows,iCol);

    return 0;
}
// iRow=4  iCol=5

//               1      2       3       4 -->j
//i        1   1,1      1,2   1,3      1,4
//         2   2,1      2,2   2,3      2,4
//         3   3,1      3,2   3,3      3,4
//         4   4,1      4,2   4,3      4,4



















