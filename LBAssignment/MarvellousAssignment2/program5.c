//Accept number from user aand check it even or odd


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      EvenOdd
//  Description :       check Even Odd
//  Input :             Integer
//  Output :            Even or odd
//  Date :              19/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL EvenOdd(int iNo)  
{   
        if (iNo%2==0)
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
    BOOL iRet=FALSE;


    printf("Enter Number you want\n");
    scanf("%d",&iValue);
    

    iRet=EvenOdd(iValue);

    if (iRet==TRUE)
    {
        printf(" Even Number ");
    }
    else
    {
         printf(" Odd Number ");
    }
    

    return 0;
}