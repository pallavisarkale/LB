//Assignment 3
// Accept number from user and print  factoria of that  number in Descending order

#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       print factorial of given number Desc
//  Input :             Integer
//  Output :            factorial of number
//  Date :              26/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

void DisplayFact(int iNo)
{
    int iCnt=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    for (iCnt=(iNo/2);iCnt>=1;iCnt--)//reverse order
    { 
      if (iNo%iCnt==0)
      {
        printf("%d\t",iCnt);            
      }  
    }
}

int main()
{
    int iValue1=0;
    
    printf("enter  number you want: \n");
    scanf("%d",&iValue1);

    DisplayFact(iValue1);
    

    
return 0;
}