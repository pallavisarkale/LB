/*

1       2       3       4
2       3       4       5
3       4       5       6
4       5       6       7

*/


#include<stdio.h>





void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;
   
   

    //  1      2    3
    for(i=1;i<=iRow;i++)
    {
        int k=i;
        for(j=1;j<=iCol;j++,k++)
        {
            printf("%d\t",k);    
        
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