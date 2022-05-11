//Accept input from user and print below output
//Non linear

//for diagonal row and col are same

//Input: row=4  col=4  
/*output :  *   *   *   *  //i==1
            *   *       *
            *       *   *
            *   *   *   *
*/          

#include<stdio.h>

void Dispaly(int iRows,int iCol)
{
    int icnt=0;
    int i=0,j=0;

    if (iRows!=iCol)
    {
        return;
        printf("Enter Row and Col same ");
    }
    

    for(int i=1;i<=iRows;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if( (i==1 ) || ( j==iCol) || (i==iRows ) ||( j==1) || (i==j))
            {
               printf("*\t");
            }
            else
            {
                printf(" \t");//space are required here
            }
        }
        printf("\n");
    }
}


int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter How many Rows\n");
    scanf("%d",&iValue1);

    printf("Enter How many Col\n");
    scanf("%d",&iValue2);

    Dispaly(iValue1,iValue2);

    return 0;
}