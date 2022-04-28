//Accept number fro user  and return  sum of digits 
//INPUT: 1234
//OUTPUt:1+2+3+4=10
//Time complexity: O(N) 
//how many digits- if 7856 then loop itert 4 times 

#include<stdio.h>

int CountDigit(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit=0;
    int iSum=0;

    while(iNo>0)//while(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    } 
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number \n");
    scanf("%d",&iValue);

    iRet=CountDigit(iValue);
    printf("Summation of digits are : %d",iRet);

    return 0;
}