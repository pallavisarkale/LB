//Accept number from user and display its Digit and display Multiplication of given number
//Input: 123
//Output: frequency =6

#include<stdio.h>
#include<stdbool.h>

int  DigitMult(int iNo)
{
    int iDigit=0;
    int iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
       iDigit=iNo%10;
       iMult=iMult*iDigit;
       iNo=iNo/10; 
    }
   return iMult;
}


int main()
{
    int iValue=0;
    int iRet=false;

    printf("enter number: \n");
    scanf("%d",&iValue);

    iRet=DigitMult(iValue);
    printf("Multiplication of Digit in given  Number is:  %d ",iRet);

    
    
}

