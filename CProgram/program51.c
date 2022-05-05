//Accept two numbers from user a and b and return a^b (use 3 different file)
//Input a=2 b =3 
//Output= 8
//02-05-2022
//gcc program51.c helper51.c -o myexc


//only main here

#include "header51.h"

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
