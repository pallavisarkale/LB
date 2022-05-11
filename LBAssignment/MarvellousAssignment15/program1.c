//Accept row and colums from user and print below output

//Input:4  4
//output:
/*

1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7

*/


#include<stdio.h>


void Display(int iRow,int iCol)
{
    int i=0,j=0,k=1;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++,k++)
        {
          printf("%d\t",k);
           
        }
        printf("\n");
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