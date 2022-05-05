//Accept two numbers from user a and b and return a^b
//Input a=2 b =3 
//Output= 8
//02-05-2022


#include<stdio.h>

//rename unsigned long int as ULONG
typedef unsigned long int ULONG;
//unsigned means positive input if you know input

ULONG Power(int iNo1,int iNo2)//see renaming on line 9
{
    //loop counter should be register with register if you required many times then use register keyword 
    register int iCnt=0;

    ULONG iMult=1;//multiplication should be long

    
//        iNo1=2 ,iNo2=3
//        1       2       3   //iCnt=1       iCnt=2   iCnt=3
    for(iCnt=1;iCnt<=iNo2;iCnt++)// 1 2 4    2  4 3     2 4 3
    {
        iMult=iMult*iNo1;//4    1*2=2          2*2=4    4*2=8   output=2^3=8
    }
return iMult;
}
int main()
{

    auto int iValue1=0;//auto is storage class if initialize with 0 then its auto
    auto int iValue2=0;

    auto ULONG lRet=0;//due to unsigned you can accept only positive integers

    printf("Enter Base :",iValue1);
    scanf("%d",&iValue1);

    printf("Enter Power :",iValue2);
    scanf("%d",&iValue2);

    lRet=Power(iValue1,iValue2);
    //printf("%ld\n",lRet);

    printf("%d ^ %d =  %ld",iValue1,iValue2,lRet);
}
