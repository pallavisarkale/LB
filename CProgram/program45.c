//Accept number fro user  and return  sum of even digits 
//INPUT: 1234
//OUTPUt:2+4=6
//Time complexity: O(N) 
//how many digits- if 7856 then loop itert 4 times 

#include<stdio.h>

int SumOfEvenDigit(int iNo)
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
        if(iDigit%2!=0)
        {
            printf("%d\n",iDigit);
            iSum=iSum+iDigit;
        }
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

    iRet=SumOfEvenDigit(iValue);
    printf("Summation of digits are : %d",iRet);

    return 0;
}