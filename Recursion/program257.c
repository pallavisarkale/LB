#include<stdio.h>

int FactorialR(int iNo)//3
{
    static int fact=1;

    if(iNo>0)//while removed
    {
       fact=fact*iNo;//1*3=3   3*2=6  6*1
       iNo--;//3-1=2  2-1=1
       FactorialR(iNo);//goto line 3
    }
    
    return fact;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter the number: \n");
    scanf("%d",&iValue);

    iRet=FactorialR(iValue);
    printf("Factorial of %d is %d:",iValue,iRet);

    return 0;
}


//factorial program using recursion
//Input 3
//output 3*2*1=6
