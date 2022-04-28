//Accept number from user and display its Digit and display count of Digits which less than 6
//Input: 12346
//Output: frequency =4

#include<stdio.h>
#include<stdbool.h>

int  CheckDigit(int iNo)
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
       if(iDigit<6)
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

    iRet=CheckDigit(iValue);
    printf("Frequency of Digit which less than 6  in given Number is: %d ",iRet);

    
    
}

