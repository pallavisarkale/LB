 //Accept number from user check Whether it Armstron or not
//INPUT: 153
//OUTPUt:Armstrong 1*1*1+5*5*5+3*3*3=153
//Time complexity: O(N) 
//how many digits- if 153 then loop itert 3 times 

#include<stdio.h>
#include<stdbool.h>

bool checkArmstrong(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int iTemp=iNo;
    int iDigit=0;
    int iSum=0;

    while(iNo>0)//iNo=153
    {
        iDigit=iNo%10;//3  5    1
        iSum=iSum+(iDigit*iDigit*iDigit);   //0+ 3*3*3=27   27+5*5*5=27 =152   152+1*1*1=153
        iNo=iNo/10;
    } 
    if(iSum ==iTemp)
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

    printf("enter number \n");
    scanf("%d",&iValue);

    bRet=checkArmstrong(iValue);
    if (bRet==true)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}