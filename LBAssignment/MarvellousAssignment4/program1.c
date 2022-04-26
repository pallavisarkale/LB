//Assignment 4
// Accept number from user and return multiplication of factor

/////////////////////////////////////////////////////////////////////
//
//  Function Name:      displayMult
//  Description :       print multiplication of factor numbers
//  Input :             Integer
//  Output :            Multiplication of factor
//  Date :              26/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

int displayMult(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo /2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
              iSum =  iSum * iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = displayMult(iValue);
    printf("Multiplication of factors : %d\n",iRet);
    return 0;
}