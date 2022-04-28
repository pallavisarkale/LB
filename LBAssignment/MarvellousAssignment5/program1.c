//Accept number from user and display its Digit and display count of 2
//Input: 12342
//Output: frequency =2

#include<stdio.h>
#include<stdbool.h>

int  CheckTwo(int iNo)
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
       if(iDigit=2)
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

    iRet=CheckTwo(iValue);
    printf("Frequency of 2 in given Number is: %d ",iRet);

    
    
}

