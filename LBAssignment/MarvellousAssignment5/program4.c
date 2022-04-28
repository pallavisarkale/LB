//Accept number from user and display its Digit and display count of 4
//Input: 12342
//Output: frequency =1

#include<stdio.h>
#include<stdbool.h>

int  CheckFour(int iNo)
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
       if(iDigit==4)
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

    iRet=CheckFour(iValue);
    printf("Frequency of 4 in given Number is: %d ",iRet);

    
    
}

