//Accept number from user and return reverse number  
//INPUT: 1234
//OUTPUt:4321
//Time complexity: O(N) 
//how many digits- if 7856 then loop itert 4 times 

#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
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
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    return iRev;
}

int main()
{
    int iValue=0;
    int iRet=false;

    printf("enter number \n");
    scanf("%d",&iValue);

    iRet=Reverse(iValue);
    printf("Reverse is : %d",iRet);
    
    return 0;
}