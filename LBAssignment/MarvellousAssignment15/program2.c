//Accept row and colums from user and print below output

//Input:8 8
//output:
/*

2       4       6       8
1       3       5       7
2       4       6       8
1       3       5       7
2       4       6       8
1       3       5       7
2       4       6       8
1       3       5       7

*/


#include<stdio.h>


void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)
    {
        if (i%2!=0)
        {
            for (j=1;j<=iCol;j++)
            {
                if (j%2==0)
                {
                    printf("%d\t",j) ;
                }
                
            }
            printf("\n");  
        }
        else{
            for (j=1;j<=iCol;j++)
            {
                 if (j%2!=0)
                {
                    printf("%d\t",j) ;
                }
            }
            printf("\n");
            
        }
        
        
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Row and Cols: ");
    scanf("%d%d",&iValue1,&iValue2);

    Display(iValue1,iValue2);
    return 0;
}