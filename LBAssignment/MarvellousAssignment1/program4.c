// write a program to print Marvellous  number is divisible by 5 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Check
//  Description :       Check number is divisible by 5 or not
//  Input :             Integer
//  Output :            divisible by 5 or not
//  Date :              19/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

int Check(int iNo)
{
   if ((iNo%5)==0)
   {
      return TRUE;
   }
   else
   {
       return FALSE;
   }

}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("enter from which number you want check\n");
    scanf("%d",&iValue);

    bRet=Check(iValue);

    if (bRet==TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    
return 0;
}