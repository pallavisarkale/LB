//Accept row and colums from user and print below output

//Input:4  4
//output:
/*

A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d

*/


#include<stdio.h>


void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='\0';

    for(i=1;i<=iRow;i++)
    {
        if (i%2==0)
        {
           for(j=1,ch='a';j<=iCol;j++,ch++)
            {
                printf("%c\t",ch);
                
            }
            printf("\n");
        }
        else
        {
            for(j=1,ch='A';j<=iCol;j++,ch++)
            {
            printf("%c\t",ch);
            
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