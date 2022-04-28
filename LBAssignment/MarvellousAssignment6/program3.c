//Accept number from user and display its Digit and display count of digit between 3 &7
//Input: 12342
//Output: 1

#include<stdio.h>
#include<stdbool.h>

int  CheckDigitInRange(int iNo)
{
    int iDigit=0;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
       iDigit=iNo%10;
       if((iDigit>3)&&(iDigit<7))
       {
           iCount++;
       }
       iNo=iNo/10; 
    }
   return iCount;
}


int main()
{
    int iValue=0;
    int iRet=false;

    printf("enter number: \n");
    scanf("%d",&iValue);

    iRet=CheckDigitInRange(iValue);
    printf("Frequency of Digit between 3 and 7  in given Number is: %d ",iRet);

    
    
}

