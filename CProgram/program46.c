 //Accept number from user and return reverse number  and check palindrom or not
//INPUT: 1234
//OUTPUt:not pallindrom
//Time complexity: O(N) 
//how many digits- if 7856 then loop itert 4 times 

#include<stdio.h>
#include<stdbool.h>

bool checkPaliindrom(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iTemp=iNo;
    int iDigit=0;
    int iRev=0;

    while(iNo>0)//while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    } 
    if(iRev ==iTemp)
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

    bRet=checkPaliindrom(iValue);
    if (bRet==true)
    {
        printf("paliindrom");
    }
    else
    {
        printf("Not pallindrom");
    }

    return 0;
}