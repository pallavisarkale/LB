//Assignment 3
// Accept number from user and print that even factoria of that  number

#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       print even factorial of given number
//  Input :             Integer
//  Output :            evenfactorial of number
//  Date :              21/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

void printFact(int iNo)
{
    int iCnt=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    for (iCnt=1;iCnt<=(iNo/2);iCnt++)
    { 
      if (iNo%iCnt==0)
      {
        if (iCnt%2==0)
        {
            printf("%d\t",iCnt);  
        }           
      }  
    }
}

int main()
{
    int iValue1=0;
    
    printf("enter  number you want: \n");
    scanf("%d",&iValue1);

    printFact(iValue1);

    
return 0;
}