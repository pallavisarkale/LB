//Accept input from user and print below output with reduce complexity
//Non linear

//for triangle

//Input: row=5  col=5  
/*output :   

                                                        *
                                                *       *
                                        *       *       *
                                *       *       *       *
                        *       *       *       *       *
                *       *       *       *       *       *
        *       *       *       *       *       *       *
*       *       *       *       *       *       *       *

*/          

#include<stdio.h>

void Dispaly(int iRows,int iCol)
{
    int i=0,j=0;

    if (iRows!=iCol)
    {
        return;
    }
    

    for(i=1;i<=iRows;i++)
    {
        //     1            2       3
        for(j=iCol; j>=1; j--)
        {
            if (i>=j)
            {
              printf("*\t");//4
            }
            else
            {
                printf(" \t");
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