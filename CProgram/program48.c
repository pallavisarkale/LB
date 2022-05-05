 //Accept number from user check Whether it Armstron or not
//INPUT: 153
//OUTPUt:Armstrong 1*1*1+5*5*5+3*3*3=153
//Time complexity: O(N) 
//how many digits- if 153 then loop itert 3 times 

#include<stdio.h>
#include<stdbool.h>

bool checkArmstrong(int iNo)//153
{
    int iTemp=0;
    int iDigit=0;
    int iDigiCount=0;
    int iSum=0;
    int iMult=0;
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    iTemp=iNo;
//calculate number of digit

    while (iNo>0)//iNo=153
    {
        iDigiCount++; //1 2  3
        iNo=iNo/10;// 15  1   0
    }
//due to above while iNo becomes zero so below line is used 

    iNo=iTemp;//iTemp=153

    while (iNo>0)
    {
        iMult=1;//
        iDigit=iNo%10;//3      5       1

        for(iCnt=1;iCnt<=iDigiCount;iCnt++)
        {
            iMult=iMult*iDigit; //
        }

        iSum=iSum+iMult;//
        iNo=iNo/10;
    }
    if (iSum==iTemp)
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
    bool bRet=false;


    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=checkArmstrong(iValue);

    if (bRet==true)
    {
        printf("%d is Armstrong Number ",iValue);
    }
    else
    {

        printf("%d is not Armstrong Number ",iValue);
    }

    return 0;
}