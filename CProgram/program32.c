//Accept number from user and return summation of that factors with two different function

#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int iNo)
{
    int iSum=0;
    int iCnt=0;
    if (iNo<0)
    {
       iNo=-iNo;
    }  
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if ((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt; 
        } 
    }
    if (iSum==iNo)
    {
       return true;
    }
    else{
        return false;
    }
}


int main()   //execution start from main
{
    int iValue=0;
    bool bRet=false;

    printf("enter number :\n");
    scanf("%d",&iValue);

    bRet=checkPerfect(iValue);
    if (bRet==true)
    {
       printf("%d is perfect number" ,iValue);
    }
    else
    {
         printf("%d is not perfect number/n" ,iValue);
    }
    
return 0;
}
