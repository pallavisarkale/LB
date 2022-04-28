//Accept number from user and display its Digit and check wheather it contains Zero or not 
//Input: 12340
//Output: contains Zero

#include<stdio.h>
#include<stdbool.h>

bool  CheckZero(int iNo)
{
    int iDigit=0;
    int countZero=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
       iDigit=iNo%10;
       if(iDigit==0)
       {
           countZero++;
       }
       iNo=iNo/10; 
    }
    if(countZero>=1)  
    {
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    int iValue=0;
    bool bRet=false;

    printf("enter number: \n");
    scanf("%d",&iValue);

    bRet=CheckZero(iValue);

    if(bRet==true)
    {
        printf("%d  contains Zero: ",iValue);
    }
    else 
    {
        printf("%d  does not contains Zero: ",iValue);
    }
    
}

