//Assignment 3
// Accept number from user and print summation of  Non factoria of that  number

#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       print Summation of Non factorial of given number
//  Input :             Integer
//  Output :            Sum of non factorial of number
//  Date :              26/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    for (iCnt=1;iCnt<iNo;iCnt++)
    { 
      if (iNo%iCnt==0);
      else{
          iSum=iSum+iCnt;
      } 
    }
    return iSum;
}

int main()
{
    int iValue1=0;
    int iRet=0;
    
    printf("enter  number you want: \n");
    scanf("%d",&iValue1);

    iRet=SumNonFact(iValue1);
    printf(" Summation of Non Factores of %d is :",iRet);

    
return 0;
}