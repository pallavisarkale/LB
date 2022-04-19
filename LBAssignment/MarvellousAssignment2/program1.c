//Assignment 2
// Accept number from user and print that number of * on screen usin for loop

#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       print number of *
//  Input :             Integer
//  Output :            number of (*)
//  Date :              19/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;
    for (iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*\n");
    }
    
}

int main()
{
    int iValue1=0;
    
    printf("how many  number wants  to display : \n");
    scanf("%d",&iValue1);

    Display(iValue1);

    
return 0;
}