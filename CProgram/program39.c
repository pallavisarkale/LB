//Accept number from user and check wheather it is prime or not
//Prime means that number only divisible by 1 and itself only eg.1,5,7,11,13.

#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNo)//if count of factor is 0
{
    int iCnt=0;
    
    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if ((iNo%iCnt)==0)
        {
            break;
        }
    }
    if(iCnt==(iNo/2)+1)
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

    bRet=checkPrime(iValue);

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