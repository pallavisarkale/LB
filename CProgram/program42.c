//Accept number fro user  and display count of digits 
//INPUT: 7856
//OUTPUt:3 
//Time complexity: O(N) 
//how many digits- if 7856 then loop itert 4 times 

#include<stdio.h>

int CountDigit(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCount=0;

    while(iNo>0)//while(iNo!=0)
    {
        iCount++;
        iNo=iNo/10;

    } 
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number \n");
    scanf("%d",&iValue);

    iRet=CountDigit(iValue);
    printf("Number of digits are : %d",iRet);

    return 0;
}