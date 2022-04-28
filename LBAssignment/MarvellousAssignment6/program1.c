//Accept number from user and display its Digit and display count of  even digits
//Input: 12342
//Output: frequency =3

#include<stdio.h>
#include<stdbool.h>

int  CheckEven(int iNo)
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
       if((iDigit%2)==0)
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

    iRet=CheckEven(iValue);
    printf("Frequency of even Digit in given Number is: %d ",iRet);

    
    
}

