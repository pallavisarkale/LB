//Assignment 3
// Accept number from user and print that Non factoria of that  number

#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       print Non factorial of given number
//  Input :             Integer
//  Output :            non factorial of number
//  Date :              26/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

void DisplayNonFact(int iNo)
{
    int iCnt=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    for (iCnt=1;iCnt<iNo;iCnt++)
    { 
      if (iNo%iCnt==0);
      
      else{
        printf("%d\n",iCnt);
      } 
    }
}

int main()
{
    int iValue1=0;
    
    printf("enter  number you want: \n");
    scanf("%d",&iValue1);

    DisplayNonFact(iValue1);

    
return 0;
}