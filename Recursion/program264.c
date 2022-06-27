//accept number from  from user and return sum of digit using recursion
//in recursion we use only if  avoid while loop
#include<stdio.h>

int SumofDig(int iNo)
{
    static int sum=0;//sum should be static we need to remember sum 
    int i=0;

    if (iNo>0)
    {
        i=iNo%10;
        sum=sum+i;
        iNo=iNo/10;
        SumofDig(iNo);
        
    }
    return sum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet=SumofDig(iValue);

    printf("Sum of digits ara: %d\n",iRet);


    return 0;
}

