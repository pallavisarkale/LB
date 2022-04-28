//Accept number from user and display its Digit and display difference bet sum of even digit and sum of odd digit
//Input: 123
//Output: frequency =2-4=-2

#include<stdio.h>
#include<stdbool.h>

int  Calculatediff(int iNo)
{
    int iDigit=0;
    int iSumEven=0;
    int iSumOdd=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
       iDigit=iNo%10;
       if(iDigit%2==0)
       {
           iSumEven=iSumEven+iDigit;
       }
       else
       {
           iSumOdd=iSumOdd+iDigit;
       }
       iNo=iNo/10; 
    }
   return iSumEven-iSumOdd; 
}


int main()
{
    int iValue=0;
    int iRet=false;

    printf("enter number: \n");
    scanf("%d",&iValue);

    iRet=Calculatediff(iValue);
    printf("Frequency of Digit which less than 6  in given Number is: %d ",iRet);

    
    
}

