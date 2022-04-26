//Accept number from user and return summation of that factors

#include<stdio.h>

int SummationOfFactors(int iNo)
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
        iSum=iSum+iCnt;  
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number :\n");
    scanf("%d",&iValue);

    iRet=SummationOfFactors(iValue);

    printf("sum of factor :%d",iRet);

return 0;
}
