//factorial program 
//Input 4
//output 4*3*2*1=24

#include<stdio.h>

int Factorial(int iNo)
{
    int fact=1;//auto
    while(iNo>0)
    {
       fact=fact*iNo;
       iNo--;
    }
    
    return fact;
}

int main()
{
    int iValue=0,iRet=0;
    printf("enter the number: \n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial of %d is %d:",iValue,iRet);

    return 0;
}