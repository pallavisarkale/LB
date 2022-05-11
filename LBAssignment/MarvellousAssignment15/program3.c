    //Accept row and colums from user and print below output

//Input:3  5
//output:
/*

a       b       c       d
1       2       3       4
a       b       c       d
1       2       3       4

*/


#include<stdio.h>


void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='\0';

    for(i=1;i<=iRow;i++)
    {
        if (i%2!=0)
        {
            for(j=1,ch='a';j<=iCol;j++,ch++)
            {
                printf("%c\t",ch);
            }
        printf("\n");
        }
        else
        {
            for(j=1;j<=iCol;j++)
            {
            printf("%d\t",j);
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