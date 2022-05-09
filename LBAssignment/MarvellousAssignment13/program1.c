//Accept number from user and display below pattern
//Input : 4  4
//output:   *    *   *    *
//          *    *   *    *
//          *    *   *    *
//          *    *   *    *


#include<stdio.h>

void Display(int iRow,int iCol)
{
    int iCnt=0;
    int i=0,j=0;

    if(iRow!=iCol)
    {
        return;
    }
    
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;


    printf("Enter i : ",&iValue1);
    scanf("%d",&iValue1);

    printf("Enter j : ",&iValue1);
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}