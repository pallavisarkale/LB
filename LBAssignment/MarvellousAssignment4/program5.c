//Assignment 3
// Accept number from user and print differenc bet  summation of factores and non factor of that  number

#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       print diffe bet Summation of Non factor and ite factor of given number
//  Input :             Integer
//  Output :            diff bet sum of its factor and  of non factorial of number
//  Date :              26/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSumFact=0;
    int iSumNonFact=0;
    int iAns=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    for (iCnt=1;iCnt<iNo;iCnt++)
    { 
      if (iNo%iCnt==0)
      {
          iSumFact=iSumFact+iCnt;
          
      }
      else{
          iSumNonFact=iSumNonFact+iCnt;           
      } 
    }
    if(iSumFact<iSumNonFact)
    {
        iAns=iSumNonFact-iSumFact;
    }
    else{
        iAns=iSumFact-iSumNonFact;
    }
    return iAns;
}

int main()
{
    int iValue1=0;
    int iRet=0;
    
    printf("enter  number you want: \n");
    scanf("%d",&iValue1);

    iRet=SumNonFact(iValue1);
    printf(" difference bet sum of factor and non factore %d is :",iRet);

    
return 0;
}