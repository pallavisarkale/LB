//Accept number from user and check wheather it is prime or not
//Prime means that number only divisible by 1 and itself only eg.1,5,7,11,13.

#include<stdio.h>
#include<stdbool.h>



int CountFactor(int iNo)
{
    int iCnt=0;
    int count=0;

    for(iCnt=2;iCnt<=(iNo/2);iCnt++)//start from 2 beacuse any number is divisible by 1 
    {
        if(iNo%iCnt==0)
        {
            count++;
        }   
    }
    return count;
}

bool checkPrime(int iNo)//if count of factor is 0
{
    int iRet=0;
    iRet=CountFactor(iNo);
    if (iRet==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue=0;
    bool bRet=false;;

    printf("enter number:\n ");
    scanf("%d",&iValue);

    
    bRet=checkPrime(iValue);//if count is less than 2 then prime


    if (bRet==true)
    {
        printf("%d is Prime number",iValue);

    }
    else
    {
        printf("%d is Not Prime number",iValue);
    }
    

    
    return 0;
}