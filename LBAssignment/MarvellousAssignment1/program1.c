// write a program to divide two numbers

#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Divide
//  Description :       Used to perform divide of 2 numbers
//  Input :             Integer, Integer
//  Output :            Integer
//  Date :              19/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
    int iAns=0;

    if (iNo2==0)
    {
        return -1;
    }
    iAns=iNo1/iNo2;

    return iAns;
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    int iRet=0;
    
    printf("Enter number to divide: \n");
    scanf("%d%d",&iValue1,&iValue2);

    iRet=Divide(iValue1,iValue2);

    printf("Division is = %d ",iRet);
    
return 0;
}









